#include <stdio.h>

int main(int argc, char* argv[]){
	unsigned long prod = 20;
	int i;
	while (1){
		for (i = 20; i >= 2; i--){
			if (prod % i != 0){
				break;
			}
			if (i == 2){
				printf("%lu\n", prod);
				return;
			}
		}
		prod++;
	}

	return 0;
}