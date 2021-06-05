#include<iostream>

using namespace std;

int main(){
    char op;
    while (1){
        cout << "MENU" <<endl;
        cout << "a) Imprimir nome completo"<<endl;
        cout << "b) Imprimir cpd"<<endl;
        cout << "c) Imprimir e-mail"<<endl;
        cout << "d) Iprimir RA"<<endl;
        cin >> op;
        op = tolower(op);//toupper()
        switch(op){
            case 'a':
                cout << "Pedro Paulo" << endl;
                break;
            case 'b':
                cout << "123254321" << endl;
                break;
            case 'c':
                cout << "epdoru@gmail.com" << endl;
                break;
            case 'd':
                cout << "29292929" << endl;
                break;
            default:
                cout << "vc errou otario" << endl;
            return 0;
        }
    }
}
