#include <iostream>
#include <string>

using namespace std;

class Desenhavel
{
public:
    virtual void desenhar() = 0;
};

class Circulo : public Desenhavel
{

public:
    void desenhar() override
    {

        cout << "Circulo" << endl;
        for (int i = 0; i < 4; i++)
        {
            // Imprimir espaços em branco antes dos asteriscos
            for (int j = 0; j < i; j++)
            {
                std::cout << " ";
            }

            // Imprimir os asteriscos
            for (int k = 0; k < 5 - 2 * i; k++)
            {
                std::cout << "*";
            }

            std::cout << std::endl;
        }
    }
};

class Retangulo : public Desenhavel
{
public:
    void desenhar() override
    {

       cout << "Retangulo" << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 20; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
};

class Triangulo : public Desenhavel
{
public:
    void desenhar() override
    {

        cout << "triangulo" << endl;
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main(){
    Circulo circulo;
    Retangulo retangulo;
    Triangulo triangulo;

    circulo.desenhar();
    retangulo.desenhar();
    triangulo.desenhar();
}