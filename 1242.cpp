#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

void troca(char &a, char &b){
    int aux;
    aux=a;
    a=b;
    b=aux;
}

bool match(char a, char b){
    if(a>b){
      troca(a,b);
    }
    return (a=='B' && b=='S') || (a=='C' && b=='F');
}

int main(){
    string rna;
    while(cin>>rna){
        stack<char> pilha;
        int cont=0;
        for(int i = 0; i < rna.size(); i++){
            if(!pilha.empty() && match(pilha.top(),rna[i])){
                pilha.pop();
                cont++;
            }
            else{
                pilha.push(rna[i]);
            }
        }
        cout<<cont<<"\n";
    }
    return 0;
}
