#include <stdio.h>
#include <stdlib.h>

void var_fonction (int *i,int *j,int k,int l)
{
	int u=1,v=2;

    printf("\n Adresse des variables internes var_fonction \n");
	printf(" i = %p j = %p \n",i,j);
	printf(" &k = %p &l = %p \n",&k,&l);
	printf(" &u = %p &v = %p \n",&u,&v);



	*i=u; /* Si on enlève le *, on a un erreur car ce n'est pas le même type */
	*j=v;
	k=u;
	l=v;

	printf("\n\nk=%d, l=%d\n\n", k, l); /* Les variables k et l sont copiés, donc les modifications ne prennent effet qu'au sein de la fonction et n'affecte pas les variables d'origines. */

}

void main ()

{

int a=-1,b=-2,c=-3,d=-4 ;

printf("\n valeur des variables en entree du programme principal \n");
printf(" a = %d b = %d \n",a,b);
printf(" c = %d d = %d \n",c,d);

printf("\n adresses des variables \n");
printf(" &a = %p &b = %p \n",&a,&b);
printf(" &c = %p &d = %p \n",&c,&d);

var_fonction(&a,&b,c,d);

printf("\n valeur des variables en sortie de var_fonction \n");
printf(" a = %d b = %d \n",a,b);
printf(" c = %d d = %d \n",c,d); /* Les valeurs de a et b changent car ce sont les adresses qui ont été envoyés en argument. */

printf("\n");

}
