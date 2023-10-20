# include <iostream>
# include <string>
# include <vector>

using namespace std;

template<typename T> class ListaGenerica{

    private:
        vector<T> lista;

    public:

        void add(const T& item){
            lista.push_back(item);
        } 

        void listar(){
            for (size_t i = 0; i < lista.size(); i++){
                cout << lista[i] << " ";
            }
        } 

        void remove(const T& item){
            for(auto i = lista.begin(); i != lista.end(); i++){
                if(*i == item){
                    lista.erase(i);
                }
            }




            // for(size_t i = 0; i < lista.size(); i++){
            //     if(lista[i] == item){
            //         lista.erase(lista.begin() + i);
                    
            //     }
            // }
        }  

};


int main(){
    ListaGenerica<int> listaInt;
    listaInt.add(1);
    listaInt.add(2);
    listaInt.add(3);
    listaInt.listar();
    cout<< endl;
    listaInt.remove(2);
    listaInt.listar();

    ListaGenerica<string> listaString;

    listaString.add("casa");
    listaString.add("Predio");
    listaString.add("Torre");
    listaString.listar();
    cout<< endl;
    listaString.remove("Torre");
    listaString.listar();


}