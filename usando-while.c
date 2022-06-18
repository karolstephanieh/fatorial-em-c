#include <stdio.h>

	int main () {
	int fat, n;
	
	fat = 1;
	
	printf ("Insira um número: ");
	scanf ("%d", &n);
	
	while (n >= 1) {
		fat = fat * n;
		n--;
	}
	
	printf ("O fatorial do número inserido é %d", fat);
	
	return 0;	
	}
