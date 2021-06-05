#include <iostream>
using namespace std;
int main(){
float n1, n2, n3, n4 , n5, media;
cout << "Digite as 5 notas";
cin >> n1 >> n2 >> n3 >> n4 >> n5;
media = ( n1 + n2 + n3+ n4+ n5)/5;
cout << " A media das notas e: " <<media <<endl;
if ( n1> 7 || n2 > 7 || n3> 7 || n4> 7 || n5> 7);
    float soma=0, div=0;
    if (n1>7);
    {
        soma=n1;
        div++;
    }
     if (n2>7);
    {
        soma=n2;
        div++;
    }
     if (n3>7);
    {
        soma=n3;
        div++;
    }
     if (n4>7);
    {
        soma=n4;
        div++;
    }
     if (n5>7);
    {
        soma=n5;
        div++;
    }
    {
    media=soma/div;
    cout << "media dos alunos maiores que 7 foi:" << media;
 }
 return 0;}
