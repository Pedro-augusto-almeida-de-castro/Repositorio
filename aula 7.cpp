#include <iostream>
#include <cmath>
using namespace std;
const int t=2;
void entra (int m[t][t])
{
    int i,j;
    for (i=0; i<t; i++)
    {
        for (j=0; j<t; j++)
        {
            cout << "m["<<i<<"]["<<j<<"]=";
            cin >> m[i][j];
        }
    }
    cout<<endl;
}
void imprime (int m[t][t])
{
    int i,j;
    for (i=0; i<t; i++)
    {
        for (j=0; j<t; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void menor (int m[t][t])
{
    int i,j,aux;
    aux= m[0][0];
    for (i=0; i<t; i++)
    {
        for (j=0; j<t; j++)
        {
            if (m[i][j]<=aux)
            {
                aux=m[i][j];
            }
        }
    }
    cout << "o menor valor e: " << aux;
    cout << endl;
}
void maior (int m[t][t])
{
    int i,j,aux;
    aux= m[0][0];
    for (i=0; i<t; i++)
    {
        for (j=0; j<t; j++)
        {
            if (m[i][j]>=aux)
            {
                aux=m[i][j];
            }
        }
    }
    cout << "o menor valor e: " << aux;
    cout << endl;
}
void linhas (int m[t][t])
{
    int i,j,s=0;
    for (i=0; i<t; i++)
    {
        s=0;
        for (j=0; j<t; j++)
        {
            s+=m[i][j];
        }
        cout << "["<<s<<"]";
    }
    cout << endl;
}
void colunas (int m[t][t])
{
    int i,j,s=0;
    for (j=0; j<t; j++)
    {
        s=0;
        for (i=0; i<t; i++)
        {
            s+=m[i][j];
        }
        cout << "["<<s<<"]";
    }
    cout << endl;
}
void somart (int m[t][t])
{
    int i,j,s=0;
    for (i=0; i<t; i++)
    {
        for (j=0; j<t; j++)
        {
            s+=m[i][j];
        }
    }
    cout << s;
    cout << endl;
}
void seprimo (int m[t][t])
{
    int i,j;
    for (i=0; i<t; i++)
    {
        for (j=0; j<t; j++)
        {
            if (m[i][t]%2==0)
            {
                cout<<0.0;
            }
            else if(m[i][t]%2!=0)
            {
                cout<<1.0;
            }
            cout << m[i][t] <<" ";
        }
        cout << endl;
    }
    cout << endl;
}
int main ()
{
    int m [t][t];
    char op;
    while (1)
    {
        cout << "MENU:" << endl;
        cout << "a)carregar matriz" << endl;
        cout << "b)imprimir matriz" << endl;
        cout << "c)achar menor valor" << endl;
        cout << "d)achar maior valor" << endl;
        cout << "e)somar linhas " << endl;
        cout << "f)somar colunas" << endl;
        cout << "g)somar tudo" << endl;
        cout << "h)1 se primo; 0 se nao" << endl;
        cin >> op;
        switch (op)
        {
        case 'a':
            entra (m);
            break;
        case 'b':
            imprime(m);
            break;
        case 'c':
            menor(m);
            break;
        case 'd':
            maior (m);
            break;
        case 'e':
            linhas (m);
            break;
        case 'f':
            colunas (m);
            break;
        case 'g':
            somart(m);
            break;
        case 'h':
            seprimo(m);
            break;
        }
    }
}
