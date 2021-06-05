#include<iostream>
using namespace std;

int main(){
    char op;
    cout << "a) Diz o Nome" << endl;
    cout << "b) Diz cpf" << endl;
    cin >> op;
    do :
        switch(op){
        case 'a'{
            cout << "Danilo" << endl;
            break;
        }
        case 'b' {
            cout << "1234567" << endl;
            break;
        }
        default {
        cout << "tente a ou b." << endl;
        cin >> op;
        break;
        }
    }while (op > 'b')

