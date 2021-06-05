#include <iostream>
#include<math.h>
using namespace std;
count_div(int n){
int i=1,contador=0;
do{
    if(n%i==0){
        contador++;
    }
    i++;
}while(i<=n);
cout << "a quantidade de divisores e: " << contador << endl;
}
int main(){
int n;
char op;
do{
    cout << "entre com o numero que deseja saber a quantidade de divisores: ";
    cin >> n;
    count_div (n);
    cout << "deseja continuar convertendo?(s/n) ";
    cin >> op;
}while(op=='s'|| op=='S');
}
