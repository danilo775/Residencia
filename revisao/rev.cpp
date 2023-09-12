
#include <iostream>
#include <vector>

using namespace std;

int main(void){
    
   vector<int> num1;
   vector<int> num2;

    num1.insert(num1.begin()+1,258);
    num1.erase(num1.end());
   
   num1.push_back(1);
   num1.push_back(2);
   num1.push_back(3);
   num1.push_back(4);

   num2.push_back(5);
   num2.push_back(6);
   num2.push_back(7);
   num2.push_back(8);

    // num1.swap(num2);

    for(int i=0; i< num2.size(); i++){
        cout <<  num1[i] << " ";
    }
     cout << endl;
    for(int i=0; i< num2.size(); i++){
        cout <<  num2[i] << " ";
    }
   
   while (!num1.empty())
   {
   num1.pop_back();
   }
   
    cout << "novo tamanho de num1" << num1.size()<< endl;
    return 0;
}