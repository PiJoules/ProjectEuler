#include <stdio.h>

int isPalindrome(int n){
	int reverse = 0;
	int copy = n;
	while (copy > 0){
		reverse *= 10;
		reverse += copy % 10;
		copy /= 10;
	}
	return n == reverse;
}

int main(int argc, char* argv[]){
	int i,j;
	unsigned int max = 0;
	for (i = 999; i >= 100; i--){
		for (j = 999; j >= 100; j--){
			unsigned int prod = i*j;
			if (isPalindrome(prod)){
				max = (prod > max ? prod : max);
			}
		}
	}

	printf("%d\n", max);
	return 0;
}