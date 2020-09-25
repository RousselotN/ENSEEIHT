#include <stdio.h>

/* PARTIE 3 BE1 */

int main3(){
    char a = 2;
    char b = 3;

    char sup = a > b;
    char inf = a < b;
    char eq = a == b;
    char neq = a!= b;

    char and = a && b;
    char or = a || b;
    char nota = !a;
    char notb = !b;

    char andweird = a & b;
    char orweird = a | b;
    char pow = a^b;

    printf("a>b: %d\na<b: %d\na==b: %d\na != b: %d\na&&b: %d\na||b: %d\n!a: %d\nnotb: %d\na&b: %d\na|b: %d\na^b: %d\n", sup, inf, eq, neq, and, or, nota, notb, andweird, orweird, pow);

    return 0;
}


