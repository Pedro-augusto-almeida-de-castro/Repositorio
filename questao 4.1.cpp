#include <iostream>
#include<math.h>
using namespace std;
int main(){
int n,somapar=0,somaimpar=0,quantpar=0,quantimpar=0;
cout << "entre com n: ";
cin >> n;
for (int i=1;n>=1;n--){
    if(n%2==0){
        somapar=somapar+n;
        quantpar++;
    }
    else if(n%2==1){
        somaimpar=somaimpar+n;
        quantimpar++;
    }
}
cout << "soma par: " << somapar << " soma impar: " << somaimpar << " quantidade par: " << quantpar << " quantidade impar: " << quantimpar;
}
