#include <stdio.h>

int main(){
    int n;
    printf("Entrer un nombre :");
    scanf("%i", &n);
    if (n<0)
        printf("Négatif\n");
    else {
        if (n>0)
            printf("Positif\n");
        else
            printf("Nul\n");
    }
    return 0;
}