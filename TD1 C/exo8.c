#include <stdio.h>

int main(){
    float nb, prix;
    printf("Entrer le nombre de photocopies : ");
    scanf("%f",&nb);
    if (nb<10)
        prix = 0.10*nb;
    else
    {
        if (nb<=30)
            prix = 0.10*10+(nb-10)*0.09;
        else
            prix = 0.10*10+20*0.09+(nb-30)*0.08;
    }
    printf("Le prix est : %.2f\n", prix);
    return 0;
}