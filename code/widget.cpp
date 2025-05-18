#include <iostream>
#include <fstream>
#include <windows.h>
#include <stdlib.h>
#include <QQueue>
#include <QStack>
#include <QString>
#include <QObject>
#include <QMessageBox>
#include <QTimer>
#include <QPropertyAnimation>
#include <QPauseAnimation>
#include <QParallelAnimationGroup>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include "widget.h"
#include "ui_widget.h"
//#include "selfdefine.cpp"
# define inf 1e9
//#include "main.cpp"
struct worker{
    int curpos;
    int curnum;
};
struct opr{
    QString oprname;
    int oprpos=-1;
    bool illegal = 0;
}rob[105];
worker current = {1,-114514};
int record,levelselect,number;//number of the lines of the orders
QString justdoit;
QQueue <int> input;
QStack <int> output;
int space[25] = {0};//record the number in x-th space
int cnt = 0;
int index = 0;
int instructionaccess[10][11]={{0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0},{1,1,1,1,1,1,1,1,0,0,0},{1,1,1,1,1,1,1,1,0,0,0},{1,1,1,1,1,1,1,1,1,1,0}};
int spaceaccess[10]={0,0,3,3,4};
//inbox0 outbox1 copyfrom2 copyto3 add4 sub5 jump6 jumpifzero7 jumpifnegative8 bump+9 bump-10


//selfdefine variables definition
int selfinboxtotal;
int selfoffer[114];
int selfoutboxtotal;
int selfexamine[114];
int selfinstructionaccess[11]={1,1,1,1,1,1,1,1,1,1,1};
//inbox0 outbox1 copyfrom2 copyto3 add4 sub5 jump6 jumpifzero7 jumpifnegative8 bump+9 bump-10
int selfspaceaccess;
int selfspacevalue[15];

QString self_label_info;
QString self_label_require;
QString self_label_avspace;
QString self_label_avcommand;


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    QFile FileSelfDefine("C:\\FinalWork_by_LQL&MZR\\code\\selfdefine.txt");
    FileSelfDefine.open(QIODevice::ReadOnly | QIODevice::Text);
    QString data;

    QTextStream fin(&FileSelfDefine);

    fin >> selfinboxtotal;
    for(int i = 0; i < selfinboxtotal; i++)
        fin >> selfoffer[i];

    fin >> selfoutboxtotal;
    for(int i = 0; i < selfoutboxtotal; i++)
        fin >> selfexamine[i];

    for(int i = 0; i < 11; i++)
        fin >> selfinstructionaccess[i];

    fin >> selfspaceaccess;
    for(int i = 0; i < selfspaceaccess; i++)
        fin >> selfspacevalue[i];
    QString nullstring = fin.readLine();
    self_label_info = fin.readLine();
    self_label_require = fin.readLine();
    self_label_avspace = fin.readLine();
    self_label_avcommand = fin.readLine();

    FileSelfDefine.close();

    this->setWindowTitle("HumanResourceMachine");
    this->setWindowIcon(QIcon("C:\\FinalWork_by_LQL&MZR\\code\\lql.ico"));
    this->setMinimumSize(QSize(800, 600));
    this->setMaximumSize(QSize(800, 600));
    QIcon loongicon("C:\\FinalWork_by_LQL&MZR\\code\\Yanami_Anna_chara.png");
    ui->robot->setIcon(loongicon);

    op_clear();
}

