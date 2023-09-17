#include <iostream>
#include <string>
#include <vector>

using namespace std;


    struct Passageiro{

        string name, cpf; 
        int idade;
    
    };

    struct Data {
        int dia, mes, ano;
        string hora;
    };    

    struct Potrona{
        Passageiro passageiro;   
        int número_assento;
        bool disponivel = true;
    

    };


    struct Viagem {

        Potrona potrona[40];  
        bool tipo;  // ida ou volta
        double valor = 80.00; //
        string destino, saida;
        Data data;

    };
    double arrecadamentoPoViagem(vector<Viagem> viagem){
        double soma = 0.0; //
        string hora;
        int  dia, mes, ano;

        for(int i = 0; i < 40; i++){
            cout  << "Digite ano para busca" << endl;
            cin >> ano;
            cout  << "Digite mes para busca" << endl;
            cin >> mes;
            cout  << "Digite a Hora para busca" << endl;
            cin >> hora;
            if(ano == viagem[i].data.ano && mes == viagem[i].data.mes && hora == viagem[i].data.hora){
                if(viagem[i].potrona[i].disponivel == false){
                    soma += viagem[i].valor;
                }
            }
        }
        return soma;
    }


int main() {
      vector <Viagem> viagem;



    return 0;
}
