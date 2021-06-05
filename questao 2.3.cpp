#include<iostream>
#include<string>
using namespace std;
int main(){
    string f;
    char vogal[5]={'a','e','i','o','u'};
    int caracter[5]={0,0,0,0,0};
    cout<<"Entre com uma frase para que a mesma seja invertida: ";
    getline(cin, f);
    for(int j=f.size()-1;j>=0;j--){
        for(int i=0;i<5;i++){
            if(f[j]==vogal[i]){
                f[j]=0x3f;
                caracter[i]+=1;
            }
        }
    }
    for(int i=f.size()-1;i>=0;i--){
        cout<<f[i];
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        if(caracter[i]!=0){
            cout<<vogal[i]<<" teve "<<caracter[i]<<" quantidade"<<endl;
        }
    }
}
