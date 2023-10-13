#include <iostream>
#include <vector>

using namespace std;

class Evento{
    private:
        int duracao;
    public:
        Evento(int d){
            duracao = d;
        }
        int getDuracao(){
            return duracao;
        }
        void setDuracao(int d){
            duracao = d;
        }
};

    class Pacote{
        private:
            string nome;
            vector <Evento*> eventos;
        public:
            Pacote(string n){
                nome = n;
            }
            void adicionarEvento(Evento& e){
                eventos.push_back(&e);
            }
            void listaEventos(){
                cout << "Eventos do pacote " << nome << ":" << endl;
                for(auto e : eventos){
                    cout << "Duracao: " << e->getDuracao() << endl;
                }
            }
    };




int main(){
    
    Pacote p1("Pacote 1");
    Pacote p2("Pacote 2");
    Evento e1(1);
    Evento e2(2);
    Evento e3(3);
    Evento e4(4);

    p1.adicionarEvento(e1);
    p1.adicionarEvento(e2);
    p2.adicionarEvento(e3);
    p2.adicionarEvento(e4);

    p1.listaEventos();
    p2.listaEventos();
    e2.setDuracao(10);

    p1.listaEventos();
    p2.listaEventos();




    return 0;
}