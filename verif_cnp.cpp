#include <iostream>
#include <string>
using namespace std;
int main(){

    string cnp;
    string luna[12] = {"Ianuarie", "Februarie", "Martie", "Aprilie", "Mai", "Iunie", "Iulie", "August", "Septembrie", 
                        "Octombrie", "Noiembrie", "Decembrie"};

    string judet[50] = {"Alba", "Arad", "Arges", "Bacau", "Bihor", "Bistrita-Nasaud", "Botosani", "Brasov", "Braila", "Buzau",
                        "Caras-Severin", "Cluj", "Constanta", "Covasna", "Dambovita", "Dolj", "Galati", "Gorj", "Harghita",
                        "Hunedoara", "Ialomita", "Iasi", "Ilfov", "Maramures", "Mehedinti", "Mures", "Neamt", "Olt", "Prahova",
                        "Satu Mare", "Salaj", "Sibiu", "Suceava", "Teleorman", "Timis", "Tulcea", "Vaslui", "Valcea", "Vrancea",
                        "Bucuresti", "Sector 1", "Sector 2", "Sector 3", "Sector 4", "Sector 5", "Sector 6", "Calarasi",
                        "Giurgiu"};

    int i, n, menu_select, luna_nr, judet_nr;
    bool menu_running = true;

    while(menu_running){
        cout << "---Meniu---" << endl;
        cout << "1. Introdu CNP" << endl;
        cout << "2. Afiseaza date" << endl;
        cout << "3. Iesire" << endl;
        cout << endl;
        cout << "Selecteaza operatia: ";
        cin >> menu_select;

        switch(menu_select){
            case 1:
                cout << "Introdu CNP: ";
                cin >> cnp;
                cout << endl;

            break;

            case 2:
                cout << "CNP: " << cnp << endl;

                if(cnp.length() != 13){
                    cout << "Eroare: CNP-ul nu are exact 13 cifre!" << endl;
                    cout << endl;
                    break;
                }

                if(cnp[0] == '5' || cnp[0] == '3' || cnp[0] == '1'){         // Verifica prima cifra din CNP si atribuie sexul in functie
                    cout << "Sex: Masculin" << endl;                         //de aceasta
                }else if(cnp[0] == '6' || cnp[0] == '4' || cnp[0] == '2'){
                    cout << "Sex: Feminin" << endl;
                }

                cout << "Anul Nasterii: ";
                if(cnp[1] == '0' || cnp[1] == '1' || cnp[1] == '2'){
                    cout << "20" << cnp[1] << cnp[2] << endl;
                }else if (cnp[1] <= '9' || cnp[1] > '2'){
                    cout << "19" << cnp[1] << cnp[2] << endl;
                }

                luna_nr = (cnp[3] - '0') * 10 + (cnp[4] - '0');
                cout << "Luna nasterii: " << luna[luna_nr - 1] << endl;

                cout << "Ziua nasterii: ";
                cout << cnp[5] << cnp[6] << endl;

                judet_nr = (cnp[7] - '0') * 10 + (cnp[8] - '0');
                cout << "Localitate: " << judet[judet_nr - 1] << endl;


                cout << endl;
            break;
            

            case 3:
            cout << "La revedere!";
            menu_running = false;
            break;

            default:
                cout << "Eroare: Tasteaza un numar intre 1 si 3!";
            break;
        }

    }
    return 0;
}