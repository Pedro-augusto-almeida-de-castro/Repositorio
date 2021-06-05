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
void invertecolunas (float mat[][n],int m)
{
    cout << "a matriz com colunas invertidas e: " << endl;
        for (int i=0; i<m; i++)
        {
            for (int j=n-1; j>=0; j--)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
}
void minMax(float mat[][n],int m,int &linha, int &coluna)
{
    int aux=INT_MAX;
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (aux>mat[i][j])
                {
                    aux=mat[i][j];
                    linha=i;
                }
        }
    }
        for (int j=0; j<n; j++)
        {
            if (aux<mat[linha][j])
                {
                    coluna=j+1;
                }
        }
        linha=linha+1;
}
float maiorlinha (float mat[][n],float maiorl[],int m)
{
    int aux;
    aux=INT_MIN;
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (aux<mat[i][j])
                {
                    aux=mat[i][j];
                }
        }
        maiorl[i]=aux;
        aux=INT_MIN;
    }
    cout << "o maior elemento de cada linha e: ";
    for (int i=0;i<m;i++)
    {
        cout << maiorl[i] << " ";
    }
    cout << endl;
}
float menorcoluna (float mat[][n], float menorc[],int m)
{
    int aux;
    aux=INT_MAX;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            if (aux>mat[j][i])
                {
                    aux=mat[j][i];
                }
        }
        menorc[i]=aux;
        aux=INT_MAX;
    }
    cout << "o menor elemento de cada coluna e: ";
    for (int i=0;i<n;i++)
    {
        cout << menorc[i] << " ";
    }
    cout << endl;
}
void diagonaisinv (float mat[][n],float md[][n],int m)
{
    int aux=m-1;
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i==j)
            {
                md[aux-j][aux-i]=mat[i][j];
            }
            else if (i+j==m-1)
                {
                    md[i][j]=mat[aux-i][aux-j];
                }
            else
                md[i][j]=mat[i][j];
        }
    }
    cout << "matriz diagonais invertidas: " << endl;
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout << md[i][j] << " ";
        }
        cout << endl;
    }
}
int main ()
{
    int m,soma,linha,coluna;
    tamanholinhas(m);
    float mat [m][n],md[m][n],maiorl[m],menorc[n];
    int mi[m][n];
    lematriz(mat,m);
    identidade(mat,mi,m);
    imprimematriz (mat,m);
    matriztransposta (mat,m);
    invertecolunas (mat,m);
    minMax (mat,m,linha,coluna);
    diagonaisinv (mat,md,m);
    maiorlinha (mat,maiorl,m);
    menorcoluna (mat,menorc,m);
    soma=somadiagonalprincipal(mat,m);
    cout << "a linha do minmax e: " << linha << " e a coluna e: " << coluna << endl;
    cout << "a soma da diagonal principal e: " << soma;
    return 0;
}
