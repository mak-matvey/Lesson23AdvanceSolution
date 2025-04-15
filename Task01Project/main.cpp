#include <iostream>
#include "logic.h"

using namespace std;

int main(void)
{
	int number;

	cout << "Input your number: ";
	cin >> number;

	cout << "Number of multiples of two digits: "
		<< get_number_of_multiples_of_two_digits(number) << endl;
}