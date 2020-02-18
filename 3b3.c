#include <stdio.h>
int minutos_horas(int horas, int minutos)
{
	minutos=(horas*60)+minutos;
	printf("%d\n",minutos);
}
void main()
{
	int horas,minutos;
	printf("Introduza as horas: ");
	scanf("%d",&horas);
	printf("Introduza os minutos: ");
	scanf("%d",&minutos);
	minutos_horas(horas,minutos);
}
