#include <any>
#include <iostream>
#include <bitset>
using namespace std;



void inputNumero(int &numero);

void inputStringa(string &stringa);

void bitsetDellaStringa(string &stringa);

void setIndividualBits(string &stringa);
void flipIndividualBits(string &stringa);

void resetIndividualBit(string &stringa);

void cantareNumeroBits(string &stringa);

void anyBitSet(string &stringa);
void allBitSet(string &stringa);

void menu();

void menuScelta(int scelta);
void start();

int main()
{

    start();
    return 0;

}




void inputNumero(int &numero) {
    cout<<"Inserisci un numero: ";
    cin>>numero;
}

void inputStringa(string &stringa) {
    cout<<"Inserisci una stringa: ";
    cin>>stringa;

}

void bitsetDellaStringa(string &stringa) {
    bitset<8> bitsetStringa(stringa);
    cout<<"Bitset della stringa "<<stringa<<" :"<<bitsetStringa<<endl;
}

//Поменять значения бита на 1 в определнной позиции.
//set(pos, value) где pos это позиция бита, value значение (true - 1, false - 0), если написать посто set() то все биты станут 1
void setIndividualBits(string &stringa) { 
    bitset<8> bitsetStringa(stringa);
    bitsetStringa.set(2);
    cout<<"Bitset della stringa "<<stringa<<" :"<<bitsetStringa<<endl;
}

//инвертация определенного бита. если написать flip() то все биты инвертируються 
void flipIndividualBits(string &stringa) {
    bitset<8> bitsetStringa(stringa);
    cout<<"Inserisci bit da flipare: ";
    int bitForFlip;
    cin>>bitForFlip;
    bitsetStringa.flip(bitForFlip);
    cout<<"Bitset della stringa "<<stringa<<" :"<<bitsetStringa<<endl;
}
//используеться для сброса определенного бита до 0. Если написать reset() то все биты будут равны 0
void resetIndividualBit(string &stringa) {
    bitset<8> bitsetStringa(stringa);
    cout<<"Inserisci bit per reset: ";
    int bitForReset;
    cin>>bitForReset;
    bitsetStringa.flip(bitForReset);
    cout<<"Bitset della stringa "<<stringa<<" :"<<bitsetStringa<<endl;
}

void cantareNumeroBits(string &stringa) {
    bitset<8> bitsetStringa(stringa);


    int count = bitsetStringa.count();
    cout<<"La lunghezza di bitset "<<stringa<<" :"<<count<<endl;
}

void anyBitSet(string &stringa) {
    bitset<8> bitsetStringa(stringa);
    cout<<"Any bit set? "<< (bitsetStringa.any()?"Si":"No")<<endl;
}
void allBitSet(string &stringa) {
    bitset<8> bitsetStringa(stringa);
    cout<<"All bits is setted? "<<(bitsetStringa.all()?"Si":"No")<<endl;
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

void menu() {
    cout<<"Benvenuti al menu di programma con bitset.";
    cout<<"Scegli tra quelli proposti:\n";
    cout<<"Input stringa            1\n";
    cout<<"Bitset della stringa     2\n";
    cout<<"Set individual bit       3\n";
    cout<<"Flip individual bit      4\n";
    cout<<"Reset individual bit     5\n";
    cout<<"Cantare numero bits      6\n";
    cout<<"Any bit is setted?       7\n";
    cout<<"All bits are setted      8\n";
    cout<<"Tua scelta: ";
}

void menuScelta(int scelta) {
    string stringa;
    switch (scelta) {
        case 1:
            inputStringa(stringa);
            break;
        case 2:
            bitsetDellaStringa(stringa);
            break;
        case 3:
            setIndividualBits(stringa);
            break;

        case 4:
            flipIndividualBits(stringa);
            break;
        case 5:
            resetIndividualBit(stringa);
            break;
        case 6:
            cantareNumeroBits(stringa);
            break;
        case 7:
            anyBitSet(stringa);
            break;
        case 8:
            allBitSet(stringa);
            break;
    }
}
