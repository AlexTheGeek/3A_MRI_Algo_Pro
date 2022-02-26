#include <stdio.h>

int main(){
    int h, m;
    printf("Entrer les heures : ");
    scanf("%i",&h);
    printf("Entrer les minutes : ");
    scanf("%i",&m);
    m = (m+1)%60;
    if (m==0)
        h = (h+1)%24;
    printf("Dans une minute, il sera %i heures %i minutes\n", h, m);
    return 0;
}