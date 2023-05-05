#include <stdio.h>

int main (){
	int n,maior=0,menor=999;
	
	printf ("Pressione ENTER ");
	do{
		getchar();
		printf ("Digite numeros aleatorios: ");
		scanf("%d",&n);
		if (n>=maior){
			maior=n;
		}
		
	}while (n>0);
		
		
		if (n<menor){
			menor=n;
		}
		getchar();
		printf ("Maior numero digitado foi: %d\n",maior);
		printf ("Menor numero digitado foi: %d\n",menor);
	}
	
 
