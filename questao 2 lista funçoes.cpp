//Pedro Augusto Almeida de Castro 2019010408
#include <iostream>
#include <math.h>
using namespace std;
void entrada_de_dados(float &peso,float &altura){
cout << "entre com o peso(kg) e a altura(metros) para calcular seu imc: ";
cin >> peso >> altura;
}
bool validacao(float peso,float altura){
if (peso <=0 || altura <=0){
    return false;
}
else
    return true;
}
float calcula_imc(float peso,float altura,float &imc){
if (validacao(peso,altura)){
imc=peso/pow(altura,2);
cout << "seu imc e: " << imc <<endl;
}
else
    cout << "entrada invalida verifique!" << endl;
}
void classificacao(float imc){
if (imc > 0){
if (imc < 18.5){
    cout << "classificado como abaixo do peso!" << endl;
}
else if (imc >=18.5 && imc <25){
    cout << "classificado como peso ideal!" << endl;
}
else if (imc >=25 && imc <30){
    cout << "classificado como sobrepeso!" << endl;
}
else if (imc >=30 && imc <35){
    cout << "classificado como obesidade Grau I!" << endl;
}
else if (imc >=35 && imc <40){
    cout << "classificado como obesidade Grau II (severa)!" << endl;
}
else if (imc >40){
    cout << "classificado como obesidade Grau III (morbida)!" << endl;
}
}
}
void exibe_tabela (){
cout << "IMC------------------Classificacao" << endl
<< "<18.5------------------Abaixo do peso" << endl
<< "18.5 a <25------------------Peso ideal" << endl
<< "25 a <30------------------Sobrepeso" << endl
<< "30 a <35------------------Obesidade Grau I" << endl
<< "35 a <40------------------Obesidade Grau II(severa)" << endl
<< ">=18.5------------------Obesidade Grau III(morbida)" << endl;
}
int main (){
float peso,altura,imc;
entrada_de_dados(peso,altura);
validacao(peso,altura);
calcula_imc(peso,altura,imc);
classificacao(imc);
exibe_tabela();
}
