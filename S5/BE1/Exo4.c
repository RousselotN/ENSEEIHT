#include <stdio.h>

/* EXO4 BE1 */

int main(){

    int val = 123;
    int* p_val = &val;

    printf("Adresse de val: %p\nValeur de val: %d\nAdresse de p_val: %p\nValeur de p_val: %p\n\n", &val, val, &p_val, p_val);

    *p_val = 12;

    printf("Adresse de val: %p\nValeur de val: %d\nAdresse de p_val: %p\nValeur de p_val: %p\n\n", &val, val, &p_val, p_val);

    p_val++; /* Incr�mente l'adresse point�e de 4 octets */

    printf("Adresse de val: %p\nValeur de val: %d\nAdresse de p_val: %p\nValeur de p_val: %p\n\n", &val, val, &p_val, p_val);

    double vald = 123;
    double* p_vald = &vald;

    printf("Adresse point�e par p_vald: %p\n\n", p_vald);

    p_vald++; /* Incr�mente l'adresse point�e de 8 octets */

    printf("Adresse point�e par p_vald: %p\n\n", p_vald);

    return 0;

}

