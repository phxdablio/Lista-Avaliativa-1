#include <stdio.h>

int main (){
	
	int n,divisores;
	int i;
	printf ("Digite um numero: ");
	scanf ("%d",&n);
	
		for (i=1; i<=n; i++)
		{
			
			if (n%i==0)
			{
				printf ("Divisor: %d\n",i);
			}
		//	printf ("Divisores: %d\n",divisores);
		}

}
