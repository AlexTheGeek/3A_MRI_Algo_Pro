#include <iostream>

using namespace std;

int main(){
    int i,x;
    cout << "Ecrire un nombre :" << endl;
    cin >> x;
    for(i=0;i<11;i++)
        cout << x << "*" << i << x*i << endl;
    return 0;
}