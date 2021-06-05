#include <iostream>
using namespace std;
float imposto(float s, float p);
float salarioLiquido(float s, float v);
int main()
{
float sal, // salario bruto
p_imp, // percentual de imposto
v_imp, // valor em reais do imposto
sal_liq; // salario líquido
cout << "Digite o salario e o percentual (%) de imposto: ";
cin >> sal >> p_imp;
cout << "\nSalario Bruto: " << sal
<< "\nValor do imposto: " << v_imp
<< "\nSalario Liquido: " << sal_liq;
return 0;
}
float imposto(float s, float p)
{
return s*(p/100);
}
float salarioLiquido(float s, float v)
{
return s-v;
}
