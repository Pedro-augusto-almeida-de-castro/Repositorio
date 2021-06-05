#include <iostream>
#include<math.h>
using namespace std;
float calcula_delta(float a,float b,float c){
return pow(b,2)-4*a*c;
}
calcula_raizes(float a,float b,float delta){
float r1,r2;
if (delta>0){
    r1=(-b+sqrt(delta))/(2*a);
    r2=(-b-sqrt(delta))/(2*a);
    cout << "suas raizes sao: " << r1 << " " << r2;
}
else if (delta==0){
    r1=(-b)/(2*a);
    cout << "a sua raiz e: " << r1;
}
else if (delta<0){
    cout << "sua equaçao nao tem raizes reais!";
}
}
int main (){
float a,b,c,delta;
cout << "entre com os coeficiestes a,b e c da equaçao de segundo grau que deseja saber o delta e suas respectivas raizes: ";
cin >> a >> b >> c;
delta=calcula_delta(a,b,c);
cout << "seu delta e: " << delta << endl;
calcula_raizes(a,b,delta);
}
