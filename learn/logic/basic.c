#include <stdio.h>

int main () {
	int a, b, sum;
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);

		printf("Digite o segundo numero: ");
		scanf("%d", &b);
	sum = a + b;

	printf("A soma total é:%2d\n", sum);
	return 0;
}