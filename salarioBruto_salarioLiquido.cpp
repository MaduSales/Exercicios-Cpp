#include <iostream>

using namespace std;

int main()
{
    double salarioBruto, salarioLiquido, impostoDeRenda;
    cout << "Qual é o seu Salário Bruto?";
    cin >> salarioBruto;
    
    impostoDeRenda = salarioBruto * 0.275;
    salarioLiquido = salarioBruto - impostoDeRenda;
    
    cout << "O seu Salário Bruto é " << salarioBruto << ", mas com um Imposto de Renda de 27,5% o seu Salário Líquido será " << salarioLiquido;
    

    return 0;
}
