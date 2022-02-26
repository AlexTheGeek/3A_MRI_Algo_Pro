#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Entrer un nombre :" << endl;
    cin >>n;
    if (n<0)
        cout << "Négatif" << endl;
    else {
        if (n>0)
            cout << "Positif" << endl;
        else
            cout << "Nul" << endl;
    }
    return 0;
}