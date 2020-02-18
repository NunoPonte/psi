#include <stdio.h>
int  par_impar(int v)
{
	if(v%2==0)
		return printf("Par\n");	
	else
		return printf("Impar\n");
}
void main()
{
	int num;
	printf("Introduza um valor: ");
	scanf("%d",&num);
	par_impar(num);
}
