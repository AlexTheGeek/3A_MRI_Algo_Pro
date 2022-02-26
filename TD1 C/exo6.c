#include <stdio.h>

int main(){
    int y;
    printf("Entrer l'âge : ");
    scanf("%i",&y);
    if (y<6)
        printf("Non classé\n");
    if (y==6 || y==7)
        printf("Poussin\n");
    if (y == 8 || y == 9)
        printf("Pupille\n");
    if (y == 10 || y == 11)
        printf("Minime\n");
    if (y >=12)
        printf("Cadet\n");
    return 0;
}