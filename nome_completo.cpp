#include <iostream>
#include <istream>
using namespace std;

int main()
{
   string nome;
   
    cout << "Digite o seu nome completo: ";
    getline(cin, nome);
    
    cout << "O seu nome é: " << nome;
    return 0;
}
