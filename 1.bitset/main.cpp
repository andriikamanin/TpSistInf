#include <iostream>
#include <bitset>

using namespace std;

void inputNumero(int &numero){
    cout<<"Inserisci numero decimale: ";
    cin>>numero;
}
void inputStringa(string &stringa) {
    cout<<"Inserisci una stringa: ";
    cin>>stringa;
}


void costruttoreDiNumeriInteri(int &numero){
    bitset<8> numeroBinario(numero);
    cout<<"Numero binario: "<<numeroBinario;
}
void costruttoreDelleStringe(string s) {
    bitset<8> stringBitset(s);
    cout<<"Bitset dalla stringa "<<s<<" e' "<<stringBitset;
}
int main() {
    int numero;
    string stringa;
    inputStringa(stringa);
    costruttoreDelleStringe(stringa);
5

}

