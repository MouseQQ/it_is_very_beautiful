#include <iostream>
#include "constants.h"

double calculateHeight(double h, int seconds)
{
	double distanceFallen = (myConstants::gravity * seconds * seconds) / 2;
	double currentHeight = h - distanceFallen;

	return currentHeight;
}