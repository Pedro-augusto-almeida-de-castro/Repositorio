#include <iostream>
using namespace std;
void montavendas (int mt[3][12])
{
    cout << "digite as vendas: " << endl;
    for (int i=0;i<3;i++)
    {
        cout << "vendedor " << i+1 <<":" << endl;
        for (int j=0;j<12;j++)
        {
            cin >> mt[i][j];
        }
    }
}
void imprimematriz (int mt[3][12])
{
    cout << "matriz de vendas:" << endl;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<12;j++)
        {
            cout << mt[i][j]<<" ";
        }
        cout << endl;
    }
    cout << endl;
}
void totalvendastrimestre (int mt[3][12])
{
    int aux1=0,aux2=0,aux3=0,aux4=0;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<12;j++)
        {
            if (j<3)
            {
                aux1+=mt[i][j];
            }
            else if (j>=3 && j<6)
            {
                aux2+=mt[i][j];
            }
            else if (j>=6 && j<9)
            {
                aux3+=mt[i][j];
            }
            else if (j>=9 && j<12)
            {
                aux4+=mt[i][j];
            }
        }
    }
    cout << "o total de venda em cada semestre e respectivamente: " << aux1 << ", " << aux2 << ", " << aux3 << " e " << aux4;
    cout << endl;
}
void totalvendasvendedor (int mt[3][12])
{
    int v[3],soma;
    for (int i=0;i<3;i++)
    {
        soma=0;
        for (int j=0;j<12;j++)
        {
            soma+=mt[i][j];
        }
        v[i]=soma;
    }
    cout << "o total de venda de cada vendedor e respectivamente: ";
    for (int i=0;i<3;i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void totaldevendaloja (int mt[3][12])
{
    int total=0,soma,media,v[12];
    for (int i=0;i<12;i++)
    {
        soma=0;
        for (int j=0;j<3;j++)
        {
            soma+=mt[j][i];
            total+=mt[j][i];
        }
        media=soma/3;
        v[i]=media;
    }
    cout << "o total de vendas foi: " << total << endl;
    cout << "a media de vendas por mes foi respectivamente: ";
    for (int i=0;i<12;i++)
    {
        cout << v[i] << " ";
    }
}
int main ()
{
    int mt[3][12];
    montavendas (mt);
    imprimematriz (mt);
    totalvendastrimestre (mt);
    totalvendasvendedor (mt);
    totaldevendaloja (mt);
    return 0;
}
