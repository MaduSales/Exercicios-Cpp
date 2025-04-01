#include <iostream>
using namespace std;

int main(){
    
    int senha = 1234, senhaDigitada;
    
    cout << "Digite a sua senha: ";
    cin >> senhaDigitada;
    
    if (senhaDigitada == senha){
        cout << "Acesso liberado!";
    }
    else {
        cout << "Acesso negado.";
    }
    
    return 0;
}
