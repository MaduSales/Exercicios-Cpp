#include <iostream>

using namespace std;

int main()
{
    float porcentagem, valor, resultado, porcento;
    cout << "Digite um valor para ser a porcentagem: ";
    cin >> porcentagem;
    
    cout << "Digite um outro valor: ";
    cin >> valor;
    
    porcento = porcentagem / 100;
    resultado = valor * porcento;
    
    cout << valor << " porcento de " << porcentagem << " é " << resultado;
    

    return 0;
}
