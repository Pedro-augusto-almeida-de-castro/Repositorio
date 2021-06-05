#include <iostream>
using namespace std;
const int n=4;
bool simetrica (int mat[][n],int m)
{
    if (m==n)
    {
        return true;
    }
    else
        return false;
}
int main ()
{
    int m;
    cout << "digite o tamanho da matriz: ";
    cin >> m;
    int mat[m][n];
    if (simetrica(mat,m))
    {
        cout << "matriz simetrica!";
    }
    else
        cout << "matriz nao simetrica!";
    return 0;
}
