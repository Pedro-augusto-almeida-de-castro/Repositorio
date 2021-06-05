#include <iostream>
#include <cmath>
using namespace std;
void tabuada (float a){
    int i,d;
    cout << "o resultado do numero escolhido e:\n";
    for (d=1;d<=10;d++){
        cout<< endl;
    for (i=0;i<=10;i++){
        a=d*i;
        cout << a << " ";
        }
    }
}
int main (){
    int a;
    tabuada (a);
}
