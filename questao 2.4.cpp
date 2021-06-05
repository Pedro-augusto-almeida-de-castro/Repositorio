#include <iostream>
using namespace std;
const int n=4;
int tamanholinhas (int &m)
{
    cout << "digite o tamanho da linhas da matriz: ";
    cin >> m;
}
void lematriz (float mat[][n],int m)
{
    cout << "digite os valores para serem colocados na matriz: " << endl;
    for (int i=0; i<m; i++)
    {
        cout << "linha " << i+1 << ": ";
        for (int j=0; j<n; j++)
        {
            cin >> mat[i][j];
        }
    }
}
void imprimematriz (float mat[][n],int m)
{
    cout << "matriz montada: " << endl;
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
float somadiagonalprincipal (float mat[][n],int m)
{
    int soma=0;
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i==j)
            {
                soma+=mat[i][j];
            }
        }
    }
    return soma;
}
void identidade(float mat[][n],int mi[][n],int m)
{
    if (m==n)
    {
        cout << "a matriz identidade e: " << endl;
        for (int i=0; i<m; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (i==j)
                {
                    cout << 1 << " ";
                }
                else
                    cout << 0 << " ";
            }
            cout << endl;
        }
    }
    else
        cout << "nao possui matriz identidade pois n!=m!";
}
void matriztransposta (float mat[][n],int m)
{
    cout << "a matriz transposta e: " << endl;
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                cout << mat[j][i] << " ";
            }
            cout << endl;
        }
}
int main ()
{
    int m,soma;
    tamanholinhas(m);
    float mat [m][n];
    int mi[m][n];
    lematriz(mat,m);
    identidade(mat,mi,m);
    imprimematriz (mat,m);
    matriztransposta (mat,m);
    soma=somadiagonalprincipal(mat,m);
    cout << "a soma da diagonal principal e: " << soma;
    return 0;
}
