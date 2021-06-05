#include <iostream>
#include<math.h>
using namespace std;
somatorio (int n,int a, float &soma){
for (int i=1;i<=n;i++){
    soma=soma+(1/pow(a,i));
}
}
int main(){
int n,a;
cout << "entre com o valor que a somatoria vai percorrer ate ele: ";
cin >> n;
cout << "entre com o valor que vai ser utilizado na formula 1/a^i: ";
cin >> a;
float soma=0;
somatorio(n,a,soma);
cout << "a soma e: " << soma;
}
