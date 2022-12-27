#pragma once
#include "productlist.h"
#include "productinputscreen.h"
#include "revenuerecord.h"
#include "sellsinputscreen.h"
#include "expenserecord.h"
#include "expenseinputscreen.h"
#include "annualreport.h"
using namespace std;

//////////////////// глобальные методы //////////////////////
void getaLine(string& inStr); // получение строки текста
char getaChar(); // получение символа



//////////////////Класс UserInterface//////////////////////
//Главный класс для запуска приложения:
//этот класс определяет взаимодействие пользователя с программой.
class UserInterface
{
private:
    ProductList* ptrProductList;
    ProductInputScreen* ptrProductInputScreen;
    RevenueRecord* ptrRevenueRecord;
    SellsInputScreen* ptrSellsInputScreen;
    ExpenseRecord* ptrExpenseRecord;
    ExpenseInputScreen* ptrExpenseInputScreen;
    AnnualReport* ptrAnnualReport;
    char ty;
public:
    UserInterface();
    ~UserInterface();
    void interact();
};
