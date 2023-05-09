#include <iostream>

using namespace std;

int main(int argc, char * argv[]) {
    int a, b, c;

        cout << "Entrer un nombre a" << endl;
        cin >> a;
        cout << "Entrer un nombre b" << endl;
        cin >> b;
        cout << "Entrer un nombre c" << endl;
        cin >> c;


    if (a > b) {
        if (a > c) {
            if (b > c) {
                cout << a << " > " << b << " > " << c << endl;
            } else {
                cout << a << " > " << c << " > " << b << endl;
            }
        } else {
            cout << c << " > " << a << " > " << b << endl;
        }
    } else {
        if (b > c) {
            if (a > c) {
                cout << b << " > " << a << " > " << c << endl;
            } else {
                cout << b << " > " << c << " > " << a << endl;
            }
        } else {
            cout << c << " > " << b << " > " << a << endl;
        }
    }

    return 0;
}
