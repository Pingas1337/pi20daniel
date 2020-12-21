

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b, temp;
    cout << "Введите значение переменной a" << endl;
    cin >> a;
    cout << "Введите значение переменной b" << endl;
    cin >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "Изменённые значения: a = " << a << " b = " << b << endl;


}

