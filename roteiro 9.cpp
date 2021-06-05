#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int letamanho();
void levetor(float v[],int tam);
void exibevetor (float v[],int tam);
float maioresvalores (float v[],int tam, float aux1,float aux2);

int main()
{
int tam;

tam=letamanho();

float v[tam],aux1,aux2;

levetor(v,tam);
exibevetor(v,tam);
maioresvalores(v,tam,aux1,aux2);

return 0;
}

int letamanho()
{
    int tam;
    cout << "entre com o tamanho do vetor: ";
    cin >> tam;

    return tam;
}

void levetor (float v[], int tam)
{
    for (int i=0;i<tam;i++)
    {
        cout << "entre com v[" << i+1 << "]: ";
        cin >> v[i];
    }
}

void exibevetor(float v[],int tam)
{
    cout << "vetor: ";
    for (int i=0;i<tam;i++)
        cout << v[i] << " ";
}
float maioresvalores (float v[],int tam,float aux1,float aux2)
{
    for (int i=0;i<tam;i++){
        if (v[i]>aux1){
            aux1=v[i];
        }
    }
    for (int i=0;i<tam;i++){
        if (aux1>v[i]){
            aux2=v[i];
        }
    }
    cout << "os dois maiores valores do vetor: "<< aux1 << " " << aux2;
}
