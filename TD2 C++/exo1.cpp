#include <iostream>

using namespace std;

int main(){
    int a;
    cout << "Ecrire un nombre" <<endl ;
    cin >> a;
    while ((a<10) || (a >20)){
        if (a<10)
            cout << "Plus Grand !" << endl;
        else 
            cout << "Plus petit !" << endl;
        cout << "Ecrire un nombre :" << endl;
        cin >> a;
    }
    cout << "La valeur entre 10 et 20 :" << a <<  endl;
    return 0;
}