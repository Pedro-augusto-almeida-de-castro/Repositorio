#include <iostream>

int main(){
    double horas, preco_total;
    cout<<"Digite o tempo em horas: ";
    cin>>horas;
    if(horas<=1){
        preco_total=2*horas;
    }
    if(horas<=2 && horas>1){
        preco_total= 2+(horas-1)*1.5;
    }
    if(horas>2){
        preco_total=3.5+(horas-2);
    }
     cout<<"\n\n\n"<<preco_total;
}
