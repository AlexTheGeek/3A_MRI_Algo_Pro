#include <stdio.h>

int main(){
    int i,x;
    printf("Ecrire un nombre :");
    scanf("%i",&x);
    for(i=0;i<11;i++)
        printf("%i * %i = %i\n", x, i, x*i);
    return 0;
}