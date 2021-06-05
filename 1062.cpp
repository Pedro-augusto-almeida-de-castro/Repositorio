#include <iostream>
#include <stack>
using namespace std;
#define p(a) cin >>a
#define p1(i, a, n) for(int i = (a); i < (n); i++)
#define p2(i, a, n) for(int i = (a); i <= (n); i++)
typedef stack<int> si;
int vet[1005];
int main()
{
    int i, aux, n, top;
    while(p(n) && n)
    {
        while(p(vet[0]) && vet[0])
        {
            p1(i, 1, n)
            p(vet[i]);
            si p;
            aux = 0;
            p2(i, 1, n)
            {
                p.push(i);
                while(p.size() > 0 && vet[aux] == p.top())
                {
                    aux++;
                    p.pop();
                }
            }
            if (!p.empty())
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
        cout << endl;
    }
    return 0;
}
