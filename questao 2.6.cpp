#include<iostream>
#include<string>
using namespace std;
void entrada(string &fr)
{
    cout<<"digite uma frase para que seja contadas sua quantidade de letra e seja imprimida na vertical: " << endl;
    getline(cin, fr);
}
void vert(string &fr)
{
    for(int i=0; i<=fr.size()-1; i++)
    {
        cout<<" "<<fr[i]<<endl;
    }
}
int ltr(string &frase, char op)
{
    int cont=0;
    for(int i=0; i<=frase.size()-1; i++)
    {
        if(frase[i]==op)
        {
            cont++;
        }
    }
    return cont;
}
char ult(string &fr)
{
    char ult;
    for(int i=0; i<=fr.size()-1; i++)
    {
        ult=fr[i];
    }
    return ult;
}
int main()
{
    string fr;
    char op;
    entrada(fr);
    vert(fr);
    cout<<"digite uma letra para saber quantas vezes ela se repete na frase: " << endl;
    cin>>op;
    cout<<"a letra "<<op<<" se repete "<<ltr(fr, op)<<" vezes"<<endl;
    cout<<"a ultima letra foi: "<<ult(fr);
    return 0;
}

