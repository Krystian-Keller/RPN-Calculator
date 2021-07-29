#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    count = 0;
    aux = 0;

    ui->textEdit->setReadOnly(true);
    ui->lineEdit->setReadOnly(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Number_1_clicked()
{
    ui->lineEdit->insert("1");
}


void MainWindow::on_Number_2_clicked()
{
    ui->lineEdit->insert("2");
}


void MainWindow::on_Number_3_clicked()
{
    ui->lineEdit->insert("3");
}


void MainWindow::on_Number_4_clicked()
{
    ui->lineEdit->insert("4");
}


void MainWindow::on_Number_5_clicked()
{
    ui->lineEdit->insert("5");
}


void MainWindow::on_Number_6_clicked()
{
    ui->lineEdit->insert("6");
}


void MainWindow::on_Number_7_clicked()
{
    ui->lineEdit->insert("7");
}


void MainWindow::on_Number_8_clicked()
{
    ui->lineEdit->insert("8");
}


void MainWindow::on_Number_9_clicked()
{
    ui->lineEdit->insert("9");
}


void MainWindow::on_Number_0_clicked()
{
    ui->lineEdit->insert("0");
}


void MainWindow::on_Enter_Button_clicked()
{
    Numbers.push(ui->lineEdit->text().toDouble());

    count++;

    Print();
    ui->lineEdit->clear();

}


void MainWindow::on_Clear_Button_clicked()
{
    ui->lineEdit->clear();
}

void MainWindow::on_Del_Button_clicked()
{
    ui->textEdit->clear();
    Numbers.clear();
    count = 0;
    aux = 0;
}


void MainWindow::on_Op_Addiction_clicked()
{
    if(Numbers.size()<2){
        ui->textEdit->clear();
        ui->textEdit->insertPlainText("Invalid Operation!");
        ui->textEdit->insertPlainText("\nPress Del to continue.");
    }else{
    Numbers.push(Numbers.pop() + Numbers.pop());

    count--;

    Print();
    }

}


void MainWindow::on_Op_Multiplication_clicked()
{
    if(Numbers.size()<2){
        ui->textEdit->clear();
        ui->textEdit->insertPlainText("Invalid Operation!");
        ui->textEdit->insertPlainText("\nPress Del to continue.");
    }else{
    Numbers.push(Numbers.pop() * Numbers.pop());

    count--;

    Print();
    }

}


void MainWindow::on_Op_Subtraction_clicked()
{
    if(Numbers.size()<2){
        ui->textEdit->clear();
        ui->textEdit->insertPlainText("Invalid Operation!");
        ui->textEdit->insertPlainText("\nPress Del to continue.");
    }else{
        int aux_1, aux_2;
        aux_1 = Numbers.pop();
        aux_2 = Numbers.pop();

        Numbers.push(aux_2 - aux_1);

        count--;

        Print();
    }
}


void MainWindow::on_Op_Division_clicked()
{
    if(Numbers.size()<2){
        ui->textEdit->clear();
        ui->textEdit->insertPlainText("Invalid Operation!");
        ui->textEdit->insertPlainText("\nPress Del to continue.");
    }else{
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
void MainWindow::on_Rol_Button_clicked()
{
    if(Numbers.size()<2){
        ui->textEdit->clear();
        ui->textEdit->insertPlainText("Invalid Operation!");
        ui->textEdit->insertPlainText("\nPress Del to continue.");
    }else{
    int aux_1, aux_2;

    aux_1 = Numbers.pop();
    aux_2 = Numbers.pop();

    Numbers.push(aux_1);
    Numbers.push(aux_2);

    Print();
    }
}


void MainWindow::on_Arrow_Up_clicked()
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


void MainWindow::on_Arrow_Down_clicked()
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

void MainWindow::Print()
{
    ui->textEdit->clear();
    ui->textEdit->setAlignment(Qt::AlignRight);

    int i, j=count;

    for(i=0; i<j; i++){
        if(((j-aux)-i)==1){
            ui->textEdit->insertPlainText("--->        ");
            ui->textEdit->insertPlainText(QString("%1").arg(Numbers.at(i)));
            ui->textEdit->insertPlainText("\n");

        }else{
        ui->textEdit->insertPlainText(QString("%1").arg(Numbers.at(i)));
        ui->textEdit->insertPlainText("\n");
        }
    }
    ui->textEdit->moveCursor(QTextCursor::Down);
}
