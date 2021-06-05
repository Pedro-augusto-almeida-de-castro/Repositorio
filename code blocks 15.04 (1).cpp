#include<iostream>
using namespace std;
int main ()
{
    float idade;
    cout << "entre com uma idade: ";
    cin >> idade;
    if (idade == 0){
        cout << "idade invalida: igual a zero";
    }
    else if (idade < 0){
        cout << "idade invalida: negativa!";
    }
    else{
        cout << "idade valida: positiva";
    }
    return 0;
}
