#include <iostream>
#include <stack>
#define p(a) cin >> a
#define p1(i, a, n) for(int i = (a); i < (n); i++)
using namespace std;
typedef stack<int> pilha;
char entra[27],sai [27];
int main(int argc, char const *argv[])
{
    int n, aux;
    while(cin>> n && n)
    {
        {
            p1(i, 0, n)
            cin >> entra[i];

            p1(i, 0, n)
            cin >> sai[i];

            pilha s;
            aux = 0;

            p1(i, 0, n)
            {
                s.push(entra[i]);
                cout << "I";

                while (s.size() > 0 && sai[aux] == s.top())
                {
                    aux++;
                    s.pop();
                    cout << "R";
                }
            }

            if (s.size() != 0)
                cout << " Impossible";

            cout << '\n';
        }
    }
    return 0;
}
