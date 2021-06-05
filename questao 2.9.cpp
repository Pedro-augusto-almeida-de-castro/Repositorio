#include <iostream>
using namespace std;
const int n=4;
void lematriz (float mat[][n],int m)
{
    cout << "digite os valores para serem colocados na matriz: " << endl;
    for (int i=0; i<8; i++)
    {
        cout << "disciplina " << i+1 << ": ";
        for (int j=0; j<n; j++)
        {
            cin >> mat[i][j];
        }
    }
}
void calculaMediasBimestais (float mat[][n],int m)
{
    float v[n]{0,0,0,0};
    for (int i=0; i<8; i++)
    {
        for (int j=0; j<n; j++)
        {
            v[j]+=mat[i][j];
        }

    }
    for (int i=0;i<n;i++)
    {
        mat[8][i]=v[i]/8;
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
int main ()
{
    int m=9;
    float mat[m][n];
    lematriz (mat,m);
    calculaMediasBimestais (mat,m);
    imprimematriz (mat,m);
    return 0;
}
