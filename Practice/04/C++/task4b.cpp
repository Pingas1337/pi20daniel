

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    cout << "Введите значение переменной a" << endl;
    cin >> a;
    cout << "Введите значение переменной b" << endl;
    cin >> b;
    a = b - a;
    b = b - a;
    a = b + a;
    cout << "Изменённые значения: a = " << a << ", b = " << b << endl;


}

