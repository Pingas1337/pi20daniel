#include <iostream>
#include <sstream>
using namespace std;
int mins = 60;

int main() {
    cout << "Введите 2 момента времени в формате \"ЧЧ:ММ\", каждое с новой строки." << endl;
    int h1, m1, h2, m2;
    char temp;
    cin >> h1 >> temp >> m1 >> h2 >> temp >> m2;
    m1 += h1 * mins;
    m2 += h2 * mins;

    if (abs(m1 - m2) <= 15) {
        cout << "Встреча состоится!" << endl;
    }  else {
        cout << "Встреча не состоится!" << endl;
    }
}
