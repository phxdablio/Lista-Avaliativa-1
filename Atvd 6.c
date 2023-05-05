#include <stdio.h>

int main (){
	
	int i,multiplos;
	int n1=3;
	int n2=5;
	
	for (i=1; i<=1000;i++){
		if (i%n1==0 || i%n2==0 ){
			multiplos += i;
		}
		
	}
		printf ("Resultado %d\n",multiplos);
}

