#include <stdio.h>

int main(){
    int a;
    printf("Ecrire un nombre :");
    scanf("%i", &a);
    while ((a<10) || (a >20)){
        if (a<10)
            printf("Plus Grand !\n");
        else 
            printf("Plus petit !\n");
        printf("Ecrire un nombre :");
        scanf("%i",&a);
    }
    printf("La valeur entre 10 et 20 : %i\n", a);
    return 0;
}