#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int A,B,C,binomio;
    float x,y;
    cout<<" Entre com os valores A,B e C: "<<endl;
    cin>> A>>B>>C;
    if (A==0){
      cout<<"A nao existe"<<endl;
    }
    binomio = B*B-4*A*C;
    if (binomio<0){
        cout<<"Equacao sem solucao otario"<<endl;
    }
    else if(binomio>=0){
        cout<<"\n   Delta: "<< binomio <<endl;
    x = (-B+sqrt(binomio))/(2*A);
    y = (-B-sqrt(binomio))/(2*A);
    cout<<" X1= "<< x <<" X2= "<< y <<endl;
    }
    return 0;
}

