#include <iostream>
using namespace std;
const int n=4;
int tamanholinhas (int &m)
{
    cout << "digite o tamanho da linhas da matriz: ";
    cin >> m;
}
void lematriz (int mat[][n],int m)
{
    cout << "digite os valores para serem colocados na matriz: " << endl;
    for (int i=0;i<m;i++)
    {
        cout << "linha " << i+1 << ": "<< endl;
        for (int j=0;j<n;j++)
        {
            cout << "coluna " << j+1 <<": ";
            cin >> mat[i][j];
            cout << endl;
        }
    }
}
void imprimematriz (int mat[][n],int m)
{
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
int main ()
{
    int m;
    tamanholinhas(m);
    int mat [m][n];
    lematriz(mat,m);
    imprimematriz (mat,m);
    return 0;
}
