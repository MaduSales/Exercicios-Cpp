#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num1, num2, num3, num4, num5, media, soma;
    
    cout << "Digite um número: ";
    cin >> num1;
    
    cout << "Informe um outro número: ";
    cin >> num2;
    
    cout << "Digite outro número: ";
    cin >> num3;
    
    cout << "Insira outro número: ";
    cin >> num4;
    
    cout << "Escreva o último número: ";
    cin >> num5;
    
    soma = num1 + num2 + num3 + num4 + num5;
    
    media = (num1 + num2 + num3 + num4 + num5) / 5;
    
    cout << "A soma é " << soma << " e a média é " << media;

    return 0;
}
