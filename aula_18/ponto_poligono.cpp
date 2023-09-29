#include <iostream>
#include <vector>
#include <string>

using namespace std;

    class Ponto{

        private: 
            float x;
            float y;

        public: 

            Ponto(){
                x = 0.0;
                y = 0.0;            
            }

            Ponto(float _x, float _y){
                x = _x;
                y = _y;
            }

            float getX(){
                return x;
            }
            void setX(float _x){
                x = _x;
            }

            float getY(){
                return y;
            }
            void setY(float _y){
                y = _y;
            }

            

            void to_string(){
                cout << "x: " << x << endl;
                cout << "y: " << y << endl;
            }
    };

    class Poligono{
        private:
            vector<Ponto> pontos;

        public:
            Poligono() {};

           vector<Ponto> getPonto(){
                return pontos;
            }
           void setPontos(vector<Ponto>& _Pontos){
                pontos = _Pontos;
            }



            
    };


int main() {
   using namespace std;
    Poligono poli;
    cout << "Criando um Poligono" << endl;
    char sn;
    double x,y;
    vector<Ponto> pontos;
    do{
        cout << "Digite as coordenadas do ponto" << endl;
        Ponto p;
        cout << "Valor ponto p(x)" << endl;
        cin >> x;
        p.setX(x);

        cout << "Valor ponto p(y)" << endl;
        cin >> y;
        p.setY(y);

        pontos.push_back(p);
       

        cout << "Deseja inserir mais algum ponto" << endl;
        cin >> sn;

    }while(sn!='n');
        poli.setPontos(pontos);
        for(Ponto& ps : poli.getPonto()){
            ps.to_string();
        }


    return 0;
}
