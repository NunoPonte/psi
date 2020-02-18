#include <stdio.h>

int Fahrenheit (float temperatura)
{
	temperatura=((temperatura*9)/5)+32;
	printf("Temperatura do Fahrenheit: %.1f\n", temperatura);
}
void main()
{
	int Celsius;
	printf("Introduza os graus: ");
	scanf("%d",&Celsius);
	Fahrenheit(Celsius);
}

