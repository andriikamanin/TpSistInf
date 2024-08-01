#include <iostream>
#include <bitset>
using namespace std;

#define MAX_BIT 8

void inputNumeroDecimale(int &);
void codificaComplementoADue(int&);
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

void codificaComplementoADue(int &numero) {
    bitset<MAX_BIT> bits(numero);
    cout<<"Numero binario "<<numero<<" e' "<<bits<<endl;
    if(numero<0) {
        bits= ~bits;
        bits = bits.to_ulong() + 1;
    }
    cout<<"Complemento a 2 di "<<numero<<" e' "<<bits<<endl;
}

