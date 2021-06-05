#include<iostream>
#include <cmath>
using namespace std;
void entrada_de_dados (int &A,int &B,int &C){
    cout << "entre com os coeficientes: ";
    cin >> A >> B >> C;
}
void verifica_concavidade (int A){
}
int delta (int A, int B, int C){
    int D;
    D=B*B-4*A*C;
    return(D);
}
void quantidade_raizes (int A,int B,int C){
    int D;
    D=delta(A,B,C);
    if (D>0){
        cout<< "duas raizes reais " << endl;
    }else if (D==0){
        cout<< "uma raiz real" << endl;
    }else {
        cout << "nenhuma raiz reais"<< endl;
    }
}
void imprime_y (int A,int B, int C){
    float y;
    int D;
    D=delta(A,B,C);
    y=(-D)/(4.0*A);
    cout << "o y vertice e:"<<y<< endl;
}
void imprime_x (int A,int B, int C){
    int X;
    X=((-B)/(2.0*A));
    cout << "o x do vertice e " << X <<endl;
}
void imprime_raizes (int A, int B, int C){
    int D;
    float r1,r2;
    D=delta(A,B,C);
    if (D>=0){
        r1=(-B-sqrt(D))/(2.0*A);
        r2= (-B+sqrt(D))/(2.0*A);
        cout << "Raiz 1:" << r1 << endl;
        cout << "Raiz 2:" << r2 <<endl;
    }else{
        cout << "nao tem raizes reais"<< endl;
    }
}
int main(){
    char op;
    int A,B,C,D;
    while (1){
        cout << "MENU" <<endl;
        cout << "a) Entra coeficientes 2o grau"<<endl;
        cout << "b) Imprime concavidade"<<endl;
        cout << "c) Imprime delta"<<endl;
        cout << "d) Imprime quantidade de raizes"<<endl;
        cout << "e) Imprime raizes reais"<<endl;
        cout << "f) Imprime X do vertice"<< endl;
        cout << "g) Imprime Y do vertice"<< endl;
        cout << "h) intersecao reta ax+b com parabola"<<endl;
        cout << "i) Intersecao parabola Ex^2+Fx+G"<<endl;
        cout << "j) calcula reta tangente em x,y"<<endl;
        cin >> op;
        op = tolower(op);//toupper()
        switch(op){
            case 'a':
                entrada_de_dados(A,B,C);
                //cout << "A:" << A << "\nB:" << B << "\nC:" << C << endl;
                break;
            case 'b':
                verifica_concavidade (A);
                if (A>0){
                    cout << "Concavidade concava"<< endl;
                }else if (A<0){
                    cout << "Concavidade convexa"<<endl;
                }else {
                    cout << "NAO DEU CERTO NAO E UMA FUNCAO DE 2O GRAU"<< endl;
                    }
                break;
            case 'c':
                D = delta(A,B,C);
                cout<< "resultado de delta e:" << D <<endl;
                break;
            case 'd':
                quantidade_raizes (A,B,C);
                break;
            case 'e':
                imprime_raizes (A,B,C);
                break;
            case 'f':
                imprime_x (A,B,C);
                break;
            case 'g':
                imprime_y (A,B,C);
                break;
            case 'h':
                break;
            default:
                cout << "vc errou otario" << endl;
            return 0;
        }
    }
}
