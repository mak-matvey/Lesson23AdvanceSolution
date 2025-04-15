#include "logic.h"

int get_number_of_multiples_of_two_digits(int number)
{
	number = number < 0 ? -number : number;

	int count = 0;

	while (number != 0)
	{
		count += number % 10 % 2 == 0 ? 1 : 0;
		number /= 10;
	}

	return count;
}