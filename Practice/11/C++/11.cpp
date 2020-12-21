#include <iostream>
using namespace std;
int main() {

    cout << "Введите возводимое в степень число и целое число - степень" << endl;
    double a;
    int x;
    cin >> a >> x;

    double result = 1;
    for (int i = 0; i < x; i++)
        result *= a;
    if (x < 0) {
        result = 1 / result;
    }
    cout << result << endl;
}
