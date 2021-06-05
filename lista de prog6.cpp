#include<iostream>
using namespace std;

int main(){
    int n1, n2, n3, aux;
    cout<<" Entre com tres numeros inteiros: "<<endl;
    cin>> n1;
    cin>>n2;
    cin>>n3;
    if(n1>=n2){
        aux=n1;
        n1=n2;
        n2=aux;
    }
    if(n1>=n3){
        aux=n1;
        n1=n3;
        n3=aux;
    }
    if(n2>=n3){
        aux=n2;
        n2=n3;
        n3=aux;
}
cout<<n1<<n2<<n3;
}
