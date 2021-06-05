#include <iostream>

using namespace std;

int main()
{
    int q;
    double resto,dividendo,divisor;

    cout << "De o valor do dividendo e do divisor(respectivamente)" << endl;

    cin >> dividendo >> divisor;

    resto = dividendo%divisor;

    q = dividendo/divisor;

    cout << "Quociente=" << q <<  endl << "Resto=" << resto << endl;

    return 0;
}
