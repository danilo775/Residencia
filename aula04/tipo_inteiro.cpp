#include <iostream>

using namespace std;

int main(void)

{

int quantidade; // quantidade e uma variável de tipo inteiro

cout<<"Quantos alunos há na turma?: " cin>> quantidade; // Lendo um inteiro da entrada padrão

cout << "Há <<< quantidade <<" alunos na turma.\n";

cout << "0 tipo short int ocupa" << sizeof(short int<<" bytes na memória.\n";

cout << "0 tipo int ocupa " << sizeof(int << bytes na memória.\n"; cout<<"0 tipo long int ocupa << sizeof( long ant) << bytes na memória. \n";

cout << "0 tipo long long int ocupa <<< sizeof long long int<<"bytes na memória.\n";

unsigned short int idade = 20; // o tipo unsigned short int so armazena valores positivos

cout << "A idade é: " << idade << endl;

int valHexa = 0x1A; // o prefixo ex indica que o valor e hexadecimal cout << "O valor de valHexa: " << valHexa << " ou " << hex << valHexa << dec;

cout << em hexadecimal. <<< endl;

long int valOctal 032; // o prefixo 8 indica que o valor e octal cout << "O valor de valoctal: << valoctal <<< ou<< oct <<< valoctal <<< dec;

cout << em octal." << endl;

return 0;
}