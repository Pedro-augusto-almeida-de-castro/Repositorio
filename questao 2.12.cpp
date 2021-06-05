#include <iostream>
using namespace std;
const int n=5;
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
void calcularota (int mat[][n],int m)
{
    int soma=0,aux1,aux2,aux3,aux4;
    cout << "digite as quatro cidade qual voce quer calcular a rota: ";
    cin >> aux1 >> aux2 >> aux3 >> aux4;
    soma+=mat[aux1-1][aux2-1];
    soma+=mat[aux2-1][aux3-1];
    soma+=mat[aux3-1][aux4-1];
    cout << "o total da rota e: " << soma;
}
int main ()
{
    int m=5;
    int mat[m][n];
        ledistancia(mat,m);
        imprimematriz (mat,m);
        calcularota (mat,m);
    return 0;
}
