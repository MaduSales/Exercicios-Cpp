#include <iostream>

using namespace std;

int main()
{
    int n1, n2, opcao, resultado;
    
    cout << "Insira um número: ";
    cin >> n1;
    
    cout << "Insira outro número: ";
    cin >> n2;
    
    cout << "Agora escolha uma operação: " <<endl;
    cout << "1 - Soma " <<endl;
    cout << "2 - Subtração " <<endl;
    cout << "3 - Divisão " <<endl;
    cout << "4 - Multiplicação " <<endl;
    
    cin >> opcao;
    
    switch(opcao){
        case 1:
        resultado = n1 + n2;
        
        cout << "O resultado será: " << resultado;
        break;
        
        case 2:
        resultado = n1 - n2;
        
        cout << "O resultado será: " << resultado;
        break;
        
        case 3:
        resultado = n1 / n2;
        
        cout << "O resultado será: " << resultado;
        break;
        
        case 4:
        resultado = n1 * n2;
        
        cout << "O resultado será: " << resultado;
        break;
        
        default:
        cout << "Erro.";
    }

    return 0;
}
