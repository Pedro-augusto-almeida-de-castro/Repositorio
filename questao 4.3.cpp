#include <iostream>
#include<math.h>
using namespace std;
int main(){
int n,sair=0;
do{
 cout << "digite um numero: ";
 cin >> n;
 if (n>=3 && n<=99 && n%3==0){
    sair=1;
 }
 else
    sair=0;
}while(sair==0);
cout << "entrada valida com sucesso: " << n;
}
