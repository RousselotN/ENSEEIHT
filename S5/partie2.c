#include <stdio.h>
#include <limits.h>

/* PARTIE 2 BE1 */

int main2(){
    short var_short = 2;
    int var_int = 2;
    char var_char = 2;
    float var_float = 2.51;

    printf("Nombre d'octets reserves pour:\n Int: %d\nShort: %d\nchar: %d\nfloat: %d\n", sizeof(var_int), sizeof(var_short), sizeof(var_char), sizeof(var_float));
    printf("Nombre maximal pour:\n Int: %d\nShort: %d\nchar: %d <=> %c\nfloat: %d\n", INT_MAX, SHRT_MAX, CHAR_MAX, CHAR_MAX, INT_MAX);

    return 0;
}

