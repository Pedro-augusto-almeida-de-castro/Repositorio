#include <iostream>
#include <cmath>
using namespace std;
int main() {
float c1, c2 , hipotenusa;
float aux;
cout << "digite os 2 catetos" << endl;
cin >> c1 >> c2;
aux = pow( c1 , 2) + pow( c2, 2);
hipotenusa= sqrt(aux);
cout<<" o valor da hipotenusa e:" <<
    hipotenusa;
    return 0;
}
