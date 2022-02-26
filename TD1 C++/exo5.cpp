#include <iostream>

using namespace std;

int main(){
    int a,b;
    cout << "Entrer A et B" << endl;
    cin >> a;
    cin >> b;
    if ((a==0) || (b==0))
        cout << "Nul" << endl;
    else
    {
        if ((a<0 && b<0) || (a>0 && b>0))
            cout << "Positif" << endl;
        else
            cout << "Négatif" << endl;
    }
    return 0;
}