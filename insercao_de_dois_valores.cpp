#include <iostream>
using namespace std;

int main()
{
   string nome;
   
    cout << "Qual é o seu nome? ";
    getline(cin, nome);
    
    cout << "O seu nome é " << nome << "? Que nome lindo!";
    return 0;
}