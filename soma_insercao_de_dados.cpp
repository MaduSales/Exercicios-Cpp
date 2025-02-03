#include <iostream>
using namespace std;

int main()
{
   float numero1, numero2, soma;
   
    cout << "Digite um número: ";
    cin >> numero1;
    
    cout << "Digite um outro número: ";
    cin >> numero2;
    
    soma = numero1 + numero2;
    
    cout << "A soma dos números " << numero1 << " e " << numero2 << " é " << soma;
    return 0;
}