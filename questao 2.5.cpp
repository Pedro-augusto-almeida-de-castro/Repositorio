#include<iostream>
#include<string>
using namespace std;

int main(){
    string arq;
    cout<<"entre com o nome do arquivo para que o mesmo seja alterado de tipo: ";
    getline(cin, arq);
    for(int i=0;i<=arq.size()-1;i++){
        if(arq[i]=='.'){
            arq[i+1]='b';
            arq[i+2]='m';
            arq[i+3]='p';
            break;
        }
    }
    cout<<arq;
    return 0;
}