Widget::~Widget()
{
    delete ui;
}
void Widget::delay(int milliseconds) {
    QEventLoop loop;
    QTimer::singleShot(milliseconds, &loop, &QEventLoop::quit);
    loop.exec();
}
void Widget::op_clear(){
    FILE *file1 = fopen("C:\\FinalWork_by_LQL&MZR\\code\\record.txt","r");
    fscanf(file1, "%d", &record);
    fclose(file1);
    if(record == 0){
        ui->button1->setEnabled(true);
        ui->button2->setEnabled(false);
        ui->button3->setEnabled(false);
        ui->button4->setEnabled(false);
        ui->buttonextra->setEnabled(false);
    }
    else if(record == 1){
        ui->button1->setEnabled(true);
        ui->button2->setEnabled(true);
        ui->button3->setEnabled(false);
        ui->button4->setEnabled(false);
        ui->buttonextra->setEnabled(false);
    }
    else if(record == 2){
        ui->button1->setEnabled(true);
        ui->button2->setEnabled(true);
        ui->button3->setEnabled(true);
        ui->button4->setEnabled(false);
        ui->buttonextra->setEnabled(false);
    }
    else if(record == 3){
        ui->button1->setEnabled(true);
        ui->button2->setEnabled(true);
        ui->button3->setEnabled(true);
        ui->button4->setEnabled(true);
        ui->buttonextra->setEnabled(false);
    }
    else if(record >= 4){
        ui->button1->setEnabled(true);
        ui->button2->setEnabled(true);
        ui->button3->setEnabled(true);
        ui->button4->setEnabled(true);
        ui->buttonextra->setEnabled(true);
    }
    for(int i=0;i<=100;i++){
        rob[i].oprname="";
        rob[i].oprpos=-1;
        rob[i].illegal=0;
    }
    input.clear();
    output.clear();
    number = 0;
    cnt = 0;
    index = 0;
    current.curnum=-114514;
    current.curpos=1;
    // reset the space to be available
    for(int i = 0; i < 25; i++)
        space[i] = -inf;
    QString space = "spaceline";
    QString spacelabel = "spacelabel";
    for(int i = 0; i < spaceaccess[levelselect]; i++){
        QString singlenumber = QString::number(i);
        QString lineeditaddnumber = space + singlenumber;
        QString labeladdnumber = spacelabel + singlenumber;
        QLineEdit *db1 = findChild<QLineEdit *>(lineeditaddnumber);
        QLabel *db2 = findChild<QLabel *>(labeladdnumber);
        db1->setEnabled(true);
        db2->setEnabled(true);
    }

    for(int i = spaceaccess[levelselect]; i <= 9; i++){
        QString singlenumber = QString::number(i);
        QString lineeditaddnumber = space + singlenumber;
        QString labeladdnumber = spacelabel + singlenumber;
        QLineEdit *db1 = findChild<QLineEdit *>(lineeditaddnumber);
        QLabel *db2 = findChild<QLabel *>(labeladdnumber);
        db1->setEnabled(false);
        db2->setEnabled(false);
    }
    // reset the codeline to be available
    QString code = "codeline";
    for(int i = 1; i <= 18; i++){
        QString singlenumber = QString::number(i);
        QString lineeditaddnumber = code + singlenumber;
        QLineEdit *db = findChild<QLineEdit *>(lineeditaddnumber);
        db->setText("");
        db->setEnabled(true);
    }

    ui->robot->move(140,110);
    ui->currentline->move(140,70);
}

void Widget::op_input(QString s, int codenum)//input the operations and store them in "rob"
{

    for (int i = 0;i < s.length();i++) {
        if (s[i] == ' ') {
            rob[codenum].oprname = s.left(i);
            if (rob[codenum].oprname == "inbox" || rob[codenum].oprname == "outbox") {
                rob[codenum].illegal = 1;
                return ;
            }
            QString substring = s.mid(i+1, s.length()-1);
            bool isInt;
            substring.toInt(&isInt);
            if (isInt) {
                rob[codenum].oprpos = substring.toInt();
                return;
            }
            else {
                rob[codenum].illegal = 1;
                return ;
            }

        }
    }
    if (s == "inbox" || s == "outbox") {
        rob[codenum].oprname = s;
        return ;
    }
    else {
        rob[codenum].illegal = 1;
        return ;
    }
}

