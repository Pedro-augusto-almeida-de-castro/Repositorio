#include <iostream>
using namespace std;
int entraidade(int idade){
    do {
    cout << "entre com a idade: " << endl;
        cin >> idade;
}while (idade>0 && idade <150);
}
int main (){
int idade;
entraidade (idade);
return 0;
}
