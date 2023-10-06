#include <iostream>
using namespace std;

class ItemBiblioteca {
private:
    string title;
    string autor;
    int numCopiasDisponiveis;

public:
    ItemBiblioteca(string title, string autor, int numCopiasDisponiveis)
        : title(title), autor(autor), numCopiasDisponiveis(numCopiasDisponiveis) {}

    string getTitle() {
        return title;
    }
    string getAutor() {
        return autor;
    }
    int getNumCopiasDisponiveis() {
        return numCopiasDisponiveis;
    }

    void setTitle(string _title) {
        title = _title;
    }
    void setAutor(string _autor) {
        autor = _autor;
    }
    void setNumCopiasDisponiveis(int _numCopiasDisponiveis) {
        numCopiasDisponiveis = _numCopiasDisponiveis;
    }

    void to_string() {
        cout << "Título: " << getTitle() << ", Autor: " << getAutor() << ", Número de cópias: " << getNumCopiasDisponiveis() << endl;
    }
};

class Livro : public ItemBiblioteca {
private:
    int numPaginas;

public:
    Livro(string title, string autor, int numCopiasDisponiveis, int numPaginas)
        : ItemBiblioteca(title, autor, numCopiasDisponiveis), numPaginas(numPaginas) {}

    int getNumPaginas() {
        return numPaginas;
    }
    void setNumPaginas(int _numPaginas) {
        numPaginas = _numPaginas;
    }
};

class DVD : public ItemBiblioteca {
private:
    int duracao;

public:
    DVD(string title, string autor, int numCopiasDisponiveis, int duracao)
        : ItemBiblioteca(title, autor, numCopiasDisponiveis), duracao(duracao) {}

    int getDuracao() {
        return duracao;
    }
    void setDuracao(int _duracao) {
        duracao = _duracao;
    }
};

int main() {
    Livro l("Harry Potter", "JK Rowling", 10, 500);
    l.setNumPaginas(1000);

    DVD d("Filme", "Diretor", 5, 120);

    l.to_string();
    cout << "Número de Páginas: " << l.getNumPaginas() << endl;

    d.to_string();
    cout << "Duração (minutos): " << d.getDuracao() << endl;

    return 0;
}
