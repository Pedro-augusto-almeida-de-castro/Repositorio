#include<iostream>
#include <cstring>
#include <cmath>
#include <stack>
#include <algorithm>
using namespace std;


stack<string> melzin;

int main()
{
    int s;

    char c;
    string aux,aux2;

    int resp;

    while (cin >> s)
    {
        resp = 0;
        melzin.push("FACE");
        for (int i = 0 ; i < s ; ++i)
        {
            aux.clear();
            for (int j = 0 ; j < 4  ; ++j)
            {
                cin >> c;
                aux.push_back(c);
            }
            aux2 = aux;
            reverse(aux2.begin(), aux2.end());

            if (melzin.top() == aux2)
            {
                resp++;
                melzin.pop();
                if (melzin.size() == 0) melzin.push("FACE");
            }
            else
                melzin.push(aux);
        }
        cout << resp << '\n';
        while (!melzin.empty()) melzin.pop();
    }
}
