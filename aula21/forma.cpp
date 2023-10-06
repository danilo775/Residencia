/*Crie uma superclasse chamada Forma com um método calcularArea().
● Em seguida, crie duas subclasses: Retangulo e Circulo (com seus atributos
e construtores específicos) que herdam de Forma
○ Implemente o método calcularArea() para calcular a área de um retângulo e de um círculo,
respectivamente.
● Crie um programa que permita ao usuário criar objetos de ambas as
subclasses e chame o método calcularArea() em cada um deles para
calcular suas áreas.*/


#include <iostream>

using namespace std;

class Forma{
    public:
        double calcularArea();
            
        
    
};

class Retangulo : public Forma{
    private:
        double base;
        double altura;

    public:
        double calcularArea(double base, double altura){
            return base * altura;
        }
};

class Circulo : public Forma{
    private:
        double raio;

    public:
        double calcularArea(double raio){
            return 3.14 * raio * raio;
        }    
};

int main(){
    Retangulo ret;
    Circulo bola;
    cout << "Area do retangulo: " << ret.calcularArea(10, 20) << endl;
    cout << "Area do circulo: " << bola.calcularArea(10) << endl;
}



