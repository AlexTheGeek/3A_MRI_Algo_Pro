#include <stdio.h>

int main(){
    int i, imax, max,a;
    for(i=1;i<21;i++){
        printf("Entrer un nombre %i : ", i);
        scanf("%i",&a);
        if (i==1){
            imax = 1;
            max = a;
        }
        else {
            if (a>max){
                max = a;
                imax = i;
            }
        }
    }
    printf("Le maximum est la valeur numéro %i : %i\n", imax, max);
    return 0;
}