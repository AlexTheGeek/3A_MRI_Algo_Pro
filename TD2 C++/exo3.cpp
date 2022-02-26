#include <iostream>

using namespace std;

int main(){
    int i, imax, max,a;
    for(i=1;i<21;i++){
        cout << "Entrer un nombre" << i << endl;
        cin >> a;
        if (i==1){
            imax = 1;
            max = a;
        }
        else {
            if (a>max){
                max = a;
                imax = i;
            }
        }
    }
    cout << "Le maximum est la valeur numéro" << imax << ":" << max << endl;
    return 0;
}