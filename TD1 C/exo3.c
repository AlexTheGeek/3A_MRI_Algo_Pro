#include <stdio.h>

int main(){
    float pht, nb, ttva, pttc;
    printf("Entrer le prix hors taxes : ");
    scanf("%f", &pht);
    printf("Entrer le nombre d'article : ");
    scanf("%f",&nb);
    printf("Entrer le taux de TVA : ");
    scanf("%f", &ttva);
    pttc = nb*pht*(1+ttva/100);
    printf("Le prix toutes taxes compris est : %f\n", pttc);
    return 0;
}