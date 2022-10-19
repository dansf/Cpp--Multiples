#include <iostream>
#include "Maquina.h"

void Maquina::Calculate(int numOne, int numTwo, int limit)
{
	int sumOne = 0;
	int sumTwo = 0;

	for (int i = 0; i < limit; i++) {
		if (i == 0)
			i = 1;

		if (i % numOne == 0 || i % numTwo == 0) {
			std::cout << " " << i;

			sumOne += i;
		}
	}

	std::cout << "\nSoma dos multiplos: " << sumOne << "\n";
}
