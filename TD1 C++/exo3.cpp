#include <iostream>

using namespace std;

int main(){
    float pht, nb, ttva, pttc;
    cout << "Entrer le prix hors taxes : " <<endl;
    cin >> pht;
    cout << "Entrer le nombre d'article : " <<endl;
    cin >> nb;
    cout << "Entrer le taux de TVA : " <<endl;
    cin >> ttva;
    pttc = nb*pht*(1+ttva/100);
    cout << "Le prix toutes taxes compris est :" << pttc << endl;
    return 0;
}