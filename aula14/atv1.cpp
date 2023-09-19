#include <iostream>
#include <vector>
using namespace std;

struct Produto
{
   vector<char> nome;
   vector<double> valor;
};

int main()
{
    Produto produto;
    char nome;  
    double preco = 0.0;
    int quantidade = 0;

    cout<<"Nome: ";
    cin >> produto.nome;

    cout<<"Nota em Matemática: ";
    cin >> Lennon.math;

    cout<<"Nota em Física: ";
    cin >> Lennon.physics;

    cout<<"Nota em Ciências: ";
    cin >> Lennon.science;

    cout<<"\nDados:"<<endl;
    cout<<"Nome      : "<<Lennon.name<<endl;
    cout<<"Matemática: "<<Lennon.math<<endl;
    cout<<"Física    : "<<Lennon.physics<<endl;
    cout<<"Ciência   : "<<Lennon.science<<endl;

    return 0;
}