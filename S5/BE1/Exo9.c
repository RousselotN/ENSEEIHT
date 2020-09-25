#include <stdio.h>

/* EXO9 BE1 */
/* Prototype */
int findy(int a, int x, int b);

int main(){
    int a, b, x;
    printf("Entrez a: ");
    scanf(" %d", &a);
    printf("\nEntrez b: ");
    scanf(" %d", &b);
    printf("\nEntrez x: ");
    scanf(" %d", &x);
    printf("\nLe resultat de ax+b est %d", findy(a,x,b));
    return 0;
}

int findy(int a, int x, int b){
    return a * x + b;
}
