#include <iostream>
using namespace std;

struct Bloc {
    int nrEtaje;
    int nrAp;
    string strada;
    int anConstructie;
    double suprafataTotala;
    bool areLift;
};

void citireBloc(Bloc& bloc) {
    cout << "Introduceti strada: ";
    cin >> bloc.strada;

    cout << "Introduceti numarul de etaje: ";
    cin >> bloc.nrEtaje;

    cout << "Introduceti numarul de apartamente: ";
    cin >> bloc.nrAp;

    cout << "Introduceti anul constructiei: ";
    cin >> bloc.anConstructie;

    cout << "Introduceti suprafata totala (mp): ";
    cin >> bloc.suprafataTotala;

    cout << "Blocul are lift? (1 pentru da, 0 pentru nu): ";
    cin >> bloc.areLift;
}

void afisareBloc(const Bloc& bloc) {
    cout << "Blocul de pe strada " << bloc.strada
        << " are " << bloc.nrEtaje << " etaje, "
        << bloc.nrAp << " apartamente, "
        << "a fost construit in anul " << bloc.anConstructie
        << ", are o suprafata totala de " << bloc.suprafataTotala << " mp"
        << " si" << (bloc.areLift ? " are lift." : " nu are lift.") << endl;
}

int main() {
    //const int nrBlocuri = 3; 
    Bloc* Blocuri[nrBlocuri];

    for (int i = 0; i < nrBlocuri; ++i) {
        Blocuri[i] = new Bloc();
        cout << "Blocul " << i + 1 << ":\n";

        citireBloc(*Blocuri[i]);
        cout << endl;
    }

    for (int i = 0; i < nrBlocuri; ++i) {
        afisareBloc(*Blocuri[i]);
        cout << endl;
    }

    for (int i = 0; i < nrBlocuri; ++i) {
        delete Blocuri[i];
    }

    return 0;
}
