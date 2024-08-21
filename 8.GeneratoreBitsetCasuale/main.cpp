#include <iostream>
#include <bitset>
#define NUMERO_BITS 8
using namespace std;

bitset<NUMERO_BITS> generareBitsetCasualmente(){
    bitset<NUMERO_BITS> bitsetCasuale;
    for(int i=0;i<7;i++){
        bitsetCasuale[i] = rand()%2;
    }
    cout<<"Bitset generato casualmente: "<<bitsetCasuale<<endl;
    return bitsetCasuale;
}

void conversioneInDecimale(bitset<NUMERO_BITS>numeroBinario){
    if(numeroBinario[7] == 1){
        bitset<NUMERO_BITS> numeroInverso = ~numeroBinario;
        int numeroDecodificato = numeroInverso.to_ulong()+1;
        cout<<"Numero decimale di "<<numeroBinario<<" e' "<<-numeroDecodificato<<endl;
    }else{
        cout<<"Numero decimale di "<<numeroBinario<<" e' "<<numeroBinario.to_ulong()<<endl;
    }
}
int main()
{
    srand(time(NULL));

    conversioneInDecimale(generareBitsetCasualmente());
    return 0;
}