void Widget::op_demonstrate(int robcurrent,int codecurrent, QQueue <int> tmpinput, QStack <int> tmpoutput){
    //inbox strip
    QString inbox = "inline";
    for(int i=1;i<=6;i++){
        QString singlenumber = QString::number(i);
        QString inboxaddnumber = inbox + singlenumber;
        QLineEdit *db = findChild<QLineEdit *>(inboxaddnumber);
        if(tmpinput.empty())
            db->setText("X");
        else{
            QString inlineexactnumber = QString::number(tmpinput.first());
            db->setText(inlineexactnumber);
            tmpinput.dequeue();
        }
    }
    //outbox strip
    QString outbox = "outline";
    for(int i=1;i<=6;i++){
        QString singlenumber = QString::number(i);
        QString outboxaddnumber = outbox + singlenumber;
        QLineEdit *db = findChild<QLineEdit *>(outboxaddnumber);
        if(tmpoutput.empty())
            db->setText("X");
        else{
            QString inlineexactnumber = QString::number(tmpoutput.top());
            db->setText(inlineexactnumber);
            tmpoutput.pop();
        }
    }
    //robot's number
    if(robcurrent==-114514)
        ui->currentline->setText("");
    else{
        QString singlenumber = QString::number(robcurrent);
        ui->currentline->setText(singlenumber);
    }

    //code's yajirushi
    QString yajirushi = "yajirushi";
    for(int i = 1; i <= 18; i++){
        QString singlenumber = QString::number(i);
        QString yajirushiaddnumber = yajirushi + singlenumber;
        QLabel *db = findChild<QLabel *>(yajirushiaddnumber);
        if(i == codecurrent)
            db->setText(">");
        else
            db->setText("");
    }

    //grass
    QString spacename = "spaceline";
    for(int i = 0; i < spaceaccess[levelselect]; i++){
        QString singlenumber = QString::number(i);
        QString spacenameaddnumber = spacename + singlenumber;
        QLineEdit *db = findChild<QLineEdit *>(spacenameaddnumber);
        if(space[i+1] == -inf)
            db->setText(" ");
        else{
            QString spaceexactnumber = QString::number(space[i+1]);
            db->setText(spaceexactnumber);
        }
    }
    for(int i = spaceaccess[levelselect]; i < 10; i++){
        QString singlenumber = QString::number(i);
        QString spacenameaddnumber = spacename + singlenumber;
        QLineEdit *db = findChild<QLineEdit *>(spacenameaddnumber);
        db->setText("");
    }
}
bool Widget::time_to_break(){
    int cur = output.size();
    if(levelselect==1) return cur == 2;
    if(levelselect==2) return cur == 8;
    if(levelselect==3) return cur == 2;
    if(levelselect==4) return cur == 4;
    if(levelselect==5) return cur == selfoutboxtotal;
    return 0;
}
bool Widget::selfanscheck(int total, int* array){
    bool flag=1;
    if(total!=selfoutboxtotal)	return 0;
    for(int i=1;i<=total;i++){
        if(array[i]!=selfexamine[selfoutboxtotal-i])
            flag=0;
    }
    return flag;
}

bool Widget::anscheck(){
    int cur = 0, t[25] = {0};
    while (!output.empty()) {
        t[++cur] = output.top();
        output.pop();
    }
    int tmp_cur = cur;
    while (tmp_cur)
        output.push(t[tmp_cur--]);

    if(levelselect==1) return (cur == 2 && t[1] == 2 && t[2] == 1);
    if(levelselect==2) return (cur == 8 && abs(t[1]) == 18 && t[2] == -t[1] && abs(t[3]) == 0 && t[4] == -t[3] && abs(t[5]) == 4 && t[5] == -t[6] && abs(t[7]) == 6 && t[8] == -t[7]);
    if(levelselect==3) return (cur == 2 && t[1] == -3 && t[2] == 7);
    if(levelselect==4) return (cur == 4 && t[1] == 0 && t[2] == 7 && t[3] == 2 && t[4] == 1);
    if(levelselect==5) return selfanscheck(cur, t);
    return 0;
}

void Widget::move_robot(int destination){

    int x = ui->robot->pos().x();
    int y1 = 110, y2 = 70;

    QPropertyAnimation *transrobot = new QPropertyAnimation(ui->robot, "geometry");
    transrobot->setDuration(500);
    transrobot->setStartValue(QRect(x, y1, 53, 121));
    transrobot->setEndValue(QRect(destination, y1, 53, 121));
    transrobot->setEasingCurve(QEasingCurve::OutBounce);

    QPropertyAnimation *transcurrent = new QPropertyAnimation(ui->currentline, "geometry");
    transcurrent->setDuration(500);
    transcurrent->setStartValue(QRect(x, y2, 53, 41));
    transcurrent->setEndValue(QRect(destination, y2, 53, 41));
    transcurrent->setEasingCurve(QEasingCurve::OutBounce);

    QParallelAnimationGroup *AnimationGroup = new QParallelAnimationGroup;

    // 将动画添加到并行动画组
    AnimationGroup->addAnimation(transcurrent);
    AnimationGroup->addAnimation(transrobot);

    AnimationGroup->start();


}
void Widget::inbox(int codenum){
    cnt++;
    move_robot(90);

    current.curnum=input.first();
    input.dequeue();
    op_demonstrate(current.curnum, codenum, input, output);
    delay(500);
    return;
}

