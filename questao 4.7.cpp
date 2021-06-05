#include <iostream>
#include<math.h>
using namespace std;
int main(){
int n;
cout << "entre com o numero: ";
cin >> n;
if (n>=2 && n<=10){
    for (int i=1;i<=n;){
        for (int o=n;o>=i;o--){
            cout << n;
        }
    cout << endl;
    n=n-i;
    }
}
}
