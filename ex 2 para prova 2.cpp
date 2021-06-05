#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int idade[6],q=0;
    double peso [6],s=0,m;
    cout << "insira a idade das pessoas\n";
    for (int h=0;h<=6;h++){
    cin >> idade[h];}
    for (int h=0;h<=6;h++){
        s=s+idade[h];
    }
    cout << "insira o peso em kg\n";
    for(int h=0;h<=6;h++){
        cin>>peso[h];
    }
    for (int h=0;h<=6;h++){
        if (peso[h]>90){
            q++;
        }
    }
    cout << "o total de pessoas que possuem peso acima de 90kg sao:\n"<<q<<endl;
    m=s/7;
    cout << "a media da idade das pessoas e: "<< m << endl;
}