void Widget::outbox(int codenum){
    cnt++;
    move_robot(430);

    output.push(current.curnum);
    current.curnum=-114514;
    op_demonstrate(current.curnum, codenum, input, output);

    delay(500);
    return;
}

void Widget::copyfrom(int codenum){
    int pos = rob[codenum].oprpos + 1;
    int destination;
    if(rob[codenum].oprpos == 0 || rob[codenum].oprpos == 5) destination=140;
    if(rob[codenum].oprpos == 1 || rob[codenum].oprpos == 6) destination=200;
    if(rob[codenum].oprpos == 2 || rob[codenum].oprpos == 7) destination=260;
    if(rob[codenum].oprpos == 3 || rob[codenum].oprpos == 8) destination=320;
    if(rob[codenum].oprpos == 4 || rob[codenum].oprpos == 9) destination=380;

    cnt++;
    move_robot(destination);

    current.curnum = space[pos];

    op_demonstrate(current.curnum, codenum, input, output);
    delay(500);
    return;
}

void Widget::copyto(int codenum){
    int pos = rob[codenum].oprpos + 1;
    int destination;
    if(rob[codenum].oprpos == 0 || rob[codenum].oprpos == 5) destination=140;
    if(rob[codenum].oprpos == 1 || rob[codenum].oprpos == 6) destination=200;
    if(rob[codenum].oprpos == 2 || rob[codenum].oprpos == 7) destination=260;
    if(rob[codenum].oprpos == 3 || rob[codenum].oprpos == 8) destination=320;
    if(rob[codenum].oprpos == 4 || rob[codenum].oprpos == 9) destination=380;

    cnt++;
    move_robot(destination);

    space[pos] = current.curnum;

    op_demonstrate(current.curnum, codenum, input, output);
    delay(500);
    return;
}

void Widget::add(int codenum){
    int pos = rob[codenum].oprpos + 1;
    int destination;
    if(rob[codenum].oprpos == 0 || rob[codenum].oprpos == 5) destination=140;
    if(rob[codenum].oprpos == 1 || rob[codenum].oprpos == 6) destination=200;
    if(rob[codenum].oprpos == 2 || rob[codenum].oprpos == 7) destination=260;
    if(rob[codenum].oprpos == 3 || rob[codenum].oprpos == 8) destination=320;
    if(rob[codenum].oprpos == 4 || rob[codenum].oprpos == 9) destination=380;

    cnt++;
    move_robot(destination);

    current.curnum += space[pos];

    op_demonstrate(current.curnum, codenum, input, output);
    delay(500);
    return;
}

void Widget::sub(int codenum){
    int pos = rob[codenum].oprpos + 1;
    int destination;
    if(rob[codenum].oprpos == 0 || rob[codenum].oprpos == 5) destination=140;
    if(rob[codenum].oprpos == 1 || rob[codenum].oprpos == 6) destination=200;
    if(rob[codenum].oprpos == 2 || rob[codenum].oprpos == 7) destination=260;
    if(rob[codenum].oprpos == 3 || rob[codenum].oprpos == 8) destination=320;
    if(rob[codenum].oprpos == 4 || rob[codenum].oprpos == 9) destination=380;

    cnt++;
    move_robot(destination);

    current.curnum -= space[pos];

    op_demonstrate(current.curnum, codenum, input, output);
    delay(500);
    return;
}

void Widget::jump(int codenum){

    cnt++;
    op_demonstrate(current.curnum, codenum, input, output);

    return;
}

void Widget::jumpifzero(int codenum){

    cnt++;
    op_demonstrate(current.curnum, codenum, input, output);

    return;
}

void Widget::jumpifnegative(int codenum){

    cnt++;
    op_demonstrate(current.curnum, codenum, input, output);
    return;
}

