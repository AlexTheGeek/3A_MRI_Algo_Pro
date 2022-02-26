//Alexis Brunet TD3
#include <stdio.h>
#include <stdlib.h>

//exercice 1
float fmax(int a, int b){
    int i;
    float max=f(a);
    for (i=a;i<=b;i++){
        if (f(i)>max)
            max = f(i);
    }
    return max;
}

float df(int t){
    return 4.2*t+1.8;
}

float dfmax(int a, int b){
    int i;
    float max = df(a);
    for (i = a; i <= b; i++){
        if (df(i) > max)
            max = df(i);
    }
    return max;
}

//exercice 2
int compter(char x, char *res, int N){
    int i, resulta=0;
    for(i=0;i<N;i++){
        if (res[i]==x)
            resulta = resulta +1;
    }
    return resulta;
}

float taux_reussie(char *res, int N){
    int a = compter('A',res,N), b = compter('B',res,N), c = compter('C',res,N), d = compter('D',res,N);
    return (((float)(a+b+c+d))/((float)(N)))*100;
}

void ecrire_num_reussi(int *tab, int *num, char *res, int N)
{
    int i, j = 0;
    for (i = 0; i < N; i++){
        switch (res[i]){
            case 'A':
                tab[j] = num[i];
                i += 1;
                break;
            case 'B':
                tab[j] = num[i];
                i += 1;
                break;
            case 'C':
                tab[j] = num[i];
                i += 1;
                break;
            case 'D':
                tab[j] = num[i];
                i += 1;
                break;
            default:
                break;
        }
    }
}

int main(){

    return 0;
}


