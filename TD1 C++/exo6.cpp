#include <iostream>

using namespace std;

int main(){
    int y;
    cout << "Entrer l'âge : " <<endl;
    cin >> y;
    if (y<6)
        cout << "Non classé" << endl;
    if (y==6 || y==7)
        cout << "Poussin" << endl;
    if (y == 8 || y == 9)
        cout << "Pupille" << endl;
    if (y == 10 || y == 11)
        cout << "Minime" << endl;
    if (y >=12)
        cout << "Cadet" << endl;
    return 0;
}