void Widget::bump(int codenum, char whattodo)
{
    int pos = rob[codenum].oprpos + 1;
    int destination;
    if(rob[codenum].oprpos == 0 || rob[codenum].oprpos == 5) destination=140;
    if(rob[codenum].oprpos == 1 || rob[codenum].oprpos == 6) destination=200;
    if(rob[codenum].oprpos == 2 || rob[codenum].oprpos == 7) destination=260;
    if(rob[codenum].oprpos == 3 || rob[codenum].oprpos == 8) destination=320;
    if(rob[codenum].oprpos == 4 || rob[codenum].oprpos == 9) destination=380;

    cnt++;
    move_robot(destination);

    if(whattodo=='+')   space[pos]++;
    else if(whattodo=='-')  space[pos]--;

    current.curnum = space[pos];
    op_demonstrate(current.curnum, codenum, input, output);
    delay(500);
    return;
}

void Widget::on_BtnQuit_clicked()
{
    this->close();
}

void Widget::on_button1_clicked()
{
    levelselect = 1;

    op_clear();

    ui->label_info->setText("Level 1 --- First Things First");
    ui->label_require->setText("Output everything in order.");
    ui->label_avspace->setText("Available Space:0");
    ui->label_avcommand->setText("inbox outbox");

    input.enqueue(1);
    input.enqueue(2);
    op_demonstrate(-114514,0,input,output);
    ui->stackedWidget->setCurrentIndex(1);

}

void Widget::on_button2_clicked()
{
    levelselect = 2;

    op_clear();

    ui->label_info->setText("Level 2 --- Do Some Subtractions");
    ui->label_require->setText("For every two nums A and B, output A-B and B-A in order.");
    ui->label_avspace->setText("Available Space:3");
    ui->label_avcommand->setText("inbox outbox copyfrom copyto add sub jump jumpifzero");

    space[1] = -inf;
    space[2] = -inf;
    space[3] = -inf;

    input.enqueue(3);
    input.enqueue(9);
    input.enqueue(5);
    input.enqueue(1);
    input.enqueue(-2);
    input.enqueue(-2);
    input.enqueue(9);
    input.enqueue(-9);
    op_demonstrate(-114514,0,input,output);
    ui->stackedWidget->setCurrentIndex(1);

}

void Widget::on_button3_clicked()
{
    levelselect = 3;

    op_clear();

    ui->label_info->setText("Level 3 --- We Are Homo!");
    ui->label_require->setText("Get two nums. If same, output one. Otherwise, throw all.");
    ui->label_avspace->setText("Available Space:3");
    ui->label_avcommand->setText("inbox outbox copyfrom copyto add sub jump jumpifzero");

    space[1] = -inf;
    space[2] = -inf;
    space[3] = -inf;

    input.enqueue(6);
    input.enqueue(2);
    input.enqueue(7);
    input.enqueue(7);
    input.enqueue(-9);
    input.enqueue(3);
    input.enqueue(-3);
    input.enqueue(-3);

    op_demonstrate(-114514,0,input,output);
    ui->stackedWidget->setCurrentIndex(1);


}

void Widget::on_button4_clicked()
{
    levelselect = 4;

    op_clear();

    ui->label_info->setText("Level 4 --- Let's try division!");
    ui->label_require->setText("Get two numbers A and B. Output A/B omitting the remainder.");
    ui->label_avspace->setText("Available Space:4");
    ui->label_avcommand->setText("inbox outbox copyfrom copyto add sub jump jumpifzero jumpifnegative bump+");

    space[1] = -inf;
    space[2] = -inf;
    space[3] = -inf;
    space[4] = 0;

    input.enqueue(7);
    input.enqueue(4);
    input.enqueue(7);
    input.enqueue(3);
    input.enqueue(15);
    input.enqueue(2);
    input.enqueue(0);
    input.enqueue(9);
    op_demonstrate(-114514,0,input,output);
    ui->stackedWidget->setCurrentIndex(1);

}

void Widget::on_buttonextra_clicked()
{
    levelselect = 5;
    spaceaccess[5] = selfspaceaccess;
    for(int i=0;i<11;i++)
        instructionaccess[5][i]=selfinstructionaccess[i];
    op_clear();

    ui->label_info->setText(self_label_info);
    ui->label_require->setText(self_label_require);
    ui->label_avspace->setText(self_label_avspace);
    ui->label_avcommand->setText(self_label_avcommand);

    for(int i=1;i<=selfspaceaccess;i++)
        space[i]=selfspacevalue[i-1];
    for(int i=0;i<selfinboxtotal;i++)
        input.enqueue(selfoffer[i]);
    op_demonstrate(-114514,0,input,output);
    ui->stackedWidget->setCurrentIndex(1);

}

