/*Exercício 1
● Crie uma superclasse chamada Animal com atributos nome, idade e um
método fazerSom().
● Em seguida, crie uma subclasse chamada Cachorro que herda de Animal e
substitua o método fazerSom() para que ele imprima "Au Au!" quando
chamado.
● Crie objetos de ambas as classes e teste seus métodos (função main() ).*/
#include <iostream>
using namespace std;

class Animal{
    private:
        string nome;
        int idade;

    public:    
        void fazerSom();

    string GetNome() {
        return nome;
    }
    int GetIdade() {
        return idade;
    }
    void setNome(string _nome){
        nome = _nome;
    }
    void setIdade(int _idade){
        idade = _idade;
    }
    
};

class Cachorro: Animal{
   
    public:

        void fazerSom(){
            cout << "AUau" << endl;
        }
};

 int main(){
    Cachorro dog;
    dog.fazerSom();
 }   