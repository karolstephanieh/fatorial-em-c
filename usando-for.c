#include <stdio.h>

	int main () {
	int fat, n;

	printf ("Insira um número: ")
	scanf ("%d", &n);
	
	for (fat = 1; n >= 1; n--)  {
		fat *= n;
}
	printf ("O fatorial do número inserido é %d", fat);
	
	return 0;
	}
