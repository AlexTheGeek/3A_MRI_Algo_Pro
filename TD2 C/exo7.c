#include <stdio.h>

int main(){
    int tab[500],i,n,moy=0,nbsup=0;
    printf("Entrer le nombre de saisies (<500) :");
    scanf("%i", &n);
    while (n<1 || n>500){
        printf("Merci de saisir une valeur entre 0 et 500\n");
        scanf("%i", &n);
    }
    for(i=0;i<n;i++){
        printf("Entrer une valeur :");
        scanf("%i", &tab[i]);
        moy = moy +tab[i]/n;
    }
    for(i=0;i<n;i++){
        if (tab[i]>moy)
            nbsup = nbsup+1;
    }
    printf("Il y a %i notes supérieures à la moyenne de la classe\n",nbsup);
    return 0;
}