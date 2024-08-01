#include <iostream>
#include <bitset>
using namespace std;

void inputBinario(bitset<8>&numeroBinario) {

    cout<<"Inserisci un numero binario di 8 bit:";
    cin>>numeroBinario;
}

void bitwiseAND(bitset<8>&numeroBinario) {
    bitset<8>binaryMask = 0b11001100;
    bitset<8>resultAND = numeroBinario & binaryMask;
    cout<<"Bitwise AND result: "<<resultAND<<endl;
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
