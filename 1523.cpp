#include<iostream>
#include <cstring>
#include <cmath>
#include <stack>
#define melzin(a, b) cin >> a >> b
#define ZERO(x) memset(x, 0, sizeof(x))
using namespace std;
typedef stack<int> p1;
p1 p;
int entra[1000010], sai[1000010], k;
int main(int argc, char const *argv[])
{
    int n, c, s;

    while(melzin(n, k) && n)
    {
        int aux = 0;
        ZERO(entra);
        ZERO(sai);

        for(int i = 1; i <= n; i++)
        {
            melzin(c, s);
            entra[c] = i;
            sai[s] = i;
            aux = max(aux, s+1);
        }

        while(!p.empty())
            p.pop();

        int i;

        for(i = 1; i < aux; i++)
        {
            if(sai[i])
            {
                if(p.empty() || p.top() != sai[i]) break;
                else p.pop();
            }

            if(entra[i])
            {
                if((int)p.size() < k) p.push(entra[i]);
                else break;
            }
        }
        cout << (i==aux ? "Sim\n" : "Nao\n");
    }
    return 0;
}
