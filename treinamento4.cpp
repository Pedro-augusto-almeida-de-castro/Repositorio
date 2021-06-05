#include <iostream>

using namespace std;

void ordena(int v[],int n);

void concat(int v1[], int v2[], int m, int n, int v[]){
    int j=0;
    cout<<"V1 ";
    for(int i=0;i<n;i++){
        v[i]=v1[i];
        cout<<v[i]<<" ";
    }
    cout<<"\nV2 ";
    for(int i=n;i<m+n;i++){
        v[i]=v2[j];
        j++;
        cout<<v[i]<<" ";

    }
    cout<<"\n-- Concatenado --";
    for(int i = 0; i<n+m;i++){
        cout << " " << v[i];
    }
    ordena(v,m+n);
}

void ordena(int v[], int n){
    int aux;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(v[i]>v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
    cout << "\nOrdenado: " << endl;
    for(int i = 0; i < n;i++)
    {
        cout << " " << v[i];
    }
}

int main(){
    int n, m;
    cin>>n>>m;
    int seq1[n];
    int seq2[m];
    int v[m+n];
    for(int i = 0;i<n;i++){
        seq1[i]=i;
    }
    for(int i=0;i<m;i++){
        seq2[i]=2-i;
    }
    concat(seq1, seq2, m, n, v);

    return 0;
}
