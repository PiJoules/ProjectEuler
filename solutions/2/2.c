#include <stdio.h>

int main(int argc, char* argv[]){
	unsigned long sum = 0;

	int a = 1;
	int b = 2;
	while (a < 4000000){
		if (a % 2 == 0){
			sum += a;
		}
		int c = a;
		a = b;
		b += c;
	}

	printf("%lu\n", sum);
	return 0;
}