#include <iostream>

int main() {
    char ch1, ch2, ch3;

    // Solicita ao usuário que digite um caractere e armazena em ch1
    std::cout << "Digite um caractere: ";
    std::cin >> ch1;

    // Verifica se ch1 é uma letra maiúscula, minúscula, dígito ou outro caractere
    if (ch1 >= 'A' && ch1 <= 'Z') {
        std::cout << "É uma letra maiúscula." << std::endl;
    } else if (ch1 >= 'a' && ch1 <= 'z') {
        std::cout << "É uma letra minúscula." << std::endl;
    } else if (ch1 >= '0' && ch1 <= '9') {
        std::cout << "É um dígito." << std::endl;
    } else {
        std::cout << "É outro tipo de caractere." << std::endl;
    }

    // Atribui o caractere 'Q' (correspondente a 81 em decimal) à ch2
    ch2 = 'Q';

    // Imprime o valor de ch2 em formatos decimal, octal, hexadecimal e como caractere
    std::cout << "ch2 em decimal: " << int(ch2) << std::endl;
    std::cout << "ch2 em octal: " << std::oct << int(ch2) << std::endl;
    std::cout << "ch2 em hexadecimal: " << std::hex << int(ch2) << std::endl;
    std::cout << "ch2 como caractere: " << ch2 << std::endl;

    // Atribui o caractere correspondente à letra minúscula 'q' a ch3
    ch3 = ch2 + ('a' - 'A');

    // Imprime o valor de ch3 em formatos decimal, octal, hexadecimal e como caractere
    std::cout << "ch3 em decimal: " << int(ch3) << std::endl;
    std::cout << "ch3 em octal: " << std::oct << int(ch3) << std::endl;
    std::cout << "ch3 em hexadecimal: " << std::hex << int(ch3) << std::endl;
    std::cout << "ch3 como caractere: " << ch3 << std::endl;

    return 0;
}