void Widget::on_codeline1_returnPressed()
{
    QString code = ui->codeline1->text();
    ui->codeline1->setEnabled(false);
    op_input(code, 1);
    number += 1;
}

void Widget::on_codeline2_returnPressed()
{
    QString code = ui->codeline2->text();
    ui->codeline2->setEnabled(false);
    op_input(code, 2);
    number += 1;
}

void Widget::on_codeline3_returnPressed()
{
    QString code = ui->codeline3->text();
    ui->codeline3->setEnabled(false);
    op_input(code, 3);
    number += 1;
}

void Widget::on_codeline4_returnPressed()
{
    QString code = ui->codeline4->text();
    ui->codeline4->setEnabled(false);
    op_input(code, 4);
    number += 1;
}

void Widget::on_codeline5_returnPressed()
{
    QString code = ui->codeline5->text();
    ui->codeline5->setEnabled(false);
    op_input(code, 5);
    number += 1;
}

void Widget::on_codeline6_returnPressed()
{
    QString code = ui->codeline6->text();
    ui->codeline6->setEnabled(false);
    op_input(code, 6);
    number += 1;
}

void Widget::on_codeline7_returnPressed()
{
    QString code = ui->codeline7->text();
    ui->codeline7->setEnabled(false);
    op_input(code, 7);
    number += 1;
}

void Widget::on_codeline8_returnPressed()
{
    QString code = ui->codeline8->text();
    ui->codeline8->setEnabled(false);
    op_input(code, 8);
    number += 1;
}

void Widget::on_codeline9_returnPressed()
{
    QString code = ui->codeline9->text();
    ui->codeline9->setEnabled(false);
    op_input(code, 9);
    number += 1;
}

void Widget::on_codeline10_returnPressed()
{
    QString code = ui->codeline10->text();
    ui->codeline10->setEnabled(false);
    op_input(code, 10);
    number += 1;
}

void Widget::on_codeline11_returnPressed()
{
    QString code = ui->codeline11->text();
    ui->codeline11->setEnabled(false);
    op_input(code, 11);
    number += 1;
}

void Widget::on_codeline12_returnPressed()
{
    QString code = ui->codeline12->text();
    ui->codeline12->setEnabled(false);
    op_input(code, 12);
    number += 1;
}

void Widget::on_codeline13_returnPressed()
{
    QString code = ui->codeline13->text();
    ui->codeline13->setEnabled(false);
    op_input(code, 13);
    number += 1;
}

void Widget::on_codeline14_returnPressed()
{
    QString code = ui->codeline14->text();
    ui->codeline14->setEnabled(false);
    op_input(code, 14);
    number += 1;
}

void Widget::on_codeline15_returnPressed()
{
    QString code = ui->codeline15->text();
    ui->codeline15->setEnabled(false);
    op_input(code, 15);
    number += 1;
}

void Widget::on_codeline16_returnPressed()
{
    QString code = ui->codeline16->text();
    ui->codeline16->setEnabled(false);
    op_input(code, 16);
    number += 1;
}

void Widget::on_codeline17_returnPressed()
{
    QString code = ui->codeline17->text();
    ui->codeline17->setEnabled(false);
    op_input(code, 17);
    number += 1;
}

