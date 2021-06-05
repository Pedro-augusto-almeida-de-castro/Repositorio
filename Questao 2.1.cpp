#include<iostream>
#include<string>
using namespace std;

int main(){
    string m;
    cout<<" Entre com o nome do mes para que o mesmo seja abreviado: ";
    getline(cin, m);
    while(m.size() != 3){
        m.erase(m.begin()+3);
    }
    cout<<m<<".";
    return 0;
}
