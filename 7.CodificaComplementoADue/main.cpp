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


