#include <iostream>

using namespace std;
int verificaDia(int dia, int mes, int ano){
    if((mes==2 && dia>28 && ano%4!=0) || (mes==2 && dia>29 && ano%4==0) ){
        return 1;
    }else if(dia>30 && (mes==4 || mes == 6 || mes==9 ||mes == 11)){
        return 1;
    }else if(dia>31 && (mes == 1 || mes==3 || mes==5 || mes == 7 || mes == 8 || mes==10 ||mes == 12)){
        return 1;
    }else{
        return 0;
    }
}
int verificaMes(int mes){
    if(mes>12){
        return 1;
    }else{
        return 0;
    }
}
int main()
{
    int dia, mes, ano;
    cout<<"Digite a data de hoje: (NUMBERS ONLY)";
    cin>>dia>>mes>>ano;
    cout<<dia<<"/"<<mes<<"/"<<ano;
    cout<<"\n\n";
    while(verificaMes(mes)){
        cout<<"Mes invalido tente novamente: ";
        cin>>mes;
    }
    while(verificaDia(dia,mes,ano)){
        cout<<"Dia invalido tente novamente: ";
        cin>>dia;
    }
    if(mes==2){
        if(ano%4==0){
             if(dia==29){
                dia=1;
                mes=3;
             }else{
                dia=dia+1;
             }
        }else{
            if(dia==28){
                dia=1;
                mes=3;
            }else{
                dia=dia+1;
            }
        }
    }else if(mes%2==0 && mes!=2 && mes<7){
        if(dia==30){
            mes=mes+1;
            dia=1;
        }else{
            dia=dia+1;
        }
    }else if(mes%2==1 && mes<7){
        if(dia==31){
            dia=1;
            mes=mes+1;
        }else{
            dia=dia+1;
        }
    }else if(mes%2==0 && mes!=2 && mes>7 && mes!=12){
        if(dia==31){
            mes=mes+1;
            dia=1;
        }else{
            dia=dia+1;
        }
    }else if(mes%2==1 && mes>7){
        if(dia==30){
            dia=1;
            mes=mes+1;
        }else{
            dia=dia+1;
        }
    }else{
        if(dia==31){
            dia=1;
            mes=1;
            ano=ano+1;
        }
    }
    cout<<"Amanha sera: "<<dia<<"/"<<mes<<"/"<<ano<<"\n\n\n\n\n\n\n";
}
