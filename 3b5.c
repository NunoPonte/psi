#include <stdio.h>
float media(int num1,int num2,int num3,int num4) 
{
	return (num1+num2+num3+num4)/4;
}
void main()
{
	int v1,v2,v3,v4;
	printf("Introduza 4 valores: ");
	scanf("%d%d%d%d",&v1,&v2,&v3,&v4);
	printf("Média dos valores é\n v1-%d\n v2-%d\n v3-%d\n v4-%d\n = %.2f\n\n",v1,v2,v3,v4,media(v1,v2,v3,v4));
}
