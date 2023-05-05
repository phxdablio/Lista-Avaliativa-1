#include <stdio.h>
#include <math.h>

int main (){
	
	int x1,x2,y1,y2;
	float cal1;
	
	printf ("Valor de X1: ");
	scanf ("%d",&x1);
	
	printf ("Valor de X2: ");
	scanf ("%d",&x2);
	
	printf ("Valor de Y1: ");
	scanf ("%d",&y1);
	
	printf ("Valor de Y2: ");
	scanf ("%d",&y2);
	
	cal1 = (x2-x1) * (x2-x1) + (y2-y1) * (y2-y1);
	
	
	
	printf ("O resultado eh %0.4f",sqrt(cal1));

}
