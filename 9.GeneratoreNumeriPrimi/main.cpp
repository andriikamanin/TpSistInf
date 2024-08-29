#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;
#define MAX_BITS 8
void generatoreDiNumeriPrimi(bitset<MAX_BITS>&primo);
void outputNumeriPrimi(bitset<MAX_BITS>&primo);


int main() {
    // a. Chiedere all’utente una sequenza binaria di 4 bit
    bitset<MAX_BITS>primo;
    generatoreDiNumeriPrimi(primo);
    outputNumeriPrimi(primo);
    return 0;
}

void generatoreDiNumeriPrimi(bitset<MAX_BITS>&primo){
    primo.set();//impostiamo tutti i bit come 1 
    primo[0] = primo[1] = 0;//0 e 1 non sono numeri primi
    
    for(int i=2; i<= sqrt(MAX_BITS); ++i){
        if(primo[i]){
            for(int j = i*i; j<MAX_BITS; j += i){
                primo.reset(j);
            }
        }
    }
}

void outputNumeriPrimi(bitset<MAX_BITS>&primo){
    for(int i=2; i<MAX_BITS;i++){
        if(primo[i]){
            cout<<i<<" ";
        }
        
    }
}

