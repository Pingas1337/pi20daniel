#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, x;
    x = 0;
    cout << "Введите число для поиска чисел x: " << endl;
    cin >> a;
    while (a > 0)
    {
        a = a / 2;
        x = x + 1;
    }
    cout << "Искомое число x = " << x << endl;
}
