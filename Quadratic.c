#include <stdio.h>
#include <math.h>

/* EXO Quadratic BE1 */
/* Prototypes */
int get_determinant(int a, int b, int c);

int main(){
    int a, b, c;
    int result;
    printf("Entrez a: ");
    scanf(" %d", &a);
    printf("\nEntrez b: ");
    scanf(" %d", &b);
    printf("\nEntrez c: ");
    scanf(" %d", &c);
    printf("a = %d, b = %d, c = %d", a, b, c);
    int det = get_determinant(a , b ,c);
    if (det == 0){
        result = (-1 * b) / (2 * a);
        printf("\n\nIl y a une racine double: %d", result);
    }
    else if (det > 0){
        result = ((-1 * b) + sqrt(det)) / (2 * a);
        printf("\n\nIl y a deux racines réelles: %d", result);
        result = ((-1 * b) - sqrt(det)) / (2 * a);
        printf("et %d", result);
    }
    else {
        det = -1 * det;
        int re, im;
        re = (-1 * b) / (2 * a);
        im = (sqrt(det)) / (2 * a);
        printf("\n\nIl y a deux solutions complexes: %d + i%d", re, im);
        im = (-1 * sqrt(det)) / (2 * a);
        printf("et %d - i%d", re, im);
    }

    return 0;
}

/*Functions*/
int get_determinant(int a, int b, int c){
    return b * b - (4 * a * c);
}
