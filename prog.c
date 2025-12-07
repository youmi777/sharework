#include "math.h"
#include<stdio.h>
/* prototypes des focntions afin que le compilateur les connaisse avant de les utiliser */
unsigned long carre(short);     /*carre d'un nombre */
long cube (short);       /* cube d'un nombre*/
/*fonction principale */
int main(){
/* programmation*/
printf("carre de 2 =%lu\n",carre(2));
printf("cube de 3 = %ld\n",cube(3));
return 0;}
