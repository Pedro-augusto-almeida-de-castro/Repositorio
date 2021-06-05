#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void entrada (float mat[100][100])
{
    srand(time(NULL));
    for (int i=0;i<100;i++)
    {
        for (int j=0;j<100;j++)
        {
            mat[i][j] =rand()%100;
        }
    }
}
void imprime (float mat [100][100])
{
    cout << "matriz montada: " << endl;
    for (int i=0;i<100;i++)
    {
        for (int j=0;j<100;j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
void somadiagonalprincipal (float mat [100][100])
{
    float soma=0;
    for (int i=0;i<100;i++)
    {
        for (int j=0;j<100;j++)
        {
            if (j==i)
            soma+=mat[i][j];
        }
    }
    cout << "\na soma da diagonal principal e: " << soma;
}
int main ()
{
    float mat[100][100];
    entrada (mat);
    imprime (mat);
    somadiagonalprincipal (mat);
    return 0;
}
