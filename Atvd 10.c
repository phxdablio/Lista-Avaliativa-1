#include <stdio.h>

int main (){
	int n[10];
	int i,soma=0,media;
	
	//printf ("Digite valor para os numeros");
	for (i=1;i<11;i++){
		printf ("De um valora para o numero %d: ",i);
		scanf ("%d",&n[i]);
		soma += n[i];
	}

   media = soma/10;
	
	printf ("A soma eh: %d\n",soma);
	printf ("a media eh: %d",media);
}
