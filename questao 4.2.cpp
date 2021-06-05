#include <iostream>
#include<math.h>
using namespace std;
converte (int n){
int dia,hora,minutos,segundos;
dia=n/86400;
hora=(n-dia*86400)/3600;
minutos=((n-dia*86400)-(hora*3600))/60;
segundos=((n-dia*86400)-(hora*3600)-(minutos*60));
cout << dia << " dia(s) " << hora <<" hora(s) "
<<minutos << " minuto(s) " <<segundos << " segundo(s) "
<< endl;
}
int main(){
int n;
char op;
do{
    cout << "entre com o valor que deseja converter em segundos: ";
    cin >> n;
    converte (n);
    cout << "deseja continuar convertendo?(s/n) ";
    cin >> op;
}while(op=='s'|| op=='S');
}
