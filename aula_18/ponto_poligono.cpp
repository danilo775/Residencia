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
                x = 0,0;
                y = 0,0;            
            }

            Ponto(float x, float y){
                this->x = x;
                this->y = y;
            }

            float getX(){
                return x;
            }
            void setX(float x){
                this->x = x;
            }

            float getY(){
                return y;
            }
            void setY(float y){
                this->y = y;
            }

            

            void to_string(){
                cout << "x: " << x << endl;
                cout << "y: " << y << endl;
            }
    };

    class Poligono{
        private:
            vector<Ponto> pontos;
            
    };


int main() {
   using namespace std;
    Ponto ponto;
    Poligono poligono;

    return 0;
}
