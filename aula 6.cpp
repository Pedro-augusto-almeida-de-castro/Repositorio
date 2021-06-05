#include <iostream>
#include <cmath>
using namespace std;
const int t=100;
void entra_dados (int v[t])
{
    int i;
    char a;
    for (i=1; i<t; i++)
    {
        cout << "entra v[" << i << "]=";
        cin >> v[i];
        cout << "entra mais (s/n)?";
        cin >> a;
        if (a=='n')
        {
            break;
        }
    }
    v[0]=i;
}
void imprime_vetor (int v[t])
{
    int i;
    for (i=1; i<=v[0]; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void dados_vetor (int v[t]){
 cout << v[0] << endl;
}
void media (int v[t]){
int i,s=0;
double m;
for (i=1; i<=v[0]; i++){
    s+=v[i];
}
m=s/(v[0]*1.0);
cout << m << endl;
}
void variancia (int v[t]){
int i,s=0;
double m,e;
for (i=1; i<=v[0]; i++){
    s+=v[i];
}
m=s/(v[0]*1.0);
e= pow(s-m,2)/(v[0]*1.0);
cout << e << endl;
}
void desvio (int v[t]){
int i,s=0;
double m,e,p;
for (i=1; i<=v[0]; i++){
    s+=v[i];
}
m=s/(v[0]*1.0);
e= pow(s-m,2)/(v[0]*1.0);
p= sqrt(e);
cout << p << endl;
}
void menor (int v[t]){
    int i,aux;
    aux=v[1];
    for (i=2; i<=v[0]; i++){
        if (v[i]<aux){
            aux=v[i];
        }
    }
    cout << aux << endl;
}
void maior (int v[t]){
 int i,aux;
    aux=v[1];
    for (i=2; i<=v[0]; i++){
        if (v[i]>aux){
            aux=v[i];
        }
    }
    cout << aux << endl;
}
void primos (int v[t]){
int i;
    for (i=1; i<=v[0]; i++){
        if (v[i]%2!=0){
            cout << v[i] << " ";
        }
    }
    cout << endl;
}
int main ()
{
    char op;
    int v[t];
    while (1)
    {
        cout << "MENU" << endl;
        cout << "a) entrar dados no vetor" << endl;
        cout << "b) imprimi vetor" << endl;
        cout << "c) qtd de dados no vetor" << endl;
        cout << "d) media" << endl;
        cout << "e)variancia" << endl;
        cout << "f)desvio padrao" << endl;
        cout << "g) menor valor" << endl;
        cout << "h)maior valor" << endl;
        cout << "i)somente primos" << endl;
        cin >> op;
        switch (op)
        {
        case 'a':
            entra_dados (v);
            break;
        case 'b':
            imprime_vetor (v);
            break;
        case 'c':
            dados_vetor (v);
            break;
        case 'd':
            media (v);
            break;
        case 'e':
            variancia (v);
            break;
        case 'f':
            desvio (v);
            break;
        case 'g':
            menor (v);
            break;
        case 'h':
            maior (v);
            break;
        case 'i':
            primos (v);
            break;
        }
    }
}
