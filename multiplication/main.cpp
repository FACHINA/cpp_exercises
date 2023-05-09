#include <iostream>

using namespace std;

int main(int argc, char *argv[])

{

    int m,n,prod,R;
    while (R=1){
        cout << "Aficher une table de multilicstion dunnombre de votre choix" << endl;
    cin >> n;
            for (m=1;m<13;m=m+1){
                prod=n*m;
       cout <<n<<"*"<<m<<"="<<prod<< endl;
    }
      cout << "VOULEZ VOUS RECOMMENCER ?? 1-OUI 2-NON" << endl;
      cin>>R;
    }
    return 0;
}
