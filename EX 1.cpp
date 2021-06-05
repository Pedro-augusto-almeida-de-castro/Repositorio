#include <iostream>
using namespace std;
int main()
{
    string nome;
    double salario;
    double vendas;
    double salario_total;
    cout<<"Insira seu nome, total de vendas e seu salario fixo:";
    cin>>nome;
    cin>>vendas;
    cin>>salario;
    salario_total=salario+(vendas*15/100);
    cout<<"Nome: "<<nome<<"\n";
    cout<<"Salario: "<<salario<<"\n";
    cout<<"Seu salario total e de: ";
    cout<<salario_total;
}
