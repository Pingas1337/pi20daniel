#include <iostream>
using namespace std;
int main() {
  long s, l1, r1, l2, r2;

  cout << "Введите сумму, границы первого промежутка и границы второго промежутка на одной строке через пробел" << endl;
  cin >> s >> l1 >> r1 >> l2 >> r2;

  bool success = true;
  int x1 = l1;
  int x2;

  if (x1 + r2 < s) 
  {
    // Значит, если увеличить х2 на максимум
    // x1 + x2 всё равно меньше s
    x2 = r2;
    
    // Если r1 + r2 меньше s
    // тогда s больше максимально возможной суммы иксов
    if (s > r1 + x2) {
      cout << "Нет таких иксов" << endl;
      success = false;
    } 
    else 
    {
      // Иначе ищем х1 такой, чтобы x1 + x2 = s
      x1 = s - r2;
    }
  } 
  else 
    {
    if (s < l1 + l2) {
      cout << "Нет таких иксов" << endl;
      success = false;
    } 
    else 
    {
      x2 = s - x1;
    }
  }
  if (success) {
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
  }
}
