#include <iostream>
#include <bitset>
using namespace std;

void inputBinario(bitset<8>&numeroBinario);
bitset<8> inputMaskBinarioPerAND();
void bitwiseAND(bitset<8>numeroBinario);

bitset<8> inputMaskBinarioPerOR();

void bitwiseOR(bitset<8>&numeroBinario);

bitset<8> inputMaskBinarioPerXOR();

void bitwiseOR(bitset<8>&numeroBinario);


int main() {
    bitset<8>numeroBinario;
    inputBinario(numeroBinario);
    bitwiseAND(numeroBinario);
    bitwiseOR(numeroBinario);
    bitwiseXOR(numeroBinario);
    return 0;
}

void inputBinario(bitset<8>&numeroBinario) {

    cout<<"Inserisci un numero binario di 8 bit:";
    cin>>numeroBinario;
}




bitset<8> inputMaskBinarioPerAND(){
    bitset<8>binaryMaskAND;
    cout<<"Inserisci binary mask: ";
    cin>>binaryMaskAND;
    return binaryMaskAND;
}


void bitwiseAND(bitset<8>numeroBinario){
    bitset<8>binaryMask = inputMaskBinarioPerAND();
    
    //cout<<"Mask binario: "<<binaryMask<<endl;
    //<<"Numero binario: "<<numeroBinario<<endl;
    
    bitset<8>bitwiseRisultato = numeroBinario & binaryMask;
    cout<<"Bitwise AND risultato: "<<bitwiseRisultato<<endl;
    
}

bitset<8> inputMaskBinarioPerOR(){
    bitset<8>binaryMaskOR;
    cout<<"Inserisci binary mask: ";
    cin>>binaryMaskOR;
    return binaryMaskOR;
}

void bitwiseOR(bitset<8>&numeroBinario) {
    bitset<8>binaryMask = inputMaskBinarioPerOR();
    bitset<8>bitwiseOR = numeroBinario | binaryMask;
    cout<<"Bitwise OR risultato: "<<biwiseOR<<endl;
}

bitset<8> inputMaskBinarioPerXOR(){
    bitset<8>binaryMaskXOR;
    cout<<"Inserisci binary mask: ";
    cin>>binaryMaskXOR;
    return binaryMaskXOR;
}

void bitwiseOR(bitset<8>&numeroBinario) {
    bitset<8>binaryMask = inputMaskBinarioPerXOR();
    bitset<8>bitwiseXOR = numeroBinario | binaryMask;
    cout<<"Bitwise OR risultato: "<<biwiseXOR<<endl;
}
