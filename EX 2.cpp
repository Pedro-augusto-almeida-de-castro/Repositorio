 #include <iostream>
using namespace std;
int main()
{
    int placa;
    cout<<"Digite a placa do veiculo:";
    cin>>placa;
    cout<<"Unidade: "<<placa%10<<"\n";
    placa=placa/10;
    cout<<"Dezena: "<<placa%10<<"\n";
    placa=placa/10;
    cout<<"Centena: "<<placa%10<<"\n";
    placa=placa/10;
    cout<<"Milhar: "<<placa;
}
