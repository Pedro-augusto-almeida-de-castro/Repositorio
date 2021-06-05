//Desafio 1
//Pedro Augusto Almeida de Castro
//RA:2019010408
#include <iostream>
using namespace std;
int main (){
string produto1,produto2,produto3;
float valor1,valor2,valor3,peso1,peso2,peso3,precoquilo1,precoquilo2,precoquilo3;
cout << "entre respectivamente com o nome do produto seu valor e seu peso (em gramas): " << endl;
cin >> produto1 >> valor1 >> peso1 >> produto2 >> valor2 >> peso2 >> produto3 >> valor3 >> peso3;
if (produto1 != produto2 && produto2 != produto3 && produto1 != produto3){
precoquilo1 = valor1/peso1;
precoquilo2 = valor2/peso2;
precoquilo3 = valor3/peso3;
if (precoquilo1 != precoquilo2 && precoquilo2 != precoquilo3 && precoquilo3 != precoquilo1 ){
if (precoquilo3 > precoquilo1){
        {
            if (precoquilo1 > precoquilo2){
                cout << "a ordem decrescente e:" << endl << produto3 << " " << produto1 << " " << produto2;
            }
            else if (precoquilo2 < precoquilo3){
                cout << "a ordem decrescente e:" << endl << produto3 << " " << produto2 << " " <<produto1;
            }
        }
}
if (precoquilo1 > precoquilo2){
    if (precoquilo2 > precoquilo3){
        cout << "a ordem decrescente e:" << endl << produto1 << " " << produto2 << " " << produto3;
    }
    else if (precoquilo3 < precoquilo1){
        cout << "a ordem decrescente e:" << endl << produto1 << " " <<produto3 << " " << produto2;
    }
}
if (precoquilo1 < precoquilo2){
    if (precoquilo3 < precoquilo1){
        cout << "a ordem decrescente e:" << endl << produto2 << " " << produto1 << " " << produto3;
    }
    else if (precoquilo3 < precoquilo2){
        cout << "a ordem decrescente e:" << endl << produto2 << " " << produto3 << " " << produto1;
    }
}
}
else
    cout << "entrada invalida";
}
else
    cout << "entrada invalida";
return 0;
}
