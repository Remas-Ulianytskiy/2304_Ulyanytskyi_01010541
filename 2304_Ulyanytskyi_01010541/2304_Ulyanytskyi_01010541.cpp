#include <iostream>

using namespace std;

int get_user_value() {
	int value;
	cin >> value;
	return value;
}

bool is_perfect_number(const int number) {
	int sum = 0;

	for (int i = 1; i < number; i++) {
		if (number % i == 0) {
			sum += i;
		}
	}

	return number == sum;
}

int main()
{
	int max_range;
	int counter = 0;

	cout << "Type max range to find pergect number: ";
	max_range = get_user_value();	

	if (max_range > 0) {
		for (int i = 1; i <= max_range; i++) {
			if (is_perfect_number(i)) {				
				cout << i << " is a perfect number\n";
				++counter;
			}
		}
	} else {
		cout << "Error";
	}

	if (counter == 0) {
		cout << "We haven't found the perfect number in this range";
	}

	return 0;
}