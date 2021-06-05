#include <iostream>

using namespace std;

int main()
{
    int horas, preco_total;
    cout << "Digite o numero de horas";
    cin >> horas;
    if(horas<=1){
        preco_total=2*horas;
    }
    if(horas<=2 && horas>1){
        preco_total= 2+(horas-1)*1,5;
    }
    if(horas>2){
        preco_total= 3,5+(horas-2);
    }
    cout<<"\n"<<preco_total;
}
