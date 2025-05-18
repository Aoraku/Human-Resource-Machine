/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page_select;
    QLabel *Label_welcome;
    QPushButton *BtnQuit;
    QLabel *Label_statement;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *button4;
    QPushButton *buttonextra;
    QLabel *Label_welcome_2;
    QWidget *pg_level;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *outlabel;
    QLineEdit *outline1;
    QLineEdit *outline2;
    QLineEdit *outline3;
    QLineEdit *outline4;
    QLineEdit *outline5;
    QLineEdit *outline6;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *inlabel;
    QLineEdit *inline1;
    QLineEdit *inline2;
    QLineEdit *inline3;
    QLineEdit *inline4;
    QLineEdit *inline5;
    QLineEdit *inline6;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *spaceline0;
    QLabel *spacelabel0;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *spaceline1;
    QLabel *spacelabel1;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *spaceline2;
    QLabel *spacelabel2;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *spaceline3;
    QLabel *spacelabel3;
    QVBoxLayout *verticalLayout_8;
    QLineEdit *spaceline4;
    QLabel *spacelabel4;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_3;
    QLabel *codelabel1;
    QLineEdit *codeline1;
    QHBoxLayout *horizontalLayout_6;
    QLabel *codelabel2;
    QLineEdit *codeline2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *codelabel3;
    QLineEdit *codeline3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *codelabel4;
    QLineEdit *codeline4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *codelabel5;
    QLineEdit *codeline5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *codelabel6;
    QLineEdit *codeline6;
    QHBoxLayout *horizontalLayout_11;
    QLabel *codelabel7;
    QLineEdit *codeline7;
    QHBoxLayout *horizontalLayout_12;
    QLabel *codelabel8;
    QLineEdit *codeline8;
    QHBoxLayout *horizontalLayout_13;
    QLabel *codelabel9;
    QLineEdit *codeline9;
    QHBoxLayout *horizontalLayout_15;
    QLabel *codelabel10;
    QLineEdit *codeline10;
    QHBoxLayout *horizontalLayout_14;
    QLabel *codelabel11;
    QLineEdit *codeline11;
    QHBoxLayout *horizontalLayout_16;
    QLabel *codelabel12;
    QLineEdit *codeline12;
    QHBoxLayout *horizontalLayout_17;
    QLabel *codelabel13;
    QLineEdit *codeline13;
    QHBoxLayout *horizontalLayout_18;
    QLabel *codelabel14;
    QLineEdit *codeline14;
    QHBoxLayout *horizontalLayout_19;
    QLabel *codelabel15;
    QLineEdit *codeline15;
    QHBoxLayout *horizontalLayout_22;
    QLabel *codelabel16;
    QLineEdit *codeline16;
    QHBoxLayout *horizontalLayout_20;
    QLabel *codelabel17;
    QLineEdit *codeline17;
    QHBoxLayout *horizontalLayout_21;
    QLabel *codelabel18;
    QLineEdit *codeline18;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *spaceline5;
    QLabel *spacelabel5;
    QVBoxLayout *verticalLayout_10;
    QLineEdit *spaceline6;
    QLabel *spacelabel6;
    QVBoxLayout *verticalLayout_11;
    QLineEdit *spaceline7;
    QLabel *spacelabel7;
    QVBoxLayout *verticalLayout_12;
    QLineEdit *spaceline8;
    QLabel *spacelabel8;
    QVBoxLayout *verticalLayout_13;
    QLineEdit *spaceline9;
    QLabel *spacelabel9;
    QPushButton *button_retry;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_info;
    QLabel *label_require;
    QLabel *label_avspace;
    QLabel *label_avinstructions;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_15;
    QLabel *yajirushi1;
    QLabel *yajirushi2;
    QLabel *yajirushi3;
    QLabel *yajirushi4;
    QLabel *yajirushi5;
    QLabel *yajirushi6;
    QLabel *yajirushi7;
    QLabel *yajirushi8;
    QLabel *yajirushi9;
    QLabel *yajirushi10;
    QLabel *yajirushi11;
    QLabel *yajirushi12;
    QLabel *yajirushi13;
    QLabel *yajirushi14;
    QLabel *yajirushi15;
    QLabel *yajirushi16;
    QLabel *yajirushi17;
    QLabel *yajirushi18;
    QLineEdit *currentline;
    QPushButton *robot;
    QPushButton *button_execute;
    QLabel *label_avcommand;
    QPushButton *button_file;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1000, 800);
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1001, 801));
        page_select = new QWidget();
        page_select->setObjectName(QString::fromUtf8("page_select"));
        Label_welcome = new QLabel(page_select);
        Label_welcome->setObjectName(QString::fromUtf8("Label_welcome"));
        Label_welcome->setGeometry(QRect(170, 50, 801, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(18);
        font.setBold(false);
        font.setWeight(50);
        font.setStrikeOut(true);
        Label_welcome->setFont(font);
        BtnQuit = new QPushButton(page_select);
        BtnQuit->setObjectName(QString::fromUtf8("BtnQuit"));
        BtnQuit->setGeometry(QRect(450, 410, 221, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(15);
        BtnQuit->setFont(font1);
        Label_statement = new QLabel(page_select);
        Label_statement->setObjectName(QString::fromUtf8("Label_statement"));
        Label_statement->setGeometry(QRect(10, 450, 801, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Consolas"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        Label_statement->setFont(font2);
        layoutWidget = new QWidget(page_select);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 270, 501, 81));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        button1 = new QPushButton(layoutWidget);
        button1->setObjectName(QString::fromUtf8("button1"));
        button1->setFont(font1);

        horizontalLayout->addWidget(button1);

        button2 = new QPushButton(layoutWidget);
        button2->setObjectName(QString::fromUtf8("button2"));
        button2->setFont(font1);

        horizontalLayout->addWidget(button2);

        button3 = new QPushButton(layoutWidget);
        button3->setObjectName(QString::fromUtf8("button3"));
        button3->setFont(font1);

        horizontalLayout->addWidget(button3);

        button4 = new QPushButton(layoutWidget);
        button4->setObjectName(QString::fromUtf8("button4"));
        button4->setFont(font1);

        horizontalLayout->addWidget(button4);

        buttonextra = new QPushButton(layoutWidget);
        buttonextra->setObjectName(QString::fromUtf8("buttonextra"));
        buttonextra->setFont(font1);

        horizontalLayout->addWidget(buttonextra);

        Label_welcome_2 = new QLabel(page_select);
        Label_welcome_2->setObjectName(QString::fromUtf8("Label_welcome_2"));
        Label_welcome_2->setGeometry(QRect(130, 150, 801, 71));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Consolas"));
        font3.setPointSize(25);
        font3.setBold(true);
        font3.setWeight(75);
        font3.setStrikeOut(false);
        Label_welcome_2->setFont(font3);
        stackedWidget->addWidget(page_select);
        pg_level = new QWidget();
        pg_level->setObjectName(QString::fromUtf8("pg_level"));
        layoutWidget1 = new QWidget(pg_level);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(480, 30, 71, 289));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        outlabel = new QLabel(layoutWidget1);
        outlabel->setObjectName(QString::fromUtf8("outlabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(outlabel->sizePolicy().hasHeightForWidth());
        outlabel->setSizePolicy(sizePolicy);
        outlabel->setFont(font1);
        outlabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(outlabel);

        outline1 = new QLineEdit(layoutWidget1);
        outline1->setObjectName(QString::fromUtf8("outline1"));
        outline1->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(outline1->sizePolicy().hasHeightForWidth());
        outline1->setSizePolicy(sizePolicy1);
        QFont font4;
        font4.setFamily(QString::fromUtf8("Consolas"));
        font4.setPointSize(12);
        outline1->setFont(font4);
        outline1->setAlignment(Qt::AlignCenter);
        outline1->setReadOnly(true);

        verticalLayout_2->addWidget(outline1);

        outline2 = new QLineEdit(layoutWidget1);
        outline2->setObjectName(QString::fromUtf8("outline2"));
        outline2->setEnabled(true);
        sizePolicy1.setHeightForWidth(outline2->sizePolicy().hasHeightForWidth());
        outline2->setSizePolicy(sizePolicy1);
        outline2->setFont(font4);
        outline2->setAlignment(Qt::AlignCenter);
        outline2->setReadOnly(true);

        verticalLayout_2->addWidget(outline2);

        outline3 = new QLineEdit(layoutWidget1);
        outline3->setObjectName(QString::fromUtf8("outline3"));
        outline3->setEnabled(true);
        sizePolicy1.setHeightForWidth(outline3->sizePolicy().hasHeightForWidth());
        outline3->setSizePolicy(sizePolicy1);
        outline3->setFont(font4);
        outline3->setAlignment(Qt::AlignCenter);
        outline3->setReadOnly(true);

        verticalLayout_2->addWidget(outline3);

        outline4 = new QLineEdit(layoutWidget1);
        outline4->setObjectName(QString::fromUtf8("outline4"));
        outline4->setEnabled(true);
        sizePolicy1.setHeightForWidth(outline4->sizePolicy().hasHeightForWidth());
        outline4->setSizePolicy(sizePolicy1);
        outline4->setFont(font4);
        outline4->setAlignment(Qt::AlignCenter);
        outline4->setReadOnly(true);

        verticalLayout_2->addWidget(outline4);

        outline5 = new QLineEdit(layoutWidget1);
        outline5->setObjectName(QString::fromUtf8("outline5"));
        outline5->setEnabled(true);
        sizePolicy1.setHeightForWidth(outline5->sizePolicy().hasHeightForWidth());
        outline5->setSizePolicy(sizePolicy1);
        outline5->setFont(font4);
        outline5->setAlignment(Qt::AlignCenter);
        outline5->setReadOnly(true);

        verticalLayout_2->addWidget(outline5);

        outline6 = new QLineEdit(layoutWidget1);
        outline6->setObjectName(QString::fromUtf8("outline6"));
        outline6->setEnabled(true);
        sizePolicy1.setHeightForWidth(outline6->sizePolicy().hasHeightForWidth());
        outline6->setSizePolicy(sizePolicy1);
        outline6->setFont(font4);
        outline6->setAlignment(Qt::AlignCenter);
        outline6->setReadOnly(true);

        verticalLayout_2->addWidget(outline6);

        layoutWidget2 = new QWidget(pg_level);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 30, 63, 289));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        inlabel = new QLabel(layoutWidget2);
        inlabel->setObjectName(QString::fromUtf8("inlabel"));
        sizePolicy.setHeightForWidth(inlabel->sizePolicy().hasHeightForWidth());
        inlabel->setSizePolicy(sizePolicy);
        inlabel->setFont(font1);
        inlabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(inlabel);

        inline1 = new QLineEdit(layoutWidget2);
        inline1->setObjectName(QString::fromUtf8("inline1"));
        inline1->setEnabled(true);
        sizePolicy1.setHeightForWidth(inline1->sizePolicy().hasHeightForWidth());
        inline1->setSizePolicy(sizePolicy1);
        inline1->setFont(font4);
        inline1->setAlignment(Qt::AlignCenter);
        inline1->setReadOnly(true);

        verticalLayout->addWidget(inline1);

        inline2 = new QLineEdit(layoutWidget2);
        inline2->setObjectName(QString::fromUtf8("inline2"));
        inline2->setEnabled(true);
        sizePolicy1.setHeightForWidth(inline2->sizePolicy().hasHeightForWidth());
        inline2->setSizePolicy(sizePolicy1);
        inline2->setFont(font4);
        inline2->setAlignment(Qt::AlignCenter);
        inline2->setReadOnly(true);

        verticalLayout->addWidget(inline2);

        inline3 = new QLineEdit(layoutWidget2);
        inline3->setObjectName(QString::fromUtf8("inline3"));
        inline3->setEnabled(true);
        sizePolicy1.setHeightForWidth(inline3->sizePolicy().hasHeightForWidth());
        inline3->setSizePolicy(sizePolicy1);
        inline3->setFont(font4);
        inline3->setAlignment(Qt::AlignCenter);
        inline3->setReadOnly(true);

        verticalLayout->addWidget(inline3);

        inline4 = new QLineEdit(layoutWidget2);
        inline4->setObjectName(QString::fromUtf8("inline4"));
        inline4->setEnabled(true);
        sizePolicy1.setHeightForWidth(inline4->sizePolicy().hasHeightForWidth());
        inline4->setSizePolicy(sizePolicy1);
        inline4->setFont(font4);
        inline4->setAlignment(Qt::AlignCenter);
        inline4->setReadOnly(true);

        verticalLayout->addWidget(inline4);

        inline5 = new QLineEdit(layoutWidget2);
        inline5->setObjectName(QString::fromUtf8("inline5"));
        inline5->setEnabled(true);
        sizePolicy1.setHeightForWidth(inline5->sizePolicy().hasHeightForWidth());
        inline5->setSizePolicy(sizePolicy1);
        inline5->setFont(font4);
        inline5->setAlignment(Qt::AlignCenter);
        inline5->setReadOnly(true);

        verticalLayout->addWidget(inline5);

        inline6 = new QLineEdit(layoutWidget2);
        inline6->setObjectName(QString::fromUtf8("inline6"));
        inline6->setEnabled(true);
        sizePolicy1.setHeightForWidth(inline6->sizePolicy().hasHeightForWidth());
        inline6->setSizePolicy(sizePolicy1);
        inline6->setFont(font4);
        inline6->setAlignment(Qt::AlignCenter);
        inline6->setReadOnly(true);

        verticalLayout->addWidget(inline6);

        layoutWidget3 = new QWidget(pg_level);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(140, 240, 291, 81));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        spaceline0 = new QLineEdit(layoutWidget3);
        spaceline0->setObjectName(QString::fromUtf8("spaceline0"));
        spaceline0->setEnabled(true);
        sizePolicy1.setHeightForWidth(spaceline0->sizePolicy().hasHeightForWidth());
        spaceline0->setSizePolicy(sizePolicy1);
        spaceline0->setFont(font4);
        spaceline0->setAlignment(Qt::AlignCenter);
        spaceline0->setReadOnly(true);

        verticalLayout_3->addWidget(spaceline0);

        spacelabel0 = new QLabel(layoutWidget3);
        spacelabel0->setObjectName(QString::fromUtf8("spacelabel0"));
        sizePolicy1.setHeightForWidth(spacelabel0->sizePolicy().hasHeightForWidth());
        spacelabel0->setSizePolicy(sizePolicy1);
        spacelabel0->setFont(font4);
        spacelabel0->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(spacelabel0);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        spaceline1 = new QLineEdit(layoutWidget3);
        spaceline1->setObjectName(QString::fromUtf8("spaceline1"));
        spaceline1->setEnabled(true);
        sizePolicy1.setHeightForWidth(spaceline1->sizePolicy().hasHeightForWidth());
        spaceline1->setSizePolicy(sizePolicy1);
        spaceline1->setFont(font4);
        spaceline1->setAlignment(Qt::AlignCenter);
        spaceline1->setReadOnly(true);

        verticalLayout_5->addWidget(spaceline1);

        spacelabel1 = new QLabel(layoutWidget3);
        spacelabel1->setObjectName(QString::fromUtf8("spacelabel1"));
        sizePolicy1.setHeightForWidth(spacelabel1->sizePolicy().hasHeightForWidth());
        spacelabel1->setSizePolicy(sizePolicy1);
        spacelabel1->setFont(font4);
        spacelabel1->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(spacelabel1);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        spaceline2 = new QLineEdit(layoutWidget3);
        spaceline2->setObjectName(QString::fromUtf8("spaceline2"));
        spaceline2->setEnabled(true);
        sizePolicy1.setHeightForWidth(spaceline2->sizePolicy().hasHeightForWidth());
        spaceline2->setSizePolicy(sizePolicy1);
        spaceline2->setFont(font4);
        spaceline2->setAlignment(Qt::AlignCenter);
        spaceline2->setReadOnly(true);

        verticalLayout_6->addWidget(spaceline2);

        spacelabel2 = new QLabel(layoutWidget3);
        spacelabel2->setObjectName(QString::fromUtf8("spacelabel2"));
        sizePolicy1.setHeightForWidth(spacelabel2->sizePolicy().hasHeightForWidth());
        spacelabel2->setSizePolicy(sizePolicy1);
        spacelabel2->setFont(font4);
        spacelabel2->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(spacelabel2);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        spaceline3 = new QLineEdit(layoutWidget3);
        spaceline3->setObjectName(QString::fromUtf8("spaceline3"));
        spaceline3->setEnabled(true);
        sizePolicy1.setHeightForWidth(spaceline3->sizePolicy().hasHeightForWidth());
        spaceline3->setSizePolicy(sizePolicy1);
        spaceline3->setFont(font4);
        spaceline3->setAlignment(Qt::AlignCenter);
        spaceline3->setReadOnly(true);

        verticalLayout_7->addWidget(spaceline3);

        spacelabel3 = new QLabel(layoutWidget3);
        spacelabel3->setObjectName(QString::fromUtf8("spacelabel3"));
        sizePolicy1.setHeightForWidth(spacelabel3->sizePolicy().hasHeightForWidth());
        spacelabel3->setSizePolicy(sizePolicy1);
        spacelabel3->setFont(font4);
        spacelabel3->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(spacelabel3);


        horizontalLayout_2->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        spaceline4 = new QLineEdit(layoutWidget3);
        spaceline4->setObjectName(QString::fromUtf8("spaceline4"));
        spaceline4->setEnabled(true);
        sizePolicy1.setHeightForWidth(spaceline4->sizePolicy().hasHeightForWidth());
        spaceline4->setSizePolicy(sizePolicy1);
        spaceline4->setFont(font4);
        spaceline4->setAlignment(Qt::AlignCenter);
        spaceline4->setReadOnly(true);

        verticalLayout_8->addWidget(spaceline4);

        spacelabel4 = new QLabel(layoutWidget3);
        spacelabel4->setObjectName(QString::fromUtf8("spacelabel4"));
        sizePolicy1.setHeightForWidth(spacelabel4->sizePolicy().hasHeightForWidth());
        spacelabel4->setSizePolicy(sizePolicy1);
        spacelabel4->setFont(font4);
        spacelabel4->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(spacelabel4);


        horizontalLayout_2->addLayout(verticalLayout_8);

        layoutWidget4 = new QWidget(pg_level);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(580, 10, 181, 531));
        verticalLayout_9 = new QVBoxLayout(layoutWidget4);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        codelabel1 = new QLabel(layoutWidget4);
        codelabel1->setObjectName(QString::fromUtf8("codelabel1"));
        sizePolicy.setHeightForWidth(codelabel1->sizePolicy().hasHeightForWidth());
        codelabel1->setSizePolicy(sizePolicy);
        QFont font5;
        font5.setFamily(QString::fromUtf8("Consolas"));
        font5.setPointSize(9);
        codelabel1->setFont(font5);

        horizontalLayout_3->addWidget(codelabel1);

        codeline1 = new QLineEdit(layoutWidget4);
        codeline1->setObjectName(QString::fromUtf8("codeline1"));
        sizePolicy1.setHeightForWidth(codeline1->sizePolicy().hasHeightForWidth());
        codeline1->setSizePolicy(sizePolicy1);
        QFont font6;
        font6.setFamily(QString::fromUtf8("Consolas"));
        codeline1->setFont(font6);

        horizontalLayout_3->addWidget(codeline1);


        verticalLayout_9->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        codelabel2 = new QLabel(layoutWidget4);
        codelabel2->setObjectName(QString::fromUtf8("codelabel2"));
        sizePolicy.setHeightForWidth(codelabel2->sizePolicy().hasHeightForWidth());
        codelabel2->setSizePolicy(sizePolicy);
        codelabel2->setFont(font5);

        horizontalLayout_6->addWidget(codelabel2);

        codeline2 = new QLineEdit(layoutWidget4);
        codeline2->setObjectName(QString::fromUtf8("codeline2"));
        sizePolicy1.setHeightForWidth(codeline2->sizePolicy().hasHeightForWidth());
        codeline2->setSizePolicy(sizePolicy1);
        codeline2->setFont(font6);

        horizontalLayout_6->addWidget(codeline2);


        verticalLayout_9->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        codelabel3 = new QLabel(layoutWidget4);
        codelabel3->setObjectName(QString::fromUtf8("codelabel3"));
        sizePolicy.setHeightForWidth(codelabel3->sizePolicy().hasHeightForWidth());
        codelabel3->setSizePolicy(sizePolicy);
        codelabel3->setFont(font5);

        horizontalLayout_7->addWidget(codelabel3);

        codeline3 = new QLineEdit(layoutWidget4);
        codeline3->setObjectName(QString::fromUtf8("codeline3"));
        sizePolicy1.setHeightForWidth(codeline3->sizePolicy().hasHeightForWidth());
        codeline3->setSizePolicy(sizePolicy1);
        codeline3->setFont(font6);

        horizontalLayout_7->addWidget(codeline3);


        verticalLayout_9->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        codelabel4 = new QLabel(layoutWidget4);
        codelabel4->setObjectName(QString::fromUtf8("codelabel4"));
        sizePolicy.setHeightForWidth(codelabel4->sizePolicy().hasHeightForWidth());
        codelabel4->setSizePolicy(sizePolicy);
        codelabel4->setFont(font5);

        horizontalLayout_8->addWidget(codelabel4);

        codeline4 = new QLineEdit(layoutWidget4);
        codeline4->setObjectName(QString::fromUtf8("codeline4"));
        sizePolicy1.setHeightForWidth(codeline4->sizePolicy().hasHeightForWidth());
        codeline4->setSizePolicy(sizePolicy1);
        codeline4->setFont(font6);

        horizontalLayout_8->addWidget(codeline4);


        verticalLayout_9->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        codelabel5 = new QLabel(layoutWidget4);
        codelabel5->setObjectName(QString::fromUtf8("codelabel5"));
        sizePolicy.setHeightForWidth(codelabel5->sizePolicy().hasHeightForWidth());
        codelabel5->setSizePolicy(sizePolicy);
        codelabel5->setFont(font5);

        horizontalLayout_9->addWidget(codelabel5);

        codeline5 = new QLineEdit(layoutWidget4);
        codeline5->setObjectName(QString::fromUtf8("codeline5"));
        sizePolicy1.setHeightForWidth(codeline5->sizePolicy().hasHeightForWidth());
        codeline5->setSizePolicy(sizePolicy1);
        codeline5->setFont(font6);

        horizontalLayout_9->addWidget(codeline5);


        verticalLayout_9->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        codelabel6 = new QLabel(layoutWidget4);
        codelabel6->setObjectName(QString::fromUtf8("codelabel6"));
        sizePolicy.setHeightForWidth(codelabel6->sizePolicy().hasHeightForWidth());
        codelabel6->setSizePolicy(sizePolicy);
        codelabel6->setFont(font5);

        horizontalLayout_10->addWidget(codelabel6);

        codeline6 = new QLineEdit(layoutWidget4);
        codeline6->setObjectName(QString::fromUtf8("codeline6"));
        sizePolicy1.setHeightForWidth(codeline6->sizePolicy().hasHeightForWidth());
        codeline6->setSizePolicy(sizePolicy1);
        codeline6->setFont(font6);

        horizontalLayout_10->addWidget(codeline6);


        verticalLayout_9->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        codelabel7 = new QLabel(layoutWidget4);
        codelabel7->setObjectName(QString::fromUtf8("codelabel7"));
        sizePolicy.setHeightForWidth(codelabel7->sizePolicy().hasHeightForWidth());
        codelabel7->setSizePolicy(sizePolicy);
        codelabel7->setFont(font5);

        horizontalLayout_11->addWidget(codelabel7);

        codeline7 = new QLineEdit(layoutWidget4);
        codeline7->setObjectName(QString::fromUtf8("codeline7"));
        sizePolicy1.setHeightForWidth(codeline7->sizePolicy().hasHeightForWidth());
        codeline7->setSizePolicy(sizePolicy1);
        codeline7->setFont(font6);

        horizontalLayout_11->addWidget(codeline7);


        verticalLayout_9->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        codelabel8 = new QLabel(layoutWidget4);
        codelabel8->setObjectName(QString::fromUtf8("codelabel8"));
        sizePolicy.setHeightForWidth(codelabel8->sizePolicy().hasHeightForWidth());
        codelabel8->setSizePolicy(sizePolicy);
        codelabel8->setFont(font5);

        horizontalLayout_12->addWidget(codelabel8);

        codeline8 = new QLineEdit(layoutWidget4);
        codeline8->setObjectName(QString::fromUtf8("codeline8"));
        sizePolicy1.setHeightForWidth(codeline8->sizePolicy().hasHeightForWidth());
        codeline8->setSizePolicy(sizePolicy1);
        codeline8->setFont(font6);

        horizontalLayout_12->addWidget(codeline8);


        verticalLayout_9->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        codelabel9 = new QLabel(layoutWidget4);
        codelabel9->setObjectName(QString::fromUtf8("codelabel9"));
        sizePolicy.setHeightForWidth(codelabel9->sizePolicy().hasHeightForWidth());
        codelabel9->setSizePolicy(sizePolicy);
        codelabel9->setFont(font5);

        horizontalLayout_13->addWidget(codelabel9);

        codeline9 = new QLineEdit(layoutWidget4);
        codeline9->setObjectName(QString::fromUtf8("codeline9"));
        sizePolicy1.setHeightForWidth(codeline9->sizePolicy().hasHeightForWidth());
        codeline9->setSizePolicy(sizePolicy1);
        codeline9->setFont(font6);

        horizontalLayout_13->addWidget(codeline9);


        verticalLayout_9->addLayout(horizontalLayout_13);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        codelabel10 = new QLabel(layoutWidget4);
        codelabel10->setObjectName(QString::fromUtf8("codelabel10"));
        sizePolicy.setHeightForWidth(codelabel10->sizePolicy().hasHeightForWidth());
        codelabel10->setSizePolicy(sizePolicy);
        codelabel10->setFont(font5);

        horizontalLayout_15->addWidget(codelabel10);

        codeline10 = new QLineEdit(layoutWidget4);
        codeline10->setObjectName(QString::fromUtf8("codeline10"));
        sizePolicy1.setHeightForWidth(codeline10->sizePolicy().hasHeightForWidth());
        codeline10->setSizePolicy(sizePolicy1);
        codeline10->setFont(font6);

        horizontalLayout_15->addWidget(codeline10);


        verticalLayout_9->addLayout(horizontalLayout_15);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        codelabel11 = new QLabel(layoutWidget4);
        codelabel11->setObjectName(QString::fromUtf8("codelabel11"));
        sizePolicy.setHeightForWidth(codelabel11->sizePolicy().hasHeightForWidth());
        codelabel11->setSizePolicy(sizePolicy);
        codelabel11->setFont(font5);

        horizontalLayout_14->addWidget(codelabel11);

        codeline11 = new QLineEdit(layoutWidget4);
        codeline11->setObjectName(QString::fromUtf8("codeline11"));
        sizePolicy1.setHeightForWidth(codeline11->sizePolicy().hasHeightForWidth());
        codeline11->setSizePolicy(sizePolicy1);
        codeline11->setFont(font6);

        horizontalLayout_14->addWidget(codeline11);


        verticalLayout_9->addLayout(horizontalLayout_14);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        codelabel12 = new QLabel(layoutWidget4);
        codelabel12->setObjectName(QString::fromUtf8("codelabel12"));
        sizePolicy.setHeightForWidth(codelabel12->sizePolicy().hasHeightForWidth());
        codelabel12->setSizePolicy(sizePolicy);
        codelabel12->setFont(font5);

        horizontalLayout_16->addWidget(codelabel12);

        codeline12 = new QLineEdit(layoutWidget4);
        codeline12->setObjectName(QString::fromUtf8("codeline12"));
        sizePolicy1.setHeightForWidth(codeline12->sizePolicy().hasHeightForWidth());
        codeline12->setSizePolicy(sizePolicy1);
        codeline12->setFont(font6);

        horizontalLayout_16->addWidget(codeline12);


        verticalLayout_9->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        codelabel13 = new QLabel(layoutWidget4);
        codelabel13->setObjectName(QString::fromUtf8("codelabel13"));
        sizePolicy.setHeightForWidth(codelabel13->sizePolicy().hasHeightForWidth());
        codelabel13->setSizePolicy(sizePolicy);
        codelabel13->setFont(font5);

        horizontalLayout_17->addWidget(codelabel13);

        codeline13 = new QLineEdit(layoutWidget4);
        codeline13->setObjectName(QString::fromUtf8("codeline13"));
        sizePolicy1.setHeightForWidth(codeline13->sizePolicy().hasHeightForWidth());
        codeline13->setSizePolicy(sizePolicy1);
        codeline13->setFont(font6);

        horizontalLayout_17->addWidget(codeline13);


        verticalLayout_9->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        codelabel14 = new QLabel(layoutWidget4);
        codelabel14->setObjectName(QString::fromUtf8("codelabel14"));
        sizePolicy.setHeightForWidth(codelabel14->sizePolicy().hasHeightForWidth());
        codelabel14->setSizePolicy(sizePolicy);
        codelabel14->setFont(font5);

        horizontalLayout_18->addWidget(codelabel14);

        codeline14 = new QLineEdit(layoutWidget4);
        codeline14->setObjectName(QString::fromUtf8("codeline14"));
        sizePolicy1.setHeightForWidth(codeline14->sizePolicy().hasHeightForWidth());
        codeline14->setSizePolicy(sizePolicy1);
        codeline14->setFont(font6);

        horizontalLayout_18->addWidget(codeline14);


        verticalLayout_9->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        codelabel15 = new QLabel(layoutWidget4);
        codelabel15->setObjectName(QString::fromUtf8("codelabel15"));
        sizePolicy.setHeightForWidth(codelabel15->sizePolicy().hasHeightForWidth());
        codelabel15->setSizePolicy(sizePolicy);
        codelabel15->setFont(font5);

        horizontalLayout_19->addWidget(codelabel15);

        codeline15 = new QLineEdit(layoutWidget4);
        codeline15->setObjectName(QString::fromUtf8("codeline15"));
        sizePolicy1.setHeightForWidth(codeline15->sizePolicy().hasHeightForWidth());
        codeline15->setSizePolicy(sizePolicy1);
        codeline15->setFont(font6);

        horizontalLayout_19->addWidget(codeline15);


        verticalLayout_9->addLayout(horizontalLayout_19);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        codelabel16 = new QLabel(layoutWidget4);
        codelabel16->setObjectName(QString::fromUtf8("codelabel16"));
        sizePolicy.setHeightForWidth(codelabel16->sizePolicy().hasHeightForWidth());
        codelabel16->setSizePolicy(sizePolicy);
        codelabel16->setFont(font5);

        horizontalLayout_22->addWidget(codelabel16);

        codeline16 = new QLineEdit(layoutWidget4);
        codeline16->setObjectName(QString::fromUtf8("codeline16"));
        sizePolicy1.setHeightForWidth(codeline16->sizePolicy().hasHeightForWidth());
        codeline16->setSizePolicy(sizePolicy1);
        codeline16->setFont(font6);

        horizontalLayout_22->addWidget(codeline16);


        verticalLayout_9->addLayout(horizontalLayout_22);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        codelabel17 = new QLabel(layoutWidget4);
        codelabel17->setObjectName(QString::fromUtf8("codelabel17"));
        sizePolicy.setHeightForWidth(codelabel17->sizePolicy().hasHeightForWidth());
        codelabel17->setSizePolicy(sizePolicy);
        codelabel17->setFont(font5);

        horizontalLayout_20->addWidget(codelabel17);

        codeline17 = new QLineEdit(layoutWidget4);
        codeline17->setObjectName(QString::fromUtf8("codeline17"));
        sizePolicy1.setHeightForWidth(codeline17->sizePolicy().hasHeightForWidth());
        codeline17->setSizePolicy(sizePolicy1);
        codeline17->setFont(font6);

        horizontalLayout_20->addWidget(codeline17);


        verticalLayout_9->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        codelabel18 = new QLabel(layoutWidget4);
        codelabel18->setObjectName(QString::fromUtf8("codelabel18"));
        sizePolicy.setHeightForWidth(codelabel18->sizePolicy().hasHeightForWidth());
        codelabel18->setSizePolicy(sizePolicy);
        codelabel18->setFont(font5);

        horizontalLayout_21->addWidget(codelabel18);

        codeline18 = new QLineEdit(layoutWidget4);
        codeline18->setObjectName(QString::fromUtf8("codeline18"));
        sizePolicy1.setHeightForWidth(codeline18->sizePolicy().hasHeightForWidth());
        codeline18->setSizePolicy(sizePolicy1);
        codeline18->setFont(font6);

        horizontalLayout_21->addWidget(codeline18);


        verticalLayout_9->addLayout(horizontalLayout_21);

        layoutWidget_2 = new QWidget(pg_level);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(140, 330, 291, 81));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        spaceline5 = new QLineEdit(layoutWidget_2);
        spaceline5->setObjectName(QString::fromUtf8("spaceline5"));
        spaceline5->setEnabled(true);
        sizePolicy1.setHeightForWidth(spaceline5->sizePolicy().hasHeightForWidth());
        spaceline5->setSizePolicy(sizePolicy1);
        spaceline5->setAlignment(Qt::AlignCenter);
        spaceline5->setReadOnly(true);

        verticalLayout_4->addWidget(spaceline5);

        spacelabel5 = new QLabel(layoutWidget_2);
        spacelabel5->setObjectName(QString::fromUtf8("spacelabel5"));
        sizePolicy1.setHeightForWidth(spacelabel5->sizePolicy().hasHeightForWidth());
        spacelabel5->setSizePolicy(sizePolicy1);
        spacelabel5->setFont(font4);
        spacelabel5->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(spacelabel5);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        spaceline6 = new QLineEdit(layoutWidget_2);
        spaceline6->setObjectName(QString::fromUtf8("spaceline6"));
        spaceline6->setEnabled(true);
        sizePolicy1.setHeightForWidth(spaceline6->sizePolicy().hasHeightForWidth());
        spaceline6->setSizePolicy(sizePolicy1);
        spaceline6->setAlignment(Qt::AlignCenter);
        spaceline6->setReadOnly(true);

        verticalLayout_10->addWidget(spaceline6);

        spacelabel6 = new QLabel(layoutWidget_2);
        spacelabel6->setObjectName(QString::fromUtf8("spacelabel6"));
        sizePolicy1.setHeightForWidth(spacelabel6->sizePolicy().hasHeightForWidth());
        spacelabel6->setSizePolicy(sizePolicy1);
        spacelabel6->setFont(font4);
        spacelabel6->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(spacelabel6);


        horizontalLayout_4->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        spaceline7 = new QLineEdit(layoutWidget_2);
        spaceline7->setObjectName(QString::fromUtf8("spaceline7"));
        spaceline7->setEnabled(true);
        sizePolicy1.setHeightForWidth(spaceline7->sizePolicy().hasHeightForWidth());
        spaceline7->setSizePolicy(sizePolicy1);
        spaceline7->setAlignment(Qt::AlignCenter);
        spaceline7->setReadOnly(true);

        verticalLayout_11->addWidget(spaceline7);

        spacelabel7 = new QLabel(layoutWidget_2);
        spacelabel7->setObjectName(QString::fromUtf8("spacelabel7"));
        sizePolicy1.setHeightForWidth(spacelabel7->sizePolicy().hasHeightForWidth());
        spacelabel7->setSizePolicy(sizePolicy1);
        spacelabel7->setFont(font4);
        spacelabel7->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(spacelabel7);


        horizontalLayout_4->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        spaceline8 = new QLineEdit(layoutWidget_2);
        spaceline8->setObjectName(QString::fromUtf8("spaceline8"));
        spaceline8->setEnabled(true);
        sizePolicy1.setHeightForWidth(spaceline8->sizePolicy().hasHeightForWidth());
        spaceline8->setSizePolicy(sizePolicy1);
        spaceline8->setAlignment(Qt::AlignCenter);
        spaceline8->setReadOnly(true);

        verticalLayout_12->addWidget(spaceline8);

        spacelabel8 = new QLabel(layoutWidget_2);
        spacelabel8->setObjectName(QString::fromUtf8("spacelabel8"));
        sizePolicy1.setHeightForWidth(spacelabel8->sizePolicy().hasHeightForWidth());
        spacelabel8->setSizePolicy(sizePolicy1);
        spacelabel8->setFont(font4);
        spacelabel8->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(spacelabel8);


        horizontalLayout_4->addLayout(verticalLayout_12);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        spaceline9 = new QLineEdit(layoutWidget_2);
        spaceline9->setObjectName(QString::fromUtf8("spaceline9"));
        spaceline9->setEnabled(true);
        sizePolicy1.setHeightForWidth(spaceline9->sizePolicy().hasHeightForWidth());
        spaceline9->setSizePolicy(sizePolicy1);
        spaceline9->setAlignment(Qt::AlignCenter);
        spaceline9->setReadOnly(true);

        verticalLayout_13->addWidget(spaceline9);

        spacelabel9 = new QLabel(layoutWidget_2);
        spacelabel9->setObjectName(QString::fromUtf8("spacelabel9"));
        sizePolicy1.setHeightForWidth(spacelabel9->sizePolicy().hasHeightForWidth());
        spacelabel9->setSizePolicy(sizePolicy1);
        spacelabel9->setFont(font4);
        spacelabel9->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(spacelabel9);


        horizontalLayout_4->addLayout(verticalLayout_13);

        button_retry = new QPushButton(pg_level);
        button_retry->setObjectName(QString::fromUtf8("button_retry"));
        button_retry->setGeometry(QRect(440, 380, 121, 41));
        button_retry->setFont(font1);
        layoutWidget5 = new QWidget(pg_level);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(20, 420, 571, 141));
        verticalLayout_14 = new QVBoxLayout(layoutWidget5);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_info = new QLabel(layoutWidget5);
        label_info->setObjectName(QString::fromUtf8("label_info"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_info->sizePolicy().hasHeightForWidth());
        label_info->setSizePolicy(sizePolicy2);
        label_info->setFont(font4);

        verticalLayout_14->addWidget(label_info);

        label_require = new QLabel(layoutWidget5);
        label_require->setObjectName(QString::fromUtf8("label_require"));
        sizePolicy2.setHeightForWidth(label_require->sizePolicy().hasHeightForWidth());
        label_require->setSizePolicy(sizePolicy2);
        label_require->setFont(font5);

        verticalLayout_14->addWidget(label_require);

        label_avspace = new QLabel(layoutWidget5);
        label_avspace->setObjectName(QString::fromUtf8("label_avspace"));
        sizePolicy2.setHeightForWidth(label_avspace->sizePolicy().hasHeightForWidth());
        label_avspace->setSizePolicy(sizePolicy2);
        label_avspace->setFont(font5);

        verticalLayout_14->addWidget(label_avspace);

        label_avinstructions = new QLabel(layoutWidget5);
        label_avinstructions->setObjectName(QString::fromUtf8("label_avinstructions"));
        sizePolicy2.setHeightForWidth(label_avinstructions->sizePolicy().hasHeightForWidth());
        label_avinstructions->setSizePolicy(sizePolicy2);
        label_avinstructions->setFont(font5);

        verticalLayout_14->addWidget(label_avinstructions);

        layoutWidget6 = new QWidget(pg_level);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(560, 10, 16, 531));
        verticalLayout_15 = new QVBoxLayout(layoutWidget6);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        yajirushi1 = new QLabel(layoutWidget6);
        yajirushi1->setObjectName(QString::fromUtf8("yajirushi1"));
        sizePolicy.setHeightForWidth(yajirushi1->sizePolicy().hasHeightForWidth());
        yajirushi1->setSizePolicy(sizePolicy);
        yajirushi1->setFont(font5);

        verticalLayout_15->addWidget(yajirushi1);

        yajirushi2 = new QLabel(layoutWidget6);
        yajirushi2->setObjectName(QString::fromUtf8("yajirushi2"));
        sizePolicy.setHeightForWidth(yajirushi2->sizePolicy().hasHeightForWidth());
        yajirushi2->setSizePolicy(sizePolicy);
        yajirushi2->setFont(font5);

        verticalLayout_15->addWidget(yajirushi2);

        yajirushi3 = new QLabel(layoutWidget6);
        yajirushi3->setObjectName(QString::fromUtf8("yajirushi3"));
        sizePolicy.setHeightForWidth(yajirushi3->sizePolicy().hasHeightForWidth());
        yajirushi3->setSizePolicy(sizePolicy);
        yajirushi3->setFont(font5);

        verticalLayout_15->addWidget(yajirushi3);

        yajirushi4 = new QLabel(layoutWidget6);
        yajirushi4->setObjectName(QString::fromUtf8("yajirushi4"));
        sizePolicy.setHeightForWidth(yajirushi4->sizePolicy().hasHeightForWidth());
        yajirushi4->setSizePolicy(sizePolicy);
        yajirushi4->setFont(font5);

        verticalLayout_15->addWidget(yajirushi4);

        yajirushi5 = new QLabel(layoutWidget6);
        yajirushi5->setObjectName(QString::fromUtf8("yajirushi5"));
        sizePolicy.setHeightForWidth(yajirushi5->sizePolicy().hasHeightForWidth());
        yajirushi5->setSizePolicy(sizePolicy);
        yajirushi5->setFont(font5);

        verticalLayout_15->addWidget(yajirushi5);

        yajirushi6 = new QLabel(layoutWidget6);
        yajirushi6->setObjectName(QString::fromUtf8("yajirushi6"));
        sizePolicy.setHeightForWidth(yajirushi6->sizePolicy().hasHeightForWidth());
        yajirushi6->setSizePolicy(sizePolicy);
        yajirushi6->setFont(font5);

        verticalLayout_15->addWidget(yajirushi6);

        yajirushi7 = new QLabel(layoutWidget6);
        yajirushi7->setObjectName(QString::fromUtf8("yajirushi7"));
        sizePolicy.setHeightForWidth(yajirushi7->sizePolicy().hasHeightForWidth());
        yajirushi7->setSizePolicy(sizePolicy);
        yajirushi7->setFont(font5);

        verticalLayout_15->addWidget(yajirushi7);

        yajirushi8 = new QLabel(layoutWidget6);
        yajirushi8->setObjectName(QString::fromUtf8("yajirushi8"));
        sizePolicy.setHeightForWidth(yajirushi8->sizePolicy().hasHeightForWidth());
        yajirushi8->setSizePolicy(sizePolicy);
        yajirushi8->setFont(font5);

        verticalLayout_15->addWidget(yajirushi8);

        yajirushi9 = new QLabel(layoutWidget6);
        yajirushi9->setObjectName(QString::fromUtf8("yajirushi9"));
        sizePolicy.setHeightForWidth(yajirushi9->sizePolicy().hasHeightForWidth());
        yajirushi9->setSizePolicy(sizePolicy);
        yajirushi9->setFont(font5);

        verticalLayout_15->addWidget(yajirushi9);

        yajirushi10 = new QLabel(layoutWidget6);
        yajirushi10->setObjectName(QString::fromUtf8("yajirushi10"));
        sizePolicy.setHeightForWidth(yajirushi10->sizePolicy().hasHeightForWidth());
        yajirushi10->setSizePolicy(sizePolicy);
        yajirushi10->setFont(font5);

        verticalLayout_15->addWidget(yajirushi10);

        yajirushi11 = new QLabel(layoutWidget6);
        yajirushi11->setObjectName(QString::fromUtf8("yajirushi11"));
        sizePolicy.setHeightForWidth(yajirushi11->sizePolicy().hasHeightForWidth());
        yajirushi11->setSizePolicy(sizePolicy);
        yajirushi11->setFont(font5);

        verticalLayout_15->addWidget(yajirushi11);

        yajirushi12 = new QLabel(layoutWidget6);
        yajirushi12->setObjectName(QString::fromUtf8("yajirushi12"));
        sizePolicy.setHeightForWidth(yajirushi12->sizePolicy().hasHeightForWidth());
        yajirushi12->setSizePolicy(sizePolicy);
        yajirushi12->setFont(font5);

        verticalLayout_15->addWidget(yajirushi12);

        yajirushi13 = new QLabel(layoutWidget6);
        yajirushi13->setObjectName(QString::fromUtf8("yajirushi13"));
        sizePolicy.setHeightForWidth(yajirushi13->sizePolicy().hasHeightForWidth());
        yajirushi13->setSizePolicy(sizePolicy);
        yajirushi13->setFont(font5);

        verticalLayout_15->addWidget(yajirushi13);

        yajirushi14 = new QLabel(layoutWidget6);
        yajirushi14->setObjectName(QString::fromUtf8("yajirushi14"));
        sizePolicy.setHeightForWidth(yajirushi14->sizePolicy().hasHeightForWidth());
        yajirushi14->setSizePolicy(sizePolicy);
        yajirushi14->setFont(font5);

        verticalLayout_15->addWidget(yajirushi14);

        yajirushi15 = new QLabel(layoutWidget6);
        yajirushi15->setObjectName(QString::fromUtf8("yajirushi15"));
        sizePolicy.setHeightForWidth(yajirushi15->sizePolicy().hasHeightForWidth());
        yajirushi15->setSizePolicy(sizePolicy);
        yajirushi15->setFont(font5);

        verticalLayout_15->addWidget(yajirushi15);

        yajirushi16 = new QLabel(layoutWidget6);
        yajirushi16->setObjectName(QString::fromUtf8("yajirushi16"));
        sizePolicy.setHeightForWidth(yajirushi16->sizePolicy().hasHeightForWidth());
        yajirushi16->setSizePolicy(sizePolicy);
        yajirushi16->setFont(font5);

        verticalLayout_15->addWidget(yajirushi16);

        yajirushi17 = new QLabel(layoutWidget6);
        yajirushi17->setObjectName(QString::fromUtf8("yajirushi17"));
        sizePolicy.setHeightForWidth(yajirushi17->sizePolicy().hasHeightForWidth());
        yajirushi17->setSizePolicy(sizePolicy);
        yajirushi17->setFont(font5);

        verticalLayout_15->addWidget(yajirushi17);

        yajirushi18 = new QLabel(layoutWidget6);
        yajirushi18->setObjectName(QString::fromUtf8("yajirushi18"));
        sizePolicy.setHeightForWidth(yajirushi18->sizePolicy().hasHeightForWidth());
        yajirushi18->setSizePolicy(sizePolicy);
        yajirushi18->setFont(font5);

        verticalLayout_15->addWidget(yajirushi18);

        currentline = new QLineEdit(pg_level);
        currentline->setObjectName(QString::fromUtf8("currentline"));
        currentline->setGeometry(QRect(140, 70, 53, 41));
        sizePolicy2.setHeightForWidth(currentline->sizePolicy().hasHeightForWidth());
        currentline->setSizePolicy(sizePolicy2);
        currentline->setFont(font4);
        currentline->setAlignment(Qt::AlignCenter);
        currentline->setReadOnly(true);
        robot = new QPushButton(pg_level);
        robot->setObjectName(QString::fromUtf8("robot"));
        robot->setGeometry(QRect(140, 110, 53, 121));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(robot->sizePolicy().hasHeightForWidth());
        robot->setSizePolicy(sizePolicy3);
        robot->setFont(font1);
        robot->setIconSize(QSize(150, 150));
        button_execute = new QPushButton(pg_level);
        button_execute->setObjectName(QString::fromUtf8("button_execute"));
        button_execute->setGeometry(QRect(440, 320, 121, 41));
        button_execute->setFont(font1);
        label_avcommand = new QLabel(pg_level);
        label_avcommand->setObjectName(QString::fromUtf8("label_avcommand"));
        label_avcommand->setGeometry(QRect(20, 570, 751, 32));
        sizePolicy2.setHeightForWidth(label_avcommand->sizePolicy().hasHeightForWidth());
        label_avcommand->setSizePolicy(sizePolicy2);
        label_avcommand->setFont(font5);
        button_file = new QPushButton(pg_level);
        button_file->setObjectName(QString::fromUtf8("button_file"));
        button_file->setGeometry(QRect(10, 350, 121, 41));
        button_file->setFont(font1);
        stackedWidget->addWidget(pg_level);

        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        Label_welcome->setText(QCoreApplication::translate("Widget", "Human Resource Machine", nullptr));
        BtnQuit->setText(QCoreApplication::translate("Widget", "Quit", nullptr));
        Label_statement->setText(QCoreApplication::translate("Widget", "Developer QingleLiu ZirunMa", nullptr));
        button1->setText(QCoreApplication::translate("Widget", "L1", nullptr));
        button2->setText(QCoreApplication::translate("Widget", "L2", nullptr));
        button3->setText(QCoreApplication::translate("Widget", "L3", nullptr));
        button4->setText(QCoreApplication::translate("Widget", "L4", nullptr));
        buttonextra->setText(QCoreApplication::translate("Widget", "EXTRA", nullptr));
        Label_welcome_2->setText(QCoreApplication::translate("Widget", "It's Astrobot !!!!!", nullptr));
        outlabel->setText(QCoreApplication::translate("Widget", "OUT", nullptr));
        inlabel->setText(QCoreApplication::translate("Widget", "IN", nullptr));
        spacelabel0->setText(QCoreApplication::translate("Widget", "#0", nullptr));
        spacelabel1->setText(QCoreApplication::translate("Widget", "#1", nullptr));
        spacelabel2->setText(QCoreApplication::translate("Widget", "#2", nullptr));
        spacelabel3->setText(QCoreApplication::translate("Widget", "#3", nullptr));
        spacelabel4->setText(QCoreApplication::translate("Widget", "#4", nullptr));
        codelabel1->setText(QCoreApplication::translate("Widget", "01", nullptr));
        codelabel2->setText(QCoreApplication::translate("Widget", "02", nullptr));
        codelabel3->setText(QCoreApplication::translate("Widget", "03", nullptr));
        codelabel4->setText(QCoreApplication::translate("Widget", "04", nullptr));
        codelabel5->setText(QCoreApplication::translate("Widget", "05", nullptr));
        codelabel6->setText(QCoreApplication::translate("Widget", "06", nullptr));
        codelabel7->setText(QCoreApplication::translate("Widget", "07", nullptr));
        codelabel8->setText(QCoreApplication::translate("Widget", "08", nullptr));
        codelabel9->setText(QCoreApplication::translate("Widget", "09", nullptr));
        codelabel10->setText(QCoreApplication::translate("Widget", "10", nullptr));
        codelabel11->setText(QCoreApplication::translate("Widget", "11", nullptr));
        codelabel12->setText(QCoreApplication::translate("Widget", "12", nullptr));
        codelabel13->setText(QCoreApplication::translate("Widget", "13", nullptr));
        codelabel14->setText(QCoreApplication::translate("Widget", "14", nullptr));
        codelabel15->setText(QCoreApplication::translate("Widget", "15", nullptr));
        codelabel16->setText(QCoreApplication::translate("Widget", "16", nullptr));
        codelabel17->setText(QCoreApplication::translate("Widget", "17", nullptr));
        codelabel18->setText(QCoreApplication::translate("Widget", "18", nullptr));
        spacelabel5->setText(QCoreApplication::translate("Widget", "#5", nullptr));
        spacelabel6->setText(QCoreApplication::translate("Widget", "#6", nullptr));
        spacelabel7->setText(QCoreApplication::translate("Widget", "#7", nullptr));
        spacelabel8->setText(QCoreApplication::translate("Widget", "#8", nullptr));
        spacelabel9->setText(QCoreApplication::translate("Widget", "#9", nullptr));
        button_retry->setText(QCoreApplication::translate("Widget", "Retry", nullptr));
        label_info->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_require->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_avspace->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_avinstructions->setText(QCoreApplication::translate("Widget", "Available Instructions:", nullptr));
        yajirushi1->setText(QString());
        yajirushi2->setText(QString());
        yajirushi3->setText(QString());
        yajirushi4->setText(QString());
        yajirushi5->setText(QString());
        yajirushi6->setText(QString());
        yajirushi7->setText(QString());
        yajirushi8->setText(QString());
        yajirushi9->setText(QString());
        yajirushi10->setText(QString());
        yajirushi11->setText(QString());
        yajirushi12->setText(QString());
        yajirushi13->setText(QString());
        yajirushi14->setText(QString());
        yajirushi15->setText(QString());
        yajirushi16->setText(QString());
        yajirushi17->setText(QString());
        yajirushi18->setText(QString());
        robot->setText(QString());
        button_execute->setText(QCoreApplication::translate("Widget", "Execute", nullptr));
        label_avcommand->setText(QCoreApplication::translate("Widget", "TextLable", nullptr));
        button_file->setText(QCoreApplication::translate("Widget", "FILEIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
