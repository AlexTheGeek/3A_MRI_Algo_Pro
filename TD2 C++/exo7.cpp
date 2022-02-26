#include <iostream>

using namespace std;

int main(){
    int tab[500],i,n,moy=0,nbsup=0;
    cout << "Entrer le nombre de saisies (<500) :" << endl;
    cin >> n;
    while (n<1 || n>500){
        cout << "Merci de saisir une valeur entre 0 et 500" << endl;
        cin >> n;
    }
    for(i=0;i<n;i++){
        cout << "Entrer une valeur :" << endl;
        cin >> tab[i];
        moy = moy +tab[i]/n;
    }
    for(i=0;i<n;i++){
        if (tab[i]>moy)
            nbsup = nbsup+1;
    }
    cout << "Il y a" << nbsup << "notes supérieures à la moyenne de la classe" << endl;
    return 0;
}