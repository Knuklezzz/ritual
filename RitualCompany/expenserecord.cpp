#include "expenserecord.h"

//////////////////методы класса ExpenseRecord//////////////
ExpenseRecord::~ExpenseRecord() // деструктор
{ // удалить объекты expense
// удалить указатели на вектор
    while (!vectPtrsExpenses.empty())
    {
        iter = vectPtrsExpenses.begin();
        delete* iter;
        vectPtrsExpenses.erase(iter);
    }
}
//--------------------------------------------------------
void ExpenseRecord::insertExp(Expense* ptrExp)
{

    vectPtrsExpenses.push_back(ptrExp);
}
//---------------------------------------------------------
void ExpenseRecord::display() // распечатываем все расходы
{
    cout << "\n" << setw(8) << left << "Date" << setw(15) << left << "Recipient" << setw(8) << left << "Sum"<< setw(12) << left << "Category" << endl;
    cout  << "-------------------------------------------------\n" << endl;
    if (vectPtrsExpenses.size() == 0) // В контейнере нет расходов
        cout << "***There are no expenses***\n" << endl;
    else
    {
        iter = vectPtrsExpenses.begin();
        while (iter != vectPtrsExpenses.end())
        { // распечатываем все расходы
            cout << setw(2) << left << (*iter)->day << '/' << setw(6) << left << (*iter)->month << setw(15) << left << (*iter)->payee << setw(8) << left << (*iter)->amount << setw(12) << left << (*iter)->category << endl;
            iter++;
        }
        cout << endl;
    }
}

//--------------------------------------------------------
// используется при составлении годового отчета
float ExpenseRecord::displaySummary()
{
    float totalExpenses = 0; // Сумма по всем категориям расходов
    if (vectPtrsExpenses.size() == 0)
    {
        return 0;
    }
    iter = vectPtrsExpenses.begin();
    while (iter != vectPtrsExpenses.end())
    {
        totalExpenses += (*iter)->amount; //подсчитываем все расходы
        iter++;
    }
    return totalExpenses;
}

