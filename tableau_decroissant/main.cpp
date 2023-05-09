#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int effectif,note, n = 1,note_min,note_max,index = 1,prev_note,i,j;
    string nom;

    cout << "Entrer l'effectif de la classe" << endl;
    cin >> effectif;

    int tableau_note[effectif];
    string tableau_nom[effectif];

    for(i = 0 ; i < effectif ; i++){

        cout << "Entrer le nom de l'etudiant numero " << n  << endl;
        cin >> nom;
        tableau_nom[i] = nom;

        cout << "Entrer la note de l'etudiant" << nom << endl;
        cin >> note;
        tableau_note[i] = note;

        n = n + 1;
    }

    int tableau_note_desc[effectif];
    string tableau_nom_desc[effectif];

    note_max = tableau_note[0];
    prev_note =  tableau_note[0] ;

    for(i = 1 ; i < effectif; i++){

        note = tableau_note[i];
        nom = tableau_nom[i];

        for(j = 1 ; j < effectif; j++){

            if(note > note_max  &&  note > prev_note && j == effectif){

                tableau_note_desc[index] = note;
                tableau_nom_desc[index] = nom;

                prev_note = tableau_note_desc[index];
                index = index + 1;

            }
        }

    }

     for(i = 0 ; i < effectif; i++){

         cout << tableau_nom_desc[i] << " : " << tableau_note_desc[i] << endl;

     }

    return 0;
}
