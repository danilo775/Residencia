#include <iostream>
#include <vector>
#include <string>

using namespace std;

    class Livro{

        private: 
            string titulo;
            string autor;
            string editora;
            string ano;
            string genero;

        public: 

            Livro(){
                titulo = "";
                autor = "";
                editora = "";
                ano    = "";
                genero = "";
            }
            Livro(string titulo, string autor, string editora, string ano, string genero){
                this->titulo = titulo;
                this->autor = autor;
                this->editora = editora;
                this->ano = ano;
                this->genero = genero;
            }

            string getTitulo(){
                return titulo;
            }
            void setTitulo(string titulo){
                this->titulo = titulo;
            }

            string getAutor(){
                return autor;
            }

            void setAutor(string autor){
                this->autor = autor;
            }

            string getEditora(){
                return editora;
            }
            void setEditora(string editora){
                this->editora = editora;
            }

            string getAno(){
                return ano;
            }
            void setAno(string ano){
                this->ano = ano;
            }

            string getGenero(){
                return genero;
            }
            void setGenero(string genero){
                this->genero = genero;
            }

            void to_string(){
                cout  << "Titulo: " << getTitulo() << " - Autor: " << getAutor() << " - Editora: " << getEditora() << " - Ano: " << getAno() << " - Genero: " << getGenero();
            }
    };

    class Celular{
        private:
            string marca;
            string modelo;
            int capacidade;
            string processador;
            string sistemaOP;
        public:
            Celular(){
                marca = "";
                modelo = "";
                capacidade = 0;
                processador = "";
                sistemaOP = "";
            }   

            Celular(string marca, string modelo, int capacidade, string processador, string sistemaOP){
                this->marca = marca;
                this->modelo = modelo;
                this->capacidade = capacidade;
                this->processador = processador;
                this->sistemaOP = sistemaOP;
            }
            

            string getMarca(){
                return marca;
            } 
            void setMarca(string marca){
                this->marca = marca;
            }

            string getModelo(){
                return modelo;
            }
            void setModelo(string modelo){
                this->modelo = modelo;
            }

            int getCapacidade(){
                return capacidade;
            }
            void setCapacidade(int capacidade){
                this->capacidade = capacidade;
            }

            string getProcessador(){
                return processador;
            }
            void setProcessador(string processador){
                this->processador = processador;
            }
            string getSistemaOP(){
                return sistemaOP;
            }
            void setSistemaOP(string sistemaOP){
                this->sistemaOP = sistemaOP;
            }

            void to_string(){
                cout << "Marca: " << getMarca() << " - Modelo: " << getModelo() << " - Capacidade: " << getCapacidade() << " - Processador: " << getProcessador() << " - Sistema Operacional: " << getSistemaOP();
            }
    };
  
    class Mamifero{
        private:
            string especie;
            string raca;
            string habitat;
            string alimentacao;
            string peso;

        public:
            Mamifero(){
                especie = "";
                raca = "";
                habitat = "";
                alimentacao = "";
                peso = "";
            } 

            string getEspecie(){
                return especie;
            }
            void setEspecie(string especie){
                this->especie = especie;
            }

            string getRaca(){
                return raca;
            }
            void setRaca(string raca){
                this->raca = raca;
            }

            string getHabitat(){
                return habitat;
            }
            void setHabitat(string habitat){
                this->habitat = habitat;
            }

            string getAlimentacao(){
                return alimentacao;
            }
            void setAlimentacao(string alimentacao){
                this->alimentacao = alimentacao;
            }

            string getPeso(){
                return peso;
            }
            void setPeso(string peso){
                
            }

            void to_string(){
               cout << "Especie: " << getEspecie() << " - Raca: " << getRaca() << " - Habitat: " << getHabitat() << " - Alimentacao: " << getAlimentacao() << " - Peso: " << getPeso();
            }
    };

    class  Ave {
        private:
            string especie;
            string raca;
            string habitat;
            string tipo;
            string peso;
        public:
            Ave(){
                especie = "";
                raca = "";
                habitat = "";
                tipo = "";
                peso = "";
            }
    };



int main() {
   using namespace std;
    Livro livro1("Piano", "João", "Editora", "2020", "Ficção");
    livro1.to_string();
    
    return 0;
}
