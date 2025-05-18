#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QObject>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();


private slots:

    void on_BtnQuit_clicked();

    void on_button1_clicked();

    void on_button2_clicked();

    void on_button3_clicked();

    void on_button4_clicked();

    void on_buttonextra_clicked();

    void on_codeline1_returnPressed();

    void on_codeline2_returnPressed();

    void on_codeline3_returnPressed();

    void on_codeline4_returnPressed();

    void on_codeline5_returnPressed();

    void on_codeline6_returnPressed();

    void on_codeline7_returnPressed();

    void on_codeline8_returnPressed();

    void on_codeline9_returnPressed();

    void on_codeline10_returnPressed();

    void on_codeline11_returnPressed();

    void on_codeline12_returnPressed();

    void on_codeline13_returnPressed();

    void on_codeline14_returnPressed();

    void on_codeline15_returnPressed();

    void on_codeline16_returnPressed();

    void on_codeline17_returnPressed();

    void on_codeline18_returnPressed();

    void on_button_retry_clicked();

    void on_button_execute_clicked();

    void on_button_file_clicked();

private:
    Ui::Widget *ui;

    void op_input(QString s, int codenum);
    void op_demonstrate(int robcurrent,int codecurrent, QQueue <int> input, QStack <int> output);
    void op_clear();
    void op_errormessage(int codenum);
    void op_successmessage();
    void op_failmessage();
    void op_deathroutinemessage();
    void inbox(int codenum);
    void outbox(int codenum);
    void copyfrom(int codenum);
    void copyto(int codenum);
    void add(int codenum);
    void sub(int codenum);
    void jump(int codenum);
    void jumpifzero(int codenum);
    void jumpifnegative(int codenum);
    void bump(int codenum, char whattodo);
    bool time_to_break();
    bool anscheck();
    bool selfanscheck(int total, int* array);
    void move_robot(int destination);
    void delay(int milliseconds);

};
#endif // WIDGET_H
