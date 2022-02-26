#include <iostream>

using namespace std;

int main(){
    int a,i, n, nbpos=0, nbneg=0;
    cout << "Entrer le nombre de saisies : " << endl;
    cin >> n;
    for(i=0;i<n;i++){
        cout << "Entrer une valeur : " << endl;
        cin >> a;
        if (a>0)
            nbpos = nbpos + 1;
        if (a<0)
            nbneg = nbneg + 1;
    }
    cout << "il y a" << nbpos <<"valeurs positives. Il y a" << nbneg <<"valeurs négatives." << endl;
    return 0;
}