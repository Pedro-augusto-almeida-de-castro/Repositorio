#include<iostream>
#include<string>
using namespace std;

bool veri (string p, int t){
    for(int i=0; i<t/2; i++){
        if(p[i] != p[t-1-i]){
            return false;
        }
    }
    return true;
}
int main(){
    string p, i;
    int v;
    cout<<" Entre com uma palavra que deseja saber se e palindroma: ";
    getline(cin, p);
    if(veri(p, p.length())==true){
        cout<<"e uma palavra palindroma!";
    }else{
        cout<<" nao e uma palavra palindroma!";
    }
    return 0;
}