void Widget::on_codeline18_returnPressed()
{
    QString code = ui->codeline18->text();
    ui->codeline18->setEnabled(false);
    op_input(code, 18);
    number += 1;
}
void Widget::op_successmessage(){
    QMessageBox *success = new QMessageBox();
    //success->setIcon(QMessageBox::Information);
    success->setIconPixmap(QPixmap("C:\\FinalWork_by_LQL&MZR\\code\\Success.ico").scaled(100, 100));
    success->setWindowTitle("Success");
    //The total number of orders executed is %d", cnt
    QPushButton *confirmbutton = new QPushButton();
    QString getnum = QString::number(cnt);
    success->setText("Success");
    QString successinfo = "The total number of orders executed is " + getnum;
    success->setInformativeText(successinfo);
    confirmbutton = success->addButton("Next",QMessageBox::AcceptRole);
    success->show();
    connect(confirmbutton,&QPushButton::clicked,this,[=](){
        op_clear();
        ui->stackedWidget->setCurrentIndex(0);
    });
    return;
}
void Widget::op_failmessage(){
    QMessageBox *fail = new QMessageBox();
    fail->setIconPixmap(QPixmap("C:\\FinalWork_by_LQL&MZR\\code\\Fail.ico").scaled(100, 100));
    fail->setWindowTitle("Fail");
    QPushButton *confirmbutton = new QPushButton();
    fail->setText("Fail");
    confirmbutton = fail->addButton("Retry",QMessageBox::AcceptRole);
    fail->show();
    connect(confirmbutton,&QPushButton::clicked,this,[=](){
        op_clear();
        ui->stackedWidget->setCurrentIndex(0);
    });
    return;
}
void Widget::op_errormessage(int codenum){
    QMessageBox *error = new QMessageBox();
    error->setIcon(QMessageBox::Critical);
    error->setWindowTitle("Error");
    QPushButton *confirmbutton = new QPushButton();
    QString getnum = QString::number(codenum);
    QString errorinfo = "Error on Instruction " + getnum;
    error->setText(errorinfo);
    confirmbutton = error->addButton("Retry",QMessageBox::AcceptRole);
    error->show();
    connect(confirmbutton,&QPushButton::clicked,this,[=](){
        op_clear();
        ui->stackedWidget->setCurrentIndex(0);
    });
    return;
}
void Widget::op_deathroutinemessage(){
    QMessageBox *error = new QMessageBox();
    error->setIcon(QMessageBox::Critical);
    error->setWindowTitle("Error");
    QPushButton *confirmbutton = new QPushButton();

    error->setText("You have a death routine!!!");
    confirmbutton = error->addButton("Retry",QMessageBox::AcceptRole);
    error->show();
    connect(confirmbutton,&QPushButton::clicked,this,[=](){
        op_clear();
        ui->stackedWidget->setCurrentIndex(0);
    });
    return;
}
void Widget::on_button_execute_clicked()
{
    current.curnum=-114514;
    current.curpos=1;
    //op_errormessage(1);

    for(int i=1;i<=number;i++)
    {
        if (cnt > 10000){
            op_deathroutinemessage();
            return;
        }
        if (rob[i].illegal){
            op_demonstrate(current.curnum, i, input, output);
            op_errormessage(i);
            return;
        }
        if(instructionaccess[levelselect][0] && rob[i].oprname=="inbox"){
            if (input.empty()) break;
            inbox(i);
        }
        else if(instructionaccess[levelselect][1] && rob[i].oprname=="outbox"){
            if(current.curnum==-114514){
                op_demonstrate(current.curnum, i, input, output);
                op_errormessage(i);
                return;
            }
            outbox(i);
        }
        else if (instructionaccess[levelselect][2] && rob[i].oprname == "copyfrom"){
            int pos = rob[i].oprpos + 1;
            if (space[pos] == -inf || pos < 1 || pos > spaceaccess[levelselect]){
                op_demonstrate(current.curnum, i, input, output);
                op_errormessage(i);
                return;
            }

            copyfrom(i);
        }
        else if (instructionaccess[levelselect][3] && rob[i].oprname == "copyto") {
            int pos = rob[i].oprpos + 1;
            if (current.curnum == -114514 || pos < 1 || pos > spaceaccess[levelselect]){
                op_demonstrate(current.curnum, i, input, output);
                op_errormessage(i);
                return;
            }
            copyto(i);
        }
        else if (instructionaccess[levelselect][4] && rob[i].oprname == "add") {
            int pos = rob[i].oprpos + 1;
            if (current.curnum == -114514 || pos < 1 || pos > spaceaccess[levelselect] || space[pos] == -inf){
                op_demonstrate(current.curnum, i, input, output);
                op_errormessage(i);
                return;
            }
            add(i);
        }
        else if (instructionaccess[levelselect][5] && rob[i].oprname == "sub") {
            int pos = rob[i].oprpos + 1;
            if (current.curnum == -114514 || pos < 1 || pos > spaceaccess[levelselect] || space[pos] == -inf){
                op_demonstrate(current.curnum, i, input, output);
                op_errormessage(i);
                return;
            }

            sub(i);
        }
        else if (instructionaccess[levelselect][6] && rob[i].oprname == "jump") {
            int jumpto = rob[i].oprpos;
                if (jumpto < 1 || jumpto > number){
                    op_demonstrate(current.curnum, i, input, output);
                    op_errormessage(i);
                    return;
                }
            jump(i);
            i = rob[i].oprpos - 1;
            if (time_to_break()) break;
        }
        else if (instructionaccess[levelselect][7] && rob[i].oprname == "jumpifzero") {
            int jumpto = rob[i].oprpos;
                if (jumpto < 1 || jumpto > number || current.curnum == -114514){
                    op_demonstrate(current.curnum, i, input, output);
                    op_errormessage(i);
                    return;
                }
            jumpifzero(i);
            if (current.curnum == 0) i = rob[i].oprpos - 1;
            if (time_to_break()) break;
        }
        else if (instructionaccess[levelselect][8] && rob[i].oprname == "jumpifnegative") {
            int jumpto = rob[i].oprpos;
                if (jumpto < 1 || jumpto > number || current.curnum == -114514){
                    op_demonstrate(current.curnum, i, input, output);
                    op_errormessage(i);
                    return;
                }
            jumpifnegative(i);
            if (current.curnum < 0) i = rob[i].oprpos - 1;
            if (time_to_break()) break;
        }
        else if (instructionaccess[levelselect][9] && rob[i].oprname == "bump+") {
            int pos = rob[i].oprpos + 1;
            if (space[pos] == -inf || pos < 1 || pos > spaceaccess[levelselect]){
                op_demonstrate(current.curnum, i, input, output);
                op_errormessage(i);
                return;
            }
            bump(i, '+');
        }
        else if (instructionaccess[levelselect][10] && rob[i].oprname == "bump-") {
            int pos = rob[i].oprpos + 1;
            if (space[pos] == -inf || pos < 1 || pos > spaceaccess[levelselect]){
                op_demonstrate(current.curnum, i, input, output);
                op_errormessage(i);
                return;
            }
            bump(i, '-');
        }
        else{
            op_demonstrate(current.curnum, i, input, output);
            op_errormessage(i);
            return;
        }
    }
    if (input.empty() && anscheck()){//
        op_successmessage();
        if(record<levelselect) {
            FILE *file1 = fopen("C:\\FinalWork_by_LQL&MZR\\code\\record.txt","w");
            fprintf(file1, "%d", record+1);
            fclose(file1);
        }

    }
    else{
        op_failmessage();

    }

}

