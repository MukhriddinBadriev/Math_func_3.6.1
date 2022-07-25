#include <iostream>
#include "math_functions.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int a = 0;
    int b = 0;
    int operation;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    cin >> operation;
    operation_selection(operation, a, b);
    return 0;
}