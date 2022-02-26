#include <stdio.h>

int main(){
    int a,b;
    printf("Entrer A et B\n");
    scanf("%i%i", &a, &b);
    if ((a==0) || (b==0))
        printf("Nul\n");
    else
    {
        if ((a<0 && b<0) || (a>0 && b>0))
            printf("Positif\n");
        else
            printf("Négatif\n");
    }
    return 0;
}