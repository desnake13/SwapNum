// Tonsuso Michael, 3A inf, 30/09/2023
// Letti in input due numeri A e B, si scambi il loro valore, A diventi B e B diventi A.

#include <iostream>
using namespace std;

class Valori {
    public:
        int a, b;
        // funzione per l'inserimento dei valori
        void InserisciValori() {
            cout << "Inserisci a: ";
            cin >> a;
            cout << "Inserisci b: ";
            cin >> b;
        };
        // funzione per lo scambio dei valori
        void ScambioValori() {
            a = a + b;
            b = a - b;
            a = a - b;
        };
};

int main()
{
    // creazione oggetto myValori della classe Valori
    Valori myValori;

    myValori.InserisciValori(); // chiamiamo la funzione InserisciValori 
    cout << "Valori inseriti: a = " << myValori.a << " , b = " << myValori.b << "\n"; // stampiamo i valori presi in input

    myValori.ScambioValori(); // chiamiamo la funzione che si occupa dello scambio dei valori
    cout << "Valori dopo lo scambio: a = " << myValori.a << " , b = " << myValori.b; // stampiato i valori dopo lo scambio


    return 0;
}

