#include <stdio.h>

/* EXO11 BE1 */
/* Prototype */
void circswitch(int a, int b, int c);

int main(){
    int a, b, c;
    printf("Entrez a: ");
    scanf(" %d", &a);
    printf("\nEntrez b: ");
    scanf(" %d", &b);
    printf("\nEntrez c: ");
    scanf(" %d", &c);
    printf("a = %d, b = %d, c = %d", a, b, c);
    circswitch(a, b, c);
    return 0;
}

void circswitch(int a, int b, int c){
    int temp = b;
    b = a;
    a= temp;
    temp = c;
    c = a;
    a = temp;
    /*
    b = a;
    temp = c;
    a = c;
    c = temp;*/

    printf("\n\na = %d, b = %d, c = %d", a, b, c);
}
