#include <stdio.h>

int main(){
    int nb[5], i;
    for(i=0;i<5;i++){
        nb[i] = i*i;
        printf("%i\n",nb[i]);
    }
    return 0;
}