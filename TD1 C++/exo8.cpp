#include <iostream>

using namespace std;

int main(){
    float nb, prix;
    cout << "Entrer le nombre de photocopies : " << endl;
    cin >> nb;
    if (nb<10)
        prix = 0.10*nb;
    else
    {
        if (nb<=30)
            prix = 0.10*10+(nb-10)*0.09;
        else
            prix = 0.10*10+20*0.09+(nb-30)*0.08;
    }
    cout << "Le prix est : " << prix << endl;
    return 0;
}