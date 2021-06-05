#include <iostream>
using namespace std;
int main()
    {
    int dia, mes;
    char sexo;
    cout<< "digite os valores de dia e mes:" <<endl;
    cin >> dia >> mes >> sexo;
    if (dia==8 && mes==3 && (sexo=='f'|| sexo=='F') ){
    cout<<"parabens";}
    return 0; }
