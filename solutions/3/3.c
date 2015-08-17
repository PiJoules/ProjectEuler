#include <stdio.h>


int main(int argc, char* argv[]){
	unsigned long i;
	unsigned long val = 600851475143;
	for (i = 2; i < val; i++){
		while (val % i == 0){
			val /= i;
		}
	}

	printf("%lu\n", val);
	return 0;
}