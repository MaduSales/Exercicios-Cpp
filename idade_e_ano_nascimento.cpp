#include <iostream>

using namespace std;

int main()
{
    int idade, nascimento, anoAtual;
    cout << "Qual a sua idade? ";
    cin >> idade;
    
    cout << "Em que ano estamos? ";
    cin >> anoAtual;
    
    nascimento = anoAtual - idade;
    
    cout << "Você nasceu em " << nascimento;
    

    return 0;
}
