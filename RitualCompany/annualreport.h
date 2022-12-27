#pragma once
#include "expenserecord.h"
#include "RevenueRecord.h"
#include <iomanip>

//////////////////класс AnnualReport///////////////////////
//Класс годового отчета
class AnnualReport
{
private:
    RevenueRecord* ptrRR; // записи выручек
    ExpenseRecord* ptrER; // записи расходов
    float expenses, revenues; // суммы выручек и расходов
public:
    AnnualReport(RevenueRecord*, ExpenseRecord*);
    void display(); // отображение годового отчета
};
