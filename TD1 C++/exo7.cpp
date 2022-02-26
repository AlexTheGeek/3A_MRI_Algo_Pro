#include <iostream>

using namespace std;

int main(){
    int h, m;
    cout << "Entrer les heures : " << endl;
    cin >> h;
    cout << "Entrer les minutes : " << endl;
    cin >> m;
    m = (m+1)%60;
    if (m==0)
        h = (h+1)%24;
    cout << "Dans une minute, il sera" << h <<"heures" << m << "minutes"<< endl;
    return 0;
}