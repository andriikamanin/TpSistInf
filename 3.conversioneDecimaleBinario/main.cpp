#include <iostream>
#include <bitset>
using namespace std;

void start();
void menuScelta(int scelta);
void menu();
void conversioneDaDecimaleABinario();
void conversioneDaBinarioADecimale();
int main()
{
    start();
    return 0;
}

void conversioneDaDecimaleABinario() {
    int numeroDecimale;
    cout<<"Inserisci un numero decimale: ";
    cin>>numeroDecimale;
    bitset<8> bitsetBinario(numeroDecimale);
    cout<<"Numero binario: "<< bitsetBinario.to_string()<<endl;
}

void conversioneDaBinarioADecimale(){
    string numeroBinario;
    cout << "Inserisci un numero binario: ";
    cin >> numeroBinario;

    bitset<8> bitsetBinario(numeroBinario); 
    cout << "Numero decimale di " << numeroBinario << " è " << bitsetBinario.to_ulong() << endl;
}

void start() {
    bool isRunning = true;
    while(isRunning) {
        menu();
        int scelta;
        cin>>scelta;
        menuScelta(scelta);
    }
}


void menuScelta(int scelta) {
    string stringa;
    switch (scelta) {
        case 1:
            conversioneDaBinarioADecimale();
            break;
        case 2:
            conversioneDaDecimaleABinario();
        break;
    }
}


void menu() {
    cout<<"Benvenuti al menu di programma con bitset.";
    cout<<"Scegli tra quelli proposti:\n";
    cout<<"Conversione un numero binario a decimale            1\n";
    cout<<"Conversione un numero decimale a binario            2\n";
    cout<<"Tua scelta: ";
}
