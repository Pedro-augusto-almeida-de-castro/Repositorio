#include <iostream>
#include <cmath>
using namespace std;
void sequencian1an2 (int n){
    int n2,q=0,s=0;
    float m;
    cout << "entre com o numero que deseja a sequencia ate n\n";
    cin >> n2;
    for (;n2<=n;n2++){
        cout << n2 << " ";
        s=s+n2;
        q++;                                                                                                                                                                                           ;
    }
    for (;n2>=n;n2--){
        cout << n2 << " ";
        s=s+n2;
        q++;
    }
    cout << endl;
    cout << "Soma: " <<s<< endl;
    cout << "Quantidade: "<<q<<endl;
    m=s/(1.0*q);
    cout << "Media: " << m << endl;
}
void divpor3in5 (int n){
  int i,s=0,q=0;
  float m;
    for (i=1;i<=n;i++){
        if (i%3==0 && i%5!=0){
        cout << i << " ";
        s=s+i;
        q++;
        }                                                                                                                                                                                             ;
    }
    cout << endl;
    cout << "Soma: " <<s<< endl;
    cout << "Quantidade: "<<q<<endl;
    m=s/(1.0*q);
    cout << "Media: " << m << endl;
}
void divpor3i5 (int n){
  int i,s=0,q=0;
  float m;
    for (i=15;i<=n;i+=15){
        cout << i << " ";
        s=s+i;
        q++;                                                                                                                                                                                            ;
    }
    cout << endl;
    cout << "Soma: " <<s<< endl;
    cout << "Quantidade: "<<q<<endl;
    m=s/(1.0*q);
    cout << "Media: " << m << endl;
}
void divpor5 (int n){
  int i,s=0,q=0;
  float m;
    for (i=5;i<=n;i+=5){
        cout << i << " ";
        s=s+i;
        q++                                                                                                                                                                                             ;
    }
    cout << endl;
    cout << "Soma: " <<s<< endl;
    cout << "Quantidade: "<<q<<endl;
    m=s/(1.0*q);
    cout << "Media: " << m << endl;
}
void divpor3 (int n){
  int i,s=0,q=0;
  float m;
    for (i=3;i<=n;i+=3){
        cout << i << " ";
        s=s+i;
        q++;                                                                                                                                                                                             ;
    }
    cout << endl;
    cout << "Soma: " <<s<< endl;
    cout << "Quantidade: "<<q<<endl;
    m=s/(1.0*q);
    cout << "Media: " << m << endl;
}
void imprimiimpar (int n){
  int i,s=0,q=0;
  float m;
    for (i=1;i<=n;i+=2){
        cout << i << " ";
        s=s+i;
        q++;
    }
    cout << endl;
    cout << "Soma: " <<s<< endl;
    cout << "Quantidade: "<<q<<endl;
    m=s/(1.0*q);
    cout << "Media: " << m << endl;
}
void imprimirpares (int n){
      int i,s=0,q=0;
      float m;
    for (i=2;i<=n;i+=2){
        cout << i << " ";
        s=s+i;
        q++;                                                                                                                                                                                             ;
    }
    cout << endl;
    cout << "Soma: " <<s<< endl;
    cout << "Quantidade: "<<q<<endl;
    m=s/(1.0*q);
    cout << "Media: " << m << endl;
}
void positivoanegativo (int n){
  int i,s=0,q=0;
  float m;
    for (i=n;i>=-n;i--){
        cout << i << " ";
        s=s+i;
        q++;                                                                                                                                                                                             ;
    }
    cout << endl;
    cout << "Soma: " <<s<< endl;
    cout << "Quantidade: "<<q<<endl;
    m=s/(1.0*q);
    cout << "Media: " << m << endl;
}
void negativoapositivo (int n){
    int i,q=0,s=0;
    float m;
    for (i=-n;i<=n;i++){
        cout << i << " ";
        s=s+i;
        q++                                                                                                                                                                                             ;
    }
    cout << endl;
    cout << "Soma: " <<s<< endl;
    cout << "Quantidade: "<<q<<endl;
    m=s/(1.0*q);
    cout << "Media: " << m << endl;
}
void seqdecrescente (int n){
    int i,s=0,q=0;
    float m;
    for (i=n;i>=1;i--){
        cout << i << " ";
        s=s+i;
        q++;
    }
    cout << endl;
    cout << "Soma: " <<s<< endl;
    cout << "Quantidade: "<<q<<endl;
    m=s/(1.0*q);
    cout << "Media: " << m << endl;
}
void entrada_dados (int &n){
    cout << "Entra n: ";
    cin >> n;
}
void seqcrescente (int n){
    int i,s=0,q=0;
    float m;
    cout << endl;
    for (i=1;i<=n;i++){
        cout << i << " ";
        s=s+i;
        q++;
    }
    cout << endl;
    cout << "Soma: " <<s<< endl;
    cout << "Quantidade: "<<q<<endl;
    m=s/(1.0*q);
    cout << "Media: " << m << endl;
}
int main (){
    int n;
    char op ;
    while(1){
        cout << "MENU\n";
        cout << "A)Entrar n\n";
        cout << "B)Imprimir de 1 a n\n";
        cout << "C)Imprimir de n a 1\n";
        cout << "D)Imprimir de -n a n\n";
        cout << "E)Imprimir de n a -n\n";
        cout << "F)Imprimir pares ate n\n";
        cout << "G)Imprimir impares ate n\n";
        cout << "H)Imprimir div por 3 ate n\n";
        cout << "I)Imprimir div por 5 ate n\n";
        cout << "J)Div por 3 e por 5 ate n\n";
        cout << "K)Div por 3 e nao por 5 ate n\n";
        cout << "L)Intervalo sequencia n1 a n2\n";
        cin >> op;
        switch (op){
    case 'a':
        entrada_dados(n);
        break;
    case 'b':
        seqcrescente(n);
        break;
    case 'c':
        seqdecrescente(n);
        break;
    case 'd':
        negativoapositivo (n);
        break;
    case 'e':
        positivoanegativo (n);
        break;
    case 'f':
        imprimirpares (n);
        break;
    case 'g':
        imprimiimpar (n);
        break;
    case 'h':
        divpor3 (n);
        break;
    case 'i':
        divpor5 (n);
        break;
    case 'j':
        divpor3i5 (n);
        break;
    case 'k':
        divpor3in5 (n);
        break;
    case 'l':
        sequencian1an2 (n);
        break;
    default:
        return 0;
        }
    }
}
