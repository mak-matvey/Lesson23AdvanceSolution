#include <iostream>

using namespace std;

int main(void)
{
	int number;

	cout << "Input numbers (input zero to exit): ";
	cin >> number;

	int max = number;

	while (number != 0)
	{
		max = number > max ? number : max;
		cin >> number;
	}

	cout << "Max number is " << max << endl;
}