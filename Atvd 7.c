#include <stdio.h>

#include <stdio.h>

int main() {
    int n, i, antes = 0, atual = 1, proximo;
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    if (n == 0) {
        printf("o temo dessa ordem eh: 0\n");
        return 0;
    }
    
    if (n == 1) {
        printf("O primeiro termo  eh: 1\n");
        return 0;
    }
    
    for (i = 2; i <= n; i++) {
        proximo = antes + atual;
        antes = atual;
        atual = proximo;
    }
    
    printf("A ordem %d da sequencia de Fibonacci eh: %d\n", n, atual);
    
   
}
