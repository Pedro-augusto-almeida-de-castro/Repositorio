#include <iostream>
using namespace std;
int main() {
    int n1, n2, n3;
    cout << "Entre com um numero inteiro: ";
    cin >> n1;
    n2 = n1/5;
    n3 = n2 % 5 * 7;
    cout << "\n" << n2 << " " << n3 << " " << (n2 != n3 + 21) << endl;
    return 0;
    }
