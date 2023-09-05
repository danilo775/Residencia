/* 
#include<iostream>
using namespace std;

int main(void){

    char word[6] ={'h', 'e', 'l', 'l', 'o' };
    char name[30];
    cout << "enter seu nome ";
    cin >> name;
    cout << word<< ", " << name << endl;

    return 0;
}
*/


#include<iostream>
using namespace std;

int main(void){

    char word[] ={"hello" };
    char name[30];
    cout << "enter seu nome ";
    cin.getline(name, 30);
    cout << word<< ", " << name << endl;

    return 0;
}