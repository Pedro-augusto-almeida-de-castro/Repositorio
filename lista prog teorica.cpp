#include <iostream>
#include <math.h>
using namespace std;
int main (){
int a,b,c;
double raiz1,raiz2,delta;
cout << "entre com os numeros da equaçao de segundo grau para calcular as raizes: ";
cin >> a >> b >> c;
delta=pow(b,2)-4*a*c;
cout << "o seu delta deu: " << delta <<endl;
if (delta>0){
    raiz1=(-b+sqrt(delta))/(2*a);
    raiz2=(-b-sqrt(delta))/(2*a);
    cout << "suas raizes sao: " << raiz1 << " e " << raiz2;
}
else if (delta==0){
    raiz1=-b/(2*a);
    cout << "seu delta deu resultado igual a zero e voce so teve um resultado de raiz que foi: " << raiz1;
}
else if(delta<0){
    cout << "seu delta deu igual a zero logo ele nao possui nenhuma raiz real";
}
return 0;
}
