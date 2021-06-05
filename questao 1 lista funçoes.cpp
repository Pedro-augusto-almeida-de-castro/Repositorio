#include <iostream>
#include <math.h>
using namespace std;
float soma (float n1, float n2){
return n1+n2;
}
float subtracao (float n1,float n2){
return n1-n2;
}
float multiplicacao(float n1,float n2){
return n1*n2;
}
float divisao (float n1,float n2){
return n1/n2;
}
int main (){
float n1,n2,resultado;
char op;
cout << "Menu: " << endl
<< "a)soma!" << endl
<< "b)subtracao!"<<endl
<< "c)multiplicacao!"<<endl
<< "d)divisao!" << endl
<< "escolha a opcao de operacao que deseja realizar e entre com os dois numeros que serao usados respectivamente: ";
cin >> op >> n1 >> n2;
switch (op){
case 'a':
    resultado=soma(n1,n2);
    cout << "o resultado da soma e: " << resultado;
    break;
case 'b':
    resultado=subtracao(n1,n2);
    cout << "o resultado da subracao e: " <<resultado;
    break;
case 'c':
    resultado=multiplicacao(n1,n2);
    cout << "o resultado da multiplicacao e: " <<resultado;
    break;
case 'd':
    resultado=divisao(n1,n2);
    cout << "o resultado da divisao e: " <<resultado;
    break;
}
}
