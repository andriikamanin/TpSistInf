#include <iostream>
#include <bitset>
using namespace std;

#define MAX_BIT 8

void inputNumeroDecimale(int &);
void codificaComplementoADue(int&);
void inputNumeroBinario(bitset<8>&);
void decodificaComplementoADue(bitset<8>&);
int main()
{
    int numero;
    inputNumeroDecimale(numero);
    codificaComplementoADue(numero);
    return 0;
}

void inputNumeroDecimale(int &numero) {
    cout<<"Inserisci un numero decimale: ";
    cin>>numero;
}
void inputNumeroBinario(bitset<8>&numeroBinario){
    cout<<"Inserisci un numero binario: ";
    cin>>numeroBinario;
}

void codificaComplementoADue(int &numero){
    if(numero>0){
        cout<<"Numero binario: "<<bitset<MAX_BITS>(numero)<<endl;
    }else{
        bitset<MAX_BITS> complemento(-numero);
        complemento = ~complemento;
        complemento = complemento.to_ulong() + 1;
        cout<<"Complemento a due: "<<complemento;
    }
}
void decodificaComplementoADue(bitset<8>&numeroBinario){
    if(numeroBinario[7] == 1){
        bitset<8>numeroInverso = ~numeroBinario;
        int numeroDecoficato = numeroInverso.to_ulong() + 1;
        cout<<"Numero decimale decodificato: "<<-numeroDecoficato<<endl;
    }else{
        cout<<"Numero dopo conversione: "<<numeroBinario.to_ulong()<<endl;
    }
}


