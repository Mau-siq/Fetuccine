#include <stdlib.h>
#include <stdio.h>


int a[50], i;

int main (){
	system ("mode 151,30");
	printf("Digite o primeiro termo: ");
	scanf("%d", &a[0]);
	printf("Digite o segundo termo: ");
	scanf("%d", &a[1]);
	for(i=2;i < 50;i++){
		if(i%2 == 0)
			a[i] = a[i-1] + a[i-2];
		else
			a[i] = a[i-1] - a[i-2];
	}
	printf("\nOrdem Original:");
	printf("\n{");
	for (i = 0; i < 50; i++)
			if (i == 49)
				printf("%d", a[i]);
			else
				printf("%d,", a[i]);
	printf("}\n");

	printf("\nOrdem inversa:");
	printf("\n{");
	for (i = 49; i >= 0; i--)
			if (i == 0)
				printf("%d", a[i]);
			else
				printf("%d,", a[i]);
	printf("}\n");
}	

