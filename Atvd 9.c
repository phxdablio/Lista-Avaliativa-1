#include <stdio.h>
int main(){
    char e;
    int soma = 0, qAbacaxi = 0, qMaca = 0, qPera = 0;
    int *p = &soma;
    do{
        
        
        printf("\nCOMPRE FRUTAS: \n\n(1) Abacaxi = 5,00\n(2) Maca = 1,00\n(3) Pera = 4,00");
        printf ("\nDigite 0 para finalizar as compras: \n");
        
        setbuf(stdin,NULL);
        scanf("%c", &e);

        switch (e){
            case '1': 
                printf("\nQuantos abacaxis? ");
                scanf("%d", &qAbacaxi);
                *p += qAbacaxi * 5;  
                break;
            
            case '2': 
                printf("\nQuantas macas? ");
                scanf("%d", &qMaca);
                *p += qMaca * 1;  
                break;
            
            case '3': 
                printf("\nQuantas peras? ");
                scanf("%d", &qPera);
                *p += qPera * 4;  
                break;
            
            
            case '0':                 
                break;

            default: 
                printf("\nEscolha invalida\n");
                break;
        }
        
        }while(e != '0');

printf("\nO VALOR TOTAL DA COMRPA FOI %d", *p);

} 