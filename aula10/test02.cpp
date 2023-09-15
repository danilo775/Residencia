
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
   vector<string> vec;
   
   vec.push_back("zangado");
   vec.push_back("atchim");
   vec.push_back("mestre");
   vec.push_back("soneca");
   vec.push_back("dunga");
   vec.push_back("feliz");
   vec.push_back("dengoso");

   for(auto x = vec.begin(); x!= vec.end(); x++)
        cout << *x <<


    return 0;
}