#include<iostream>
using namespace std;
int main(){
setlocale(LC_ALL, "Portuguese");
int n,aux=INT_MIN;
do{
    cout << "entre com um numero: ";
    cin >> n;
    if (n!=0 && n>aux){
        aux=n;
        }
}while(n!=0);
cout << "o menor numero é: " << aux;
return 0;
}
