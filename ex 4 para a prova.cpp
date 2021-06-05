#include <iostream>
#include <cmath>
using namespace std;
double medina (int n){
    int v[n],p=0,i=0;
    double m;
    if (n%2==0){
        p=(n/2.0)-1.0;
        i=(n/2.0);
        cout << "insira os numeros: \n";
        for (int h=0;h<n;h++){
            cin >> v[h];
        }
        m=(v[p]+v[i])/2.0;
        return m;
    }else if (n%2!=0){
    p=(n/2.0);
     cout << "insira os numeros: \n";
        for (int h=0;h<n;h++){
            cin >> v[h];
        }
        m=(v[p]);
        return m;
    }
}
int main(){
    int n;
    float f;
    cout << "digite o tamanho do conjunto\n";
    cin >> n;
    cout << "a mediana e: "<< medina(n);
}
