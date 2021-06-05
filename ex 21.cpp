#include <iostream>
#include <math.h>
using namespace std;
int main(){
    long double soma=0;
    int i, j;
    for(i=1,j=50;i>=50;i++,j--){
        soma+=pow(2,i)/j;
    }
}
