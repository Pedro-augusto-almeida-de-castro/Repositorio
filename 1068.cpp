#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
int main()
{
    int aux;
    string melzin;
    while(getline(cin,melzin))
    {
        {
            aux = melzin.length();
            stack<char> pilha;

            for (int i = 0; i < aux; ++i)
            {
                if(melzin[i] == '(')
                    pilha.push(i);
                if(melzin[i] == ')')
                {
                    if(!pilha.empty())
                    {
                        pilha.pop();
                    }
                    else
                    {
                        pilha.push(i);
                    }
                }

            }

            if(pilha.empty())
            {
                cout << "correct" << endl;
            }
            else
            {
                cout << "incorrect" << endl;
            }
        }
    }
 return 0;
}
