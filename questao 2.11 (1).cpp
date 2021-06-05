#include <iostream>
using namespace std;
const int n=4;
bool quadrada (int mat[][n],int m)
{
    if (m==n)
    {
        return true;
    }
    else
        return false;
}
void ledistancia (int mat[][n],int m)
{
    cout << "digite a distancia entre as cidades: " << endl;
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i==j)
            {
                mat[i][j]=0;
            }
            else
            {
            cout << "cidade " << i+1 << " e " << j+1 << ": ";
            cin >> mat[i][j];
            cout << endl;
            }
        }
        cout << endl;
    }
}
void imprimematriz (int mat[][n],int m)
{
    cout << "matriz montada: " << endl;
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout << mat[i][j] <<" ";
        }
        cout << endl;
    }
}
int main ()
{
    int m;
    cout << "digite o tamanho da matriz: ";
    cin >> m;
    int mat[m][n];
    if (quadrada(mat,m))
    {
        ledistancia(mat,m);
        imprimematriz (mat,m);
    }
    else
        cout << "matriz nao quadrada!";
    return 0;
}
