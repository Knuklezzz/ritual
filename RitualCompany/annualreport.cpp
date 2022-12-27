#include "annualreport.h"

////////////////методы класса AnnualReport/////////////////
//Конструктор
AnnualReport::AnnualReport(RevenueRecord* pRR, ExpenseRecord* pER) : ptrRR(pRR), ptrER(pER)
{ /* пусто */
}
//---------------------------------------------------------
void AnnualReport::display()
{
    cout << setw(20) <<"Annual report" << endl;
    cout << "--------------------------\n" << endl;
    cout << setw(18) << left << "Sales revenue: ";
    revenues = ptrRR->getSumOfRevenues();
    cout << setw(29) << left << revenues << endl;

    expenses = ptrER->displaySummary();
    cout << setw(19) << left << "\nExpences total: ";
    cout << setw(10) << left << expenses << endl;
    // вычисляем прибыльность
    cout << setw(19) << left << "\nBalance:" << setw(10) << left << (revenues - expenses) << "\n" << endl;
}
