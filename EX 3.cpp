 #include <iostream>
using namespace std;
int main()
{
    int a1;
    int an;
    int n;
    cout<<"Soma de PA, digite a1 e digite o an:";
    cin>>a1;
    cin>>an;
    n=an-a1;
    double pa = ((a1+an)*(n+1))/2;
    cout<<"Soma da PA e "<<pa;
    }
