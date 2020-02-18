#include <stdio.h>

int calculadora(int n1, int n2)
{
	int soma,produto,sub,div;
	soma=n1+n2;
	produto=n1*n2;
	sub=n1-n2;
	div=n1/n2;
	printf("%d\n%d\n%d\n%d\n",soma,produto,sub,div);
}
void main()
{
	int num1, num2;
	printf("Introduza um número: ");
	scanf("%d",&num1);
	printf("Introduza outro número: ");
	scanf("%d",&num2);
	calculadora(num1,num2);
}
