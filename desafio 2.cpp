#include<iostream>
using namespace std;
int validacao_dados(int numero,int &valida)
{
    if (numero>=1 && numero<=1000)
    {
        valida=1;
    }
    else
        valida=0;
}
int calcula_primo_ate_o_numero(int numero,int &aux1)
{
    if (numero<=4)
    {
        for (int i=1; i<=numero; i++)
        {
            if (i%2!=0)
            {
                aux1=i;
            }
        }
    }
    else if (numero<=10)
    {
        for (int i=1; i<=numero; i++)
        {
            if (i%2!=0 && i%3!=0)
            {
                aux1=i;
            }
        }
    }
    else if (numero>10)
    {
        for (int i=1; i<=numero; i++)
        {
            if (i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0)
            {
                aux1=i;
            }
        }
    }
}
int calcula_primeiro_primo_depois_do_numero(int numero,int &aux2)
{
    if (numero<=4)
    {
        for (int i=numero; i>=numero; i++)
        {
            if (i%2==1)
            {
                aux2=i;
                break;
            }
        }
    }
    else if (numero<=10)
    {
        for (int i=numero; i>=numero; i++)
        {
            if (i%2==1 && i%3!=0)
            {
                aux2=i;
                break;
            }
        }
    }
    else if (numero>10)
    {
        for (int i=numero; i>=numero; i++)
        {
            if (i%2==1 && i%3!=0 && i%5!=0 && i%7!=0)
            {
                aux2=i;
                break;
            }
        }
    }
}
int acha_primo_mais_proximo(int numero,int aux1,int aux2,int &primo_mais_proximo)
{
    if (numero-aux1<aux2-numero)
    {
        primo_mais_proximo=aux1;
    }
    else if (numero-aux1>aux2-numero)
    {
        primo_mais_proximo=aux2;
    }
    else if (numero-aux1==aux2-numero)
    {
        if (aux1>aux2)
        {
            primo_mais_proximo=aux2;
        }
        if (aux1<aux2)
        {
            primo_mais_proximo=aux1;
        }
        if (aux1==aux2)
        {
            primo_mais_proximo=aux1;
        }
    }
}
int main()
{
    int numero,valida,aux1,aux2,primo_mais_proximo;
    cout << "digite o numero que deseja saber qual o primo mais proximo: ";
    cin >> numero;
    validacao_dados(numero,valida);
    if (valida==1)
    {
        calcula_primo_ate_o_numero(numero,aux1);
        calcula_primeiro_primo_depois_do_numero(numero,aux2);
        acha_primo_mais_proximo(numero,aux1,aux2,primo_mais_proximo);
        cout << "o numero primo mais proximo do numero digitado e: " <<primo_mais_proximo;
    }
    else
        cout << "entrada invalida";
}
