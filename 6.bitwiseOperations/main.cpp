#include <iostream>
#include <bitset>
using namespace std;

void inputBinario(bitset<8>&numeroBinario) {

    cout<<"Inserisci un numero binario di 8 bit:";
    cin>>numeroBinario;
}
bitset<8> inputMaskBinarioPerAND(){
    bitset<8>bitwiseMaskAND;
    cout<<"Inserisci bitwise mask: ";
    cin>>bitwiseMaskAND;
    return bitwiseMaskAND;
}

void bitwiseOR(bitset<8>&numeroBinario) {
    bitset<8>binaryMask = 0b00110011;
    bitset<8>resultOR = numeroBinario | binaryMask;
    cout<<"Bitwise OR result: "<<resultOR<<endl;
}

void bitwiseXOR(bitset<8>&numeroBinario) {
    bitset<8>binaryMask = 0b00110011;
    bitset<8>resultXOR = numeroBinario ^ binaryMask;
    cout<<"Bitwise XOR result: "<<resultXOR<<endl;
}


int main() {
    bitset<8>numeroBinario;
    inputBinario(numeroBinario);
    bitwiseAND(numeroBinario);
    bitwiseOR(numeroBinario);
    bitwiseXOR(numeroBinario);
    return 0;
}
