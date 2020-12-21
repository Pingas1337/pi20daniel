#include <iostream>
using namespace std;
struct Drink {
	string name;
	long   price;
	long   volume;
};

int main()
{
	long balance, drink_amount;
	cin >> balance >> drink_amount;

	Drink best;
	Drink input;
	for (int i = 0; i < drink_amount; ++i) {
		cin >> input.name >> input.price >> input.volume;

		long long liters = (balance / input.price) * input.volume;

		if (liters == 0)
		    continue;

		if (best.price == 0) {
			best = input;
			continue;
		}

		long long best_liters = (balance / best.price) * best.volume;

		if (liters > best_liters)
			best = input;
	}

	if (best.price == 0)
		cout << -1 << endl;
	else {
		long long bottles = balance / best.price;
		cout << best.name << " " << bottles << "\n" 
		    << bottles * best.volume << "\n"
		    << balance - best.price * bottles << endl;
	}
}
