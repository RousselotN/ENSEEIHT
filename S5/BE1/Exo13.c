#include <stdio.h>

/* EXO13 BE1 */
/* Prototype */


int main(){
    FILE *fp = fopen("tab.txt", "w");
    char tab[5] = "Salut";
    int i = 0;
    while (i < 5){
        fprintf(fp, "TAB[%d] = %c\n", i, tab[i]);
        i++;
    }
    return 0;
}
