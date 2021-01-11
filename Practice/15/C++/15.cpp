#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");  
a:
    srand(time(0));
    int a = rand() % 101;
    int b, retry;

    int x = 0;
    cout << "Попробуй угадать число! (0-100)" << endl;
    cin >> b;
    while (x < 5)
    {
    if (b > a)
    {
        cout << "Загаданное число меньше" << endl;
        x = x + 1;
    }
    else if (b < a)
    {
        cout << "Загаданное число больше" << endl;
        x = x + 1;
    }
    else if (b = a)
    {
        cout << "Круто! Вы угадали!" << endl;
        cout << "Начнём сначала? (1 - Да)" << endl;
        cin >> retry;
        if (retry == 1) { goto a; }
    }
    cin >> b;
    }
    if (x = 5)
    {
    cout << "Вы не угадали. Загаданное число - " << a << endl;
    cout << "Начнём сначала? (1 - Да)" << endl;
    cin >> retry;
    }
    if (retry == 1) { goto a; }
    else {}
}
