#include <stdio.h>

int main(){
	
	int x,y;
	
	printf ("De um valor para x: ");
	scanf ("%d",&x);
	printf ("De um valor para y: ");
	scanf ("%d",&y);
	
	if (x==0 && y==0)
	printf ("Eixo de partida");
	
	if (x>0 && y>0)
	printf ("Quadrante 1");
	
	if (x>0 && y<0)
	printf ("Quadrante 4");
	
	if (x<0 && y<0)
	printf ("Quadrante 3");
	
	if (x<0 && y>0)
	printf ("Quadrante 2");
}
