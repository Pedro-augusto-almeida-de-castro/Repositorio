#include <iostream>

using namespace std;

int main(){
    int alunos;
    cin>>alunos;
    float Alunos[alunos];
    int provas[4], pesos[4];
    int nota;
    int aux;
    int peso;
    int media=0;
    int soma=0;
    for(int i =0; i<alunos;i++){
        for(int j=0;j<4;j++){
            cin>>peso;
            pesos[j]=peso;
            soma+=peso;
            cin>>nota;
            provas[j]=nota;
            media+=pesos[j]*provas[j];
        }
        Alunos[i]=media/soma;
        cout<<"\n\nAluno "<<i+1<<"  "<<Alunos[i];
    }
}
