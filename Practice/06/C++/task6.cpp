
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c, d, x1, x2;
    cout << "Введите первое значение: " << endl;
    cin >> a;
    cout << "Введите второе значение: " << endl;
    cin >> b;
    cout << "Введите третье значение: " << endl;
    cin >> c;
    if (b * b - 4 * a * c > 0)
    {
        d = b * b - 4 * a * c;
        x1 = (-1 * b + sqrt(d)) / (2 * a);
        x2 = (-1 * b - sqrt(d)) / (2 * a);
        cout << "Корни уравнения: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    else if (b * b - 4 * a * c == 0)
    {
        x1 = -1 * b / (2 * a);
        cout << "Корень уравнения: " << x1 << endl;
    }
    else if (b * b - 4 * a * c < 0)
    {
        cout << "Решение невозможно" << endl;
    }
}