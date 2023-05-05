#include <stdio.h>
#include <math.h>

int main (){
	
	int raio,potencia,potencia1,volume,area;
	float pi=3.14159;
	
	printf ("Digite o raio: ");
	scanf ("%d",&raio);
	
	potencia1= pow(raio,2);
	potencia= pow(raio,3);
	
	volume = (4/3) * pi * potencia;
	area = 4 * pi * potencia1;

	printf("Valor do volume: %d \nValor da area: %d",volume,area);
	
}
