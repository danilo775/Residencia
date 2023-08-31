#include <iostream>
#include <cfloat>
#include <cmath>
#include <iomanip>


using namespace std;

int main(void){
  
cout << "tamanho max pelo tipo float:" << FLT_MAX << endl;
cout << "tamanho min pelo tipo float:" << FLT_MIN << endl;
cout << "tamanho max pelo tipo double:" << DBL_MAX << endl;
cout << "tamanho min pelo tipo double:" << DBL_MIN << endl;

float pif = M_PI;
double pif_double = M_PI;
long double pif_long_double = M_PIl;

cout << "Valor de pi com maior número de casas decimais: " << setprecision(FLT_MAX) << pif << endl;
cout << "Valor de pi com maior número de casas decimais: " << setprecision(DBL_MAX) << pif_double << endl;

cout << "Valor de pi com 2 números de casas decimais: " << setprecision(2) << pif << endl;
cout << "Valor de pi com 2 números de casas decimais: " << setprecision(2) << pif_double << endl;

cout << "Valor de pi com 2 números de casas decimais: " << setprecision(4) << pif << endl;
cout << "Valor de pi com 2 números de casas decimais: " << setprecision(4) << pif_double << endl;

cout << "Valor de pi com 2 números de casas decimais: " << setprecision(8) << pif << endl;
cout << "Valor de pi com 2 números de casas decimais: " << setprecision(8) << pif_double << endl;

cout << "Valor de pi com 2 números de casas decimais: " << setprecision(16) << pif << endl;
cout << "Valor de pi com 2 números de casas decimais: " << setprecision(16) << pif_double << endl;

cout << "Valor de pi com double de casas decimais: " << setprecision(DBL_MAX) << pif_double << endl;
cout << "Valor de pi com long double de casas decimais: " << setprecision(LDBL_MAX) << pif_long_double << endl;

return 0;
}