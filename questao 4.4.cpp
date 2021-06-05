#include <iostream>
#include<math.h>
using namespace std;
int main(){
int a,b,resto=0,quociente=0,sair=0;
cout << "entre com o dividendo e um divisor: ";
cin >> a >> b;
if (a%2!=0){
do{
     resto=a-b;
     quociente++;
     a=a-b;
}while(a>b);
}
else if (a%2==0){
    do{
     resto=a-b;
     quociente++;
     a=a-b;
}while(a!=0);
}
cout << "o quociente da divisao e: " << quociente
<< " o resto da divisao e: " << resto;
}
