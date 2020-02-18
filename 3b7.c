#include <stdio.h>
int tabuada (int tabuada)
{
	int n;
	printf("Tabuada do %d\n",tabuada);
	for(n=1;n<=10;n++)
		printf("%d*%d=%d\n",n,tabuada,n*tabuada);
}
void main()
{
	int num;
	printf("Introduza 1 valor: ");
	scanf("%d",&num);
	tabuada(num);
}
