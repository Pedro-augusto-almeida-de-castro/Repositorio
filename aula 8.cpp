#include<iostream>
using namespace std;
const int t=100;
struct registro {
char nome [t];
long int ra;
char cpf [t];
int idade;
};
void zera_matricula (registro alunos[t]){
int i;
for(i=0;i<t;i++){
    alunos[i].ra=0;
}
}
void matricula (registro alunos[t]){
int i;
char a;
for (i=0;i<t;i++){
    if (alunos[i]. ra==0){
        cout << "Nome: ";
        cin.get(alunos[i].nome,t);cin.get();
        cout << "RA: ";
        cin >> alunos[i].ra;cin.get();
        cout << "Cpf: ";
        cin.get(alunos[i].cpf,t);cin.get();
        cout << "idade: ";
        cin >> alunos[i].idade;cin.get();
        }
        cout << "matricula outro aluno (s/n)";
        cin >> a; cin.get ();
        if(a=='n'){
            break;
        }
}
}
void imprime (registro alunos[t]){
int i;
for (i=0;i<100;i++){
    if (alunos[i].ra!=0){
        cout << "Nome: " << alunos[i].nome;
        cout << "\nRA: " << alunos[i].ra;
        cout << "\nCPF: "<< alunos[i].cpf;
        cout << "\nIDADE: " << alunos[i].idade;
        break;
    }
}
cout << endl;
}
void desmatricula (registro alunos[t]){
int i;
long int ra;
bool achei=false;
cout << "digite o ra a ser desmatriculado ";
cin >> ra;
for (i=0;i<t;i++){
    if (alunos[i].ra==ra){
        alunos[i].ra = 0;
        achei=true;
        break;
    }
}
if (achei){
    cout << "aluno " << alunos[i].nome << " :desmatriculado\n";
    }else{
    cout << "ra invalido" << endl;
    }
}
void altera (registro alunos[t]){
int i,aux=0;
char op;
long int ra;
cout << "\ndigite o ra a ser alterado ";
cin >> ra;cin.get();
for (i=0;i<t;i++){
    if (alunos[i].ra==ra){
    aux = i;
    break;
    }
    }
    cout << "\na)altera nome\n";
    cout << "b)altera cpf\n";
    cout << "c)altera ra\n";
    cout << "d)altera idade\n";
    cin >> op;cin.get();
    switch (op){
case 'a':
    cout << "digite o novo nome: ";
    cin.get(alunos[aux].nome,t);cin.get();
    break;
case 'b':
    cout << "digite o novo cpf: ";
    cin.get(alunos[aux].cpf,t);cin.get();
    break;
case 'c':
    cout << "digite o novo ra: ";
    cin >> alunos[aux].ra;cin.get();
    break;
case 'd':
    cout << "digite idade: ";
    cin >> alunos[aux].idade;cin.get();
    break;
    }
}
int main (){
char op;
registro alunos[t];
while (1){
    cout << "MENU" << endl;
    cout << "a)matricula aluno" << endl;
    cout << "b)imprime matriculados" << endl;
    cout << "c)cancela matricula" << endl;
    cout << "d)altera matricula"<<endl;
    cout << "e)mostrar aluno maior idade" << endl;
    cout << "f)mostrar aluno menor idade" << endl;
    cout << "g)mostrar aluno de idade x" << endl;
    cin >> op; cin.get();
    switch (op){
case 'a':
    matricula(alunos);
    break;
case 'b':
    imprime (alunos);
    break;
case 'c':
    desmatricula (alunos);
    break;
case 'd':
    altera (alunos);
    break;
    }
}
}
