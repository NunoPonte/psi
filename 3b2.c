#include <stdio.h>
int horas_minutos(int minutos)
{
	int horas=minutos/60;
	minutos =minutos % 60;
	printf("%02d:%02d",horas,minutos);
}
void main()
{
	int v1;
	printf("Introduza um valor: ");
	scanf("%d",&v1);
	horas_minutos(v1);
}
