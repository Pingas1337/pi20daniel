#include <iostream>
using namespace std;
double BMI(double weight, double height) {
	return weight / (height * height);
}

void printBMI(double BMI) {
	if (BMI < 18.5)
		cout << "Underweight";
	else if (BMI < 25.0)
		cout << "Normal weight";
	else if (BMI < 30.0)
		cout << "Overweight";
	else
		cout << "Obesity";

	cout << endl;
}

int main() {
	double weight, height;
	cout << "Введите свой вес и рост через пробел: ";
	cin >> weight >> height;

	printBMI(BMI(weight, height));
}
