#ifndef RPN_CALCULATOR_H
#define RPN_CALCULATOR_H

#include <QMainWindow>
#include <QStack>

QT_BEGIN_NAMESPACE
namespace Ui { class RPN_Calculator; }
QT_END_NAMESPACE

class RPN_Calculator : public QMainWindow
{
    Q_OBJECT

public:
    RPN_Calculator(QWidget *parent = nullptr);
    ~RPN_Calculator();

private slots:
    void on_Number_1_clicked();

    void on_Number_2_clicked();

    void on_Number_3_clicked();

    void on_Number_4_clicked();

    void on_Number_5_clicked();

    void on_Number_6_clicked();

    void on_Number_7_clicked();

    void on_Number_8_clicked();

    void on_Number_9_clicked();

    void on_Number_0_clicked();

    void on_Enter_Button_clicked();

    void on_Clear_Button_clicked();

    void on_Del_Button_clicked();

    void on_Op_Addiction_clicked();

    void on_Op_Multiplication_clicked();

    void on_Op_Subtraction_clicked();

    void on_Op_Division_clicked();

    void on_Rol_Button_clicked();

    void on_Arrow_Up_clicked();

    void on_Arrow_Down_clicked();

private:
    Ui::RPN_Calculator *ui;
    QStack<double> Numbers;
    int count;
    void Print();
    int Verification();
    int aux;
    QString symbol;

};



#endif // RPN_CALCULATOR_H
