#include <iostream>
#include <cmath>
using namespace std;
void entran (int &n){
    cout << "entre com n: ";
    cin >> n;
}
void impdiv (int n){
    int i;
    cout << "os divisores de:\n";
    for (i=1;i<=n;i++){
        if (n%i==0){
         cout<< i <<" ";
        }
    }
    cout << endl;
}
int primooun (int n){
    int q=0,i,s;
    for (i=1;i<n/2;i++){
        if (n%i==0){
            q++;
        }
    }
     if (q==1){
        return 1;
    }else{
        return 0;
    }
}
void imprimeprimos (int n){
    int i,n1,n2,q=0;
    float s=0;
    float m;
    cout << "entre com n1 e n2\n";
    cin >> n1 >> n2;
    for (i=n1;i<=n2;i++){
        if (primooun(i)){
            cout << i << " ";
            q+=i;
            s++;
        }
    }
    m=q/s;
    cout << "\no intervalo entre "<<n1 << " e "<<n2<<  " tem "  << s << " numeros primos entre eles\n";
    cout << "a soma entre eles e: " << q << "\n e sua media e " << m << endl;
}
int main (){
    int n;
    char op;
    while (1){
        cout << "MENU:\n";
        cout << "A)Entran n:\n";
        cout << "B)Imprime divisores de n\n";
        cout << "C)Diz se nao e primo\n";
        cout << "D)Imprime primos entre n1,n2\n";
        cin >> op;
        switch (op){
            case 'a':
                entran(n);
                break;
            case 'b':
                impdiv (n);
                break;
            case 'c':
                if (primooun(n)){
                    cout << "e primo\n";
                }else{
                 cout << "nao e primo\n";
                 }
                break;
            case 'd':
                imprimeprimos(n);
                break;
            default:
                cout << "opcao invalida\n";
                break;
        }
    }
}
