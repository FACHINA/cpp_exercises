#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

    int a , b ;
    char operateur;

    cout << "Entrer le premier nombre" << endl;
    cin >> a ;

    cout << "Saisissez l'operateur" << endl;
    cin >> operateur ;


    cout << "Entrer le second nombre" << endl;
    cin >> b ;

    switch(operateur){

        case '+':
            cout << a << " + "<< b << " = " << (a + b) << endl;
        break;

        case '-':
            cout << a << " - " << b << " = " << (a - b) << endl;
        break;

        case '*':
            cout << a << "  *  " << b << " = " << (a * b) << endl;
        break;

        case '/':
            if(b != 0){
                cout << a << " / " << b << " = " << (a / b) << endl;
            }else{
               do{
                     cout << "L'operation est impossible b doit etre different de '0' " << endl;
                     cout << "Saisissez un nouvelle valeur pour 'b' " << endl;
                     cin >> b;
                }while( b == 0);

                cout << a << " / " << b << " = " << (a / b) << endl;
            }
        break;

        default:
            cout << "L'operation est impossible une erreur est survenue " << endl;
        break;

    }


    return 0;
}
