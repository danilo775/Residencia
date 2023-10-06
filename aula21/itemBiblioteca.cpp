/*Exercício 3
● Crie uma superclasse chamada ItemBiblioteca com atributos título, autor e
número de cópias disponíveis.
● Em seguida, crie duas subclasses, Livro e DVD, que herdam de
ItemBiblioteca.
○ Adicione propriedades específicas de cada tipo de item, como número de páginas para livros
e duração para DVDs.
● Faça um programa que crie objetos de ambas as subclasses e teste o seu
modelo.*/

#include <iostream>

using namespace std;

class ItemBiblioteca{
    private:
        string title;
        string autor;
        int numCopiasDisponiveis;
    public:
        ItemBiblioteca(string title, string autor, int numCopiasDisponiveis){
            this->title = title;
            this->autor = autor;
            this->numCopiasDisponiveis = numCopiasDisponiveis;
        }
        string getTitle(){
            return title;
        }
        string getAutor(){
            return autor;
        }
        int getNumCopiasDisponiveis(){
            return numCopiasDisponiveis;
        }

        void setTitle(string _title){
            title = _title; 
        }
        void setAutor(string _autor){
            autor = _autor;
        }
        void setNumCopiasDisponiveis(int _numCopiasDisponiveis){
            numCopiasDisponiveis = _numCopiasDisponiveis;
        }
};   
    
 class Livro :  ItemBiblioteca{
     private:
         int numPaginas;  
     public:
         Livro( string title, string autor, int numCopiasDisponiveis, int numPaginas):ItemBiblioteca(title, autor, numCopiasDisponiveis){
             
             this->numPaginas = numPaginas;
             
         }
         int getNumPaginas(){
             return numPaginas;
         }
         void setNumPaginas(int _numPaginas){
             numPaginas = _numPaginas;
         } 
          void to_string(){
            cout<<"Título: "<<ItemBiblioteca::getTitle()<< "Autor: "<<ItemBiblioteca::getAutor()<<"Número de cópias: "<<ItemBiblioteca::getNumCopiasDisponiveis()<< endl;
        };         
 }; 

 class DVD : ItemBiblioteca{
     private:
         int duracao;
     public:
         DVD(string title, string autor, int numCopiasDisponiveis, int duracao):ItemBiblioteca(title, autor, numCopiasDisponiveis){
             this->duracao = duracao;
         }
         int getDuracao(){
             return duracao;
         } 
         void setDuracao(int _duracao){
             duracao = _duracao;
         } 
           
 };  

 int main(){
     Livro l("Harry Potter", "JK Rowling", 10, 500);
   
       cout << "Número de páginas: "<< l.to_string();
     
    


     return 0;    
 };    