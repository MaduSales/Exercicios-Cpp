#include <iostream>
using namespace std;

int main(){
    
    float salario, imposto, salarioFinal;
    
    cout << "Qual é seu salário? ";
    cin >> salario;
    
    if (salario > 3000){
        imposto = salario * 0.20;
    }
    else if (salario <= 3000) {
        imposto = salario * 0.15;
    }
    else {
        cout << "Valor incorreto para calculo.";
    }
    
    salarioFinal = salario - imposto;
    cout << "O valor de imposto que você deve pagar é: R$" << imposto << ", ficando com um salário de R$" << salarioFinal;
    
    return 0;
}
