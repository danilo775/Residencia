#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Produto{
    string nome;
    double preco = 0.0;
    int quantidade = 0;
};
    void calculaValorTotal(vector<Produto> &produtos){
        double valorTotal = 0.0;
        for(int i = 0; i < produtos.size(); i++){
            valorTotal += produtos[i].preco * produtos[i].quantidade;
        }
        cout << "Valor total: " << valorTotal << endl;
    }
    void AtualizaEstoque(vector<Produto>& produtos){
       string  nome;
       bool encotrado = false;

        cout << "Digite o nome do produto para atualizar" << endl;
        cin >> nome;

       for(int i = 0; i < produtos.size();i++){
            if(produtos[i].nome == nome ){
                cout << "Digite o novo preço do produto: "<< endl;
                cin >> produtos[i].preco;
                cout << "Digite a nova quantidade do produto: " << endl;
                cin >> produtos[i].quantidade;
                cout << " atualizado o estoque " << endl;
                encotrado = true;
                    break;
                
            }
        }
        if(!encotrado){
            cout << "Produto nao encontrado" << endl;
        }
    }
    void addProduto(vector<Produto>& produtos){
        char res;
        Produto produto;
       do{
            
            cout << "Digite o nome do produto: ";
            cin >> produto.nome;
            cout << "Digite o preço do produto: ";
            cin >> produto.preco;
            cout << "Digite a quantidade do produto: ";
            cin >> produto.quantidade;
            produtos.push_back(produto);

            cout << "Deseja adicionar mais Produto? s / n" << endl;
            cin >> res;
         
        }while(res == 's');
    };
    
    void listarProdutos(vector<Produto>& produtos){
        
        cout << "Nome do Produto-------Preco--------Quantidade" << endl;
        int tam = produtos.size();
        for(int i=0; i<tam; i++){
            cout << produtos[i].nome << "-----"<< produtos[i].preco << "------"<< produtos[i].quantidade << endl;
        }
    };
    void venderProdutos(vector<Produto>& produtos){
        string  nome;
        bool encotrado = false;
        double valorTotal = 0.0;
        int quantidade = 0;

        cout << "Nome do produto para comprar" << endl;
        cin >> nome;

       for(int i = 0; i < produtos.size();i++){
            if(produtos[i].nome == nome ){
               
                cout << "Digite a  quantidade do produto: " << endl;
                cin >> quantidade;
                produtos[i].quantidade -= quantidade;
                valorTotal = produtos[i].preco * quantidade;
            
                encotrado = true;
                    break;
                
            }
        }
        if(!encotrado){
            cout << "Produto nao encontrado" << endl;
        }
         cout << "Valor total da compra " << valorTotal << endl;
    }

int main(){

    vector<Produto> produtos;
  

  addProduto(produtos);
  listarProdutos(produtos);
    AtualizaEstoque(produtos);
     listarProdutos(produtos);
    calculaValorTotal(produtos);
     venderProdutos( produtos);
      listarProdutos(produtos);
    return 0;
}