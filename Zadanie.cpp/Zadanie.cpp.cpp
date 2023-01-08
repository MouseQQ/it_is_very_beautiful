#include <iostream>
#include "constants.h"
#include "func.h"

void calculateAndPrintHeight(double h, int seconds)
{
	double height = calculateHeight(h, seconds);
	printHeight(height, seconds);
}

int main()
{
	const double h = height();

	calculateAndPrintHeight(h, 0);
	calculateAndPrintHeight(h, 1);
	calculateAndPrintHeight(h, 2);
	calculateAndPrintHeight(h, 3);
	calculateAndPrintHeight(h, 4);
	calculateAndPrintHeight(h, 5);

	return 0;
}