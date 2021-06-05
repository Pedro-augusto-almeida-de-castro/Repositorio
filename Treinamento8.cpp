#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


void preencheMatriz(int v[][20]){
    for(int i=0;i<20;i++){
        for( int j=0;j<20;j++){
            v[i][j]=1+rand()%100;
            //cout<<v[i][j]<<" ";
        }
        //cout<<"\n";
    }
}



int main(){
    srand(time(NULL));
    int minas[20][20];
    int soma=0;
    int i=0;
    int j=0;
    int cont=0;
    int aux=0;
    int k=1;
    int contSomas=0;
    int contColunas=0;
    preencheMatriz(minas);

    //Achar o maior consumo em linhas
    int contLinhas=0;
    while(contLinhas<20){
        soma+=minas[i][j];
        cont++;
        j++;

        if(cont==4){
            if(soma>aux){
                aux=soma;
            }
            cont=0;
            j=k;
            k++;
            contSomas++;
        }
        if(contSomas==17){
            i++;
            contSomas=0;
            contLinhas++;
        }
        soma=0;
    }
    k=1;
    i=0;
    j=0;
    contSomas=0;
    cont=0;
    soma=0;

    //Achar o maior consumo em Colunas

    while(contColunas<20){
        soma+=minas[i][j];
        cont++;
        i++;
        if(cont==4){
            if(soma>aux){
            aux=soma;
            }
            cont=0;
            i=k;
            k++;
            contSomas++;
        }
        if(contSomas==17){
            j++;
            contSomas=0;
            contColunas++;
        }
        soma=0;
    }

    //Encontra diagonal principal

    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            if(j==i){
                soma+=minas[i][j];
                cont++;
            }
            if(cont==4){
                if(soma>aux){
                    aux=soma;
                    j=k-1;
                }
                cont=0;
            }
        }
    }
    //diagonal secundaria
    soma=0;
    cont=0;
    for(int i=0;i<20;i++){
        for(int j=19;j>=0;j--){
            if((j+i)==19){
                soma+=minas[i][j];
                cont++;
            }
            if(cont==4){
                if(soma>aux){
                    aux=soma;
                }
                cont=0;
            }
        }
    }
    soma=0;
    cont=0;
    // diagonais  < to >
    for(int i=0;i<17;i++){
        for(int j=1;j<17;j++){
            if(j==(i+1)){
                soma+=minas[i][j];
                cont++;
            }
            if(cont==4){
                if(soma>aux){
                    aux=soma;
                }
                cont=0;
            }
        }
    }
    soma=0;
    cont=0;
    // diagonais > to <

    for(int j=18;j>2;j--){
        for(int i=0;i<18;i++){
            if((i+j)==18){
                soma+=minas[i][j];
                cont++;
            }
            if(soma>aux){
                aux=soma;
            }
        }
    }
    cout<<aux;

}
