#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    cout << "Через пробел введите вещественное число, затем оператор и вещественное число. " << endl;
    double a, b;
    char op;
    cin >> a >> op >> b;
    bool true_res = true;
    double result;

    switch (op) {
        case '*':
            result = a * b;
            break;
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '/':
            if (s == 0) {
                cout << "Ошибка: Деление на 0.";
                true_res = false;
                break;
            }
            result = a / b;
            break;
        default:
            cout << "Неизвестный оператор.";
            true_res = false;
            break;
    }
    if (true_res) {
        cout << result << endl;
    }
}

