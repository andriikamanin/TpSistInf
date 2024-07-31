#include <iostream>
using namespace std;

void inputTwoNumbers(int &num1,int &num2);

void swapTwoVariables(int &first, int &second);

void outputTwoNumbers(int &num1, int &num2);
int main() {
    int num1, num2;
    inputTwoNumbers(num1,num2);
    swapTwoVariables(num1,num2);

    return 0;
}


void inputTwoNumbers(int &num1,int &num2) {
    cout<<"Inserisci primo numero: ";
    cin>>num1;

    cout<<"Inserisci secondo numero: ";
    cin>>num2;
    cout<<"Numeri primo di swap:\n";

    outputTwoNumbers(num1,num2);

}

void swapTwoVariables(int &first, int &second) {
    first = first ^ second;
    second = first ^ second;
    first = first ^ second;
    cout<<"Numeri dopo swap:\n";
    outputTwoNumbers(first, second);
}

void outputTwoNumbers(int &num1, int &num2) {
    cout<<"Primo numero: "<<num1<<endl;
    cout<<"Secondo numero: "<<num2<<endl;
}
