#include <iostream>
using namespace std;
int main(){
int dia1, mes1, ano1, dia2, mes2,ano2;
cout << "digite as duas datas que deseja comparar para saber qual e a cronologicamente maior: " << endl;
cin >> dia1 >> mes1 >> ano1 >> dia2 >> mes2 >> ano2;
if (ano1 == ano2){
    if (mes1 > mes2){
        cout << dia1 << "/" << mes1 << "/" << ano1 << " e cronologicamente maior!";
    }
    if (mes2 > mes1){
        cout << dia2 << "/" << mes2 << "/" << ano2 << " e cronologicamente maior!";
    }
    if (mes1 == mes2){
            if (dia1 > dia2){
        cout << dia1 << "/" << mes1 << "/" << ano1 << " e cronologicamente maior!";
    }
    if (dia2 > dia1){
        cout << dia2 << "/" << mes2 << "/" << ano2 << " e cronologicamente maior!";
    }
    }
    if (dia1 == dia2){
        cout << "as datas sao iguais";
    }
}
if (ano1 > ano2){
    cout << dia1 << "/" << mes1 << "/" << ano1 << " e cronologicamente maior!";
}
if (ano2 > ano1){
    cout << dia2 << "/" << mes2 << "/" << ano2 << " e cronologicamente maior!";
}
}
