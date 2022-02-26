#include <stdio.h>

int main(){
    int a,i, n, nbpos=0, nbneg=0;
    printf("Entrer le nombre de saisies : ");
    scanf("%i",&n);
    for(i=0;i<n;i++){
        printf("Entrer une valeur : ");
        scanf("%i",&a);
        if (a>0)
            nbpos = nbpos + 1;
        if (a<0)
            nbneg = nbneg + 1;
    }
    printf("il y a %i valeurs positives.\nIl y a %i valeurs négatives.\n", nbpos, nbneg);
    return 0;
}