void Widget::on_button_retry_clicked()
{
    op_clear();
    ui->stackedWidget->setCurrentIndex(0);
}
void Widget::on_button_file_clicked()
{
    ui->codeline1->setEnabled(false);
    ui->codeline2->setEnabled(false);
    ui->codeline3->setEnabled(false);
    ui->codeline4->setEnabled(false);
    ui->codeline5->setEnabled(false);
    ui->codeline6->setEnabled(false);
    ui->codeline7->setEnabled(false);
    ui->codeline8->setEnabled(false);
    ui->codeline9->setEnabled(false);
    ui->codeline10->setEnabled(false);
    ui->codeline11->setEnabled(false);
    ui->codeline12->setEnabled(false);
    ui->codeline13->setEnabled(false);
    ui->codeline14->setEnabled(false);
    ui->codeline15->setEnabled(false);
    ui->codeline16->setEnabled(false);
    ui->codeline17->setEnabled(false);
    ui->codeline18->setEnabled(false);

    QString file_path = QFileDialog::getOpenFileName(this,tr("请选择文件"),"C:\\FinalWork_by_LQL&MZR\\code","txt files(*.txt)");
    QFile FileToInput(file_path);
    FileToInput.open(QIODevice::ReadOnly | QIODevice::Text);
    QString data;

    QTextStream fin(&FileToInput);

    fin >> number;
    QString nullstring = fin.readLine();
    QString codelines;

    for(int i = 1; i <= number; i++){
        codelines = fin.readLine();
        op_input(codelines, i);
        QString codelinename = "codeline";

        QString singlenumber = QString::number(i);
        QString codelinenameaddnumber = codelinename + singlenumber;
        QLineEdit *db = findChild<QLineEdit *>(codelinenameaddnumber);
        db->setText(codelines);
    }

    FileToInput.close();
}
