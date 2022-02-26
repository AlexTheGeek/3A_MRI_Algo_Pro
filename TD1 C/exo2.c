#include <stdio.h>

int main(){
    int nb, carr;
    printf("Entrer un nombre : ");
    scanf("%i",&nb);
    carr = nb*nb;
    printf("Son carrré est : %i\n", carr);
    return 0;
}