#include <stdio.h>

int main(int argc, char* argv[]){
	unsigned long sumSquare = 0, squareSum = 0;
	int i;
	for (i = 1; i <= 100; i++){
		sumSquare += i*i;
		squareSum += i;
	}
	squareSum *= squareSum;

	printf("%lu\n", (sumSquare > squareSum) ? sumSquare - squareSum : squareSum - sumSquare);
	return 0;
}