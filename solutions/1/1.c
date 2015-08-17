#include <stdio.h>

/*
Find the sum of all the multiples of 3 or 5 below 1000.
*/
int main(int argc, char* argv[]){
	unsigned long sum = 0;

	int i;
	for (i = 1; i < 1000; i++){
		if (i % 3 == 0 || i % 5 == 0){
			sum += i;
		}
	}

	printf("%lu\n", sum);
	return 0;
}