
#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
    
   string str;
   str.append(argv[1]);

   if(argc != 4){
    cout << "Argumentos invalidos"<< endl;
   }
   else{
    if(str=="\int"){
        int resultado = atoi(argv[2]) / atoi(argv[3])
    }
   }


}