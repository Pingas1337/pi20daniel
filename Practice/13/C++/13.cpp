#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int a;
    cout << "Введите число для проверки: " << endl;
    cin >> a;
    if (a % 2 != 0)
    {
        cout << "Число простое.";
    }
    else
    {
        cout << "Число составное.";
    }
}
