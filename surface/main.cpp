#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
   int L, l, S,Verf,R,R2;
while (R=1) {
while (R2=1){
    cout << "Entrer la longueur" << endl;
    cin >> L;
    cout << "Entrer la largeur" << endl;
    cin >> l;
   Verf=L-l;
if (L<=l){
             cout <<"Les valeur entree ne sont pas correcte"<<endl;
            cout <<"Veuillez reesayez 1-OUI 2-NON "<<endl;
            cin>> R2;
}else{
         cout <<"La surface de votre terrain est de "<<L*l<<" m2"<<endl;
         cout <<"VOULEZ VOUS RECOMMENCER ?? 1-OUI 2-NON "<<endl;
         cin>> R;
}
}
}
    return 0;

}
