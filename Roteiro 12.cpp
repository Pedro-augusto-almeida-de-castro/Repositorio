#include <iostream>
#include <cstdio>
using namespace std;
const int z=8,n=5;
struct alunos
{
    int matricula,idade;
    char nome[30],curso[90],periodo[30];
    float coeficiente;
};
void entradaprodutos(alunos f[n][z],int n)
{
    cout << "entrada de dados alunos:\n";
    for (int i=0; i<n; i++)
    {
        cout << "fileira " << i+1 << " ";
             for (int j=0; j<z; j++)
        {
            cout << "cadeira " << j+1 << endl;
            cout << "Entre com a matricula do aluno: ";
            cin >> f[i][j].matricula;
            cout << "Entre com a idade do aluno: ";
            cin >> f[i][j].idade;
            cout << "Entre com o nome do aluno: ";
            fflush(stdin);
            gets(f[i][j].nome);
            cout << "Entre com o curso do aluno: ";
            fflush(stdin);
            gets(f[i][j].curso);
            cout << "Entre com o periodo do aluno: ";
            fflush(stdin);
            gets(f[i][j].periodo);
            cout << "Entre com o coeficiente do aluno: ";
            cin >> f[i][j].coeficiente;
        }
    }
}
void impressaoprodutos (alunos f[n][z],int n)
{
    cout << "\ndados dos produtos:\n";
    for (int i=0; i<n; i++)
    {
        cout << "fileira " << i+1 << " ";
        for (int j=0; j<z; j++)
        {
            cout << "cadeira " << j+1 << " nome: " << f[i][j].nome <<"  ";
        }
        cout << endl;
    }
}
void escolhadousuario (alunos f[n][z],int n)
{
    int aux1,aux2;
    cout << "digite a fileira e a cadeira do aluno que deseja ver as informacoes:\n";
    cin >> aux1 >> aux2;
    cout << "nome: " << f[aux1-1][aux2-1].nome << endl;
    cout << "matricula: " << f[aux1-1][aux2-1].matricula << endl;
    cout << "curso: " << f[aux1-1][aux2-1].curso << endl;
    cout << "coeficiente: " << f[aux1-1][aux2-1].coeficiente << endl;
    cout << "periodo: " << f[aux1-1][aux2-1].periodo << endl;
    cout << "idade: " << f[aux1-1][aux2-1].idade;
}
int main ()
{
    alunos f[n][z];
    entradaprodutos (f,n);
    impressaoprodutos(f,n);
    escolhadousuario(f,n);
    return 0;
}
