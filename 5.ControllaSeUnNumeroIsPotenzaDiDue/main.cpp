#include <iostream>
using namespace std;

void inputNumero(int&);
int controllaSeUnNumeroPotenzaDiDue(int&);
void outputResultato(int&);

int main() {
    int numero;
    inputNumero(numero);
    outputResultato(numero);
    return 0;
}

void inputNumero(int &numero) {
    cout<<"Inserisci un numero:";
    cin>>numero;
}
int controllaSeUnNumeroPotenzaDiDue(int &numero) {
    return (numero>0 && (numero & (numero - 1 )) == 0);

}
void outputResultato(int &numero) {
    if(controllaSeUnNumeroPotenzaDiDue(numero)) {
        cout<<"Numero "<<numero<<" e' una potenza di 2.\n";
    }else {
        cout<<"Numero "<<numero<<" non e' una potenza di 2.\n";
    }
}


