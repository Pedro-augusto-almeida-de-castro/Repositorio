 #include <iostream>
using namespace std;
int main()
{
  int segundos;
  int hora=0;
  int dia=0;
  int minuto=0;
  int segundo=0;
  int aux;
  cout<<"Digite os segundos:";
  cin>>segundos;
  dia=segundos/86400;
  aux=segundos%86400;
  hora=aux/3600;
  aux=segundos%3600;
  minuto=aux/60;
  aux=minuto%60;
  segundo=aux;
  cout<< "Dia: "<<dia<<" Hora: "<<hora<<" Minuto: "<<minuto<<" Segundo: "<<segundo;

}
