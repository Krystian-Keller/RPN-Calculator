#include "RPN_Calculator.h"
#include "ui_RPN_Calculator.h"

RPN_Calculator::RPN_Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RPN_Calculator)
{
    ui->setupUi(this);
    count = 0;
    aux = 0;

    ui->textEdit->setReadOnly(true);
    ui->lineEdit->setReadOnly(true);
    symbol = "<img src=\":///resource/IndicativeArrow-img.png\" width=\"11\" height=\"11\" >";
    ui->Arrow_Up->setIcon(QIcon(":/resource/UpArrow-img.png"));
    ui->Arrow_Down->setIcon(QIcon(":/resource/DownArrow-img.png"));
}

RPN_Calculator::~RPN_Calculator()
{
    delete ui;
}


void RPN_Calculator::on_Number_1_clicked()
{
    ui->lineEdit->insert("1");
}


void RPN_Calculator::on_Number_2_clicked()
{
    ui->lineEdit->insert("2");
}


void RPN_Calculator::on_Number_3_clicked()
{
    ui->lineEdit->insert("3");
}


void RPN_Calculator::on_Number_4_clicked()
{
    ui->lineEdit->insert("4");
}


void RPN_Calculator::on_Number_5_clicked()
{
    ui->lineEdit->insert("5");
}


void RPN_Calculator::on_Number_6_clicked()
{
    ui->lineEdit->insert("6");
}


void RPN_Calculator::on_Number_7_clicked()
{
    ui->lineEdit->insert("7");
}


void RPN_Calculator::on_Number_8_clicked()
{
    ui->lineEdit->insert("8");
}


void RPN_Calculator::on_Number_9_clicked()
{
    ui->lineEdit->insert("9");
}


void RPN_Calculator::on_Number_0_clicked()
{
    ui->lineEdit->insert("0");
}


void RPN_Calculator::on_Enter_Button_clicked()
{
    Numbers.push(ui->lineEdit->text().toDouble());

    count++;
    aux = 0;

    Print();
    ui->lineEdit->clear();

}


void RPN_Calculator::on_Clear_Button_clicked()
{
    ui->lineEdit->clear();
}

void RPN_Calculator::on_Del_Button_clicked()
{
    ui->textEdit->clear();
    Numbers.clear();
    count = 0;
    aux = 0;
}


void RPN_Calculator::on_Op_Addiction_clicked()
{
    if(Verification()){

    Numbers.push(Numbers.pop() + Numbers.pop());

    count--;

    Print();
    }

}


void RPN_Calculator::on_Op_Multiplication_clicked()
{
    if(Verification()){

    Numbers.push(Numbers.pop() * Numbers.pop());

    count--;

    Print();
    }

}


void RPN_Calculator::on_Op_Subtraction_clicked()
{
    if(Verification()){

        int aux_1, aux_2;
        aux_1 = Numbers.pop();
        aux_2 = Numbers.pop();

        Numbers.push(aux_2 - aux_1);

        count--;

        Print();
    }
}


void RPN_Calculator::on_Op_Division_clicked()
{
    if(Verification()){

        int aux_1, aux_2;
        aux_1 = Numbers.pop();
        aux_2 = Numbers.pop();

        if(aux_1 == 0){
            ui->textEdit->clear();
            ui->textEdit->insertPlainText("Math Error!  Invalid Division by Zero!");
            ui->textEdit->insertPlainText("\nPress Del to continue.");
        }else{
            Numbers.push(aux_2 / aux_1);

            count--;

            Print();
        }

    }

}
void RPN_Calculator::on_Rol_Button_clicked()
{
    if(Verification()){

    int aux_1, aux_2;

    aux_1 = Numbers.pop();
    aux_2 = Numbers.pop();

    Numbers.push(aux_1);
    Numbers.push(aux_2);

    Print();
    }
}


void RPN_Calculator::on_Arrow_Up_clicked()
{


    if(aux<(Numbers.size()-1)){
        aux++;
        Print();

        int i;
        for(i=0; i<=aux; i++){
            ui->textEdit->moveCursor(QTextCursor::Up);
        }
    }
}


void RPN_Calculator::on_Arrow_Down_clicked()
{
    if(aux>0){
        aux--;
        Print();

        int i;
        for(i=0; i<=(aux); i++){
            ui->textEdit->moveCursor(QTextCursor::Up);
        }
    }

}

void RPN_Calculator::Print()
{
    ui->textEdit->clear();
    ui->textEdit->setAlignment(Qt::AlignRight);

    int i, j=count;

    for(i=0; i<j; i++){
        if(((j-aux)-i)==1){
            ui->textEdit->insertPlainText("   ");
            ui->textEdit->insertHtml(symbol);
            ui->textEdit->insertPlainText("   ");
            ui->textEdit->insertPlainText(QString("%1").arg(Numbers.at(i)));
            ui->textEdit->insertPlainText("\n");

        }else{
        ui->textEdit->insertPlainText(QString("%1").arg(Numbers.at(i)));
        ui->textEdit->insertPlainText("\n");
        }
    }
    ui->textEdit->moveCursor(QTextCursor::Down);
}

int RPN_Calculator::Verification()
{
    if(Numbers.size()<2){
        ui->textEdit->clear();
        ui->textEdit->insertPlainText("Invalid Operation!");
        ui->textEdit->insertPlainText("\nPress Del to continue.");
        return 0;
    }else{
        return 1;
    }

}
