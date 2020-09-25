#include <stdio.h>

/* EXO9 BE1 */
/* Prototype */
void sumprod(int a, int b);

int main(){
    int a, b;
    printf("Entrez a: ");
    scanf(" %d", &a);
    printf("\nEntrez b: ");
    scanf(" %d", &b);
    sumprod(a, b);
    return 0;
}

void sumprod(int a, int b){
    int somme = a + b;
    int produit = a * b;
    printf("\n\na*b = %d; a+b = %d", produit, somme);
}
