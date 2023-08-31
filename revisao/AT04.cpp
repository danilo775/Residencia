#include <iostream>
#include <cctype> // Biblioteca ctype para manipulação de caracteres
using namespace std;
int main() {
    char ch1, ch2, ch3;

    // b. Pedir ao usuário para digitar um caractere
    cout << "Digite um caractere: ";
    cin >> ch1;

    // c. Verificar o tipo de caractere


    if (std::isupper(ch1)) {
        ch2 = 'M'; // Letra maiúscula
    } else if (std::islower(ch1)) {
        ch2 = 'm'; // Letra minúscula
    } else if (std::isdigit(ch1)) {
        ch2 = 'd'; // Dígito
    } else {
        ch2 = 'o'; // Outro tipo de caractere
    }

    // Mostrar os resultados
    std::cout << "Você digitou o caractere '" << ch1 << "'." << std::endl;
    
    switch (ch2) {
        case 'M':
            std::cout << "É uma letra maiúscula." << std::endl;
            break;
        case 'm':
            std::cout << "É uma letra minúscula." << std::endl;
            break;
        case 'd':
            std::cout << "É um dígito." << std::endl;
            break;
        default:
            std::cout << "É outro tipo de caractere." << std::endl;
    }

    return 0;
}
