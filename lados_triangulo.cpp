#include <iostream>

using namespace std;

int main()
{
    int lado1, lado2, lado3;
    
    cout << "Insira o primeiro lado de um triangulo: " <<endl;
    cin >> lado1;
    
    cout << "Insira o segundo lado de um triangulo: " <<endl;
    cin >> lado2;
    
    cout << "Insira o terceiro lado de um triangulo: " <<endl;
    cin >> lado3;
    
    
    if (lado1 == lado2 && lado2 == lado3){
        cout << "O triângulo é Equilátero.";
    }
    else if (lado1 != lado2 && lado2 != lado3 && lado3 != lado1){
        cout << "O triângulo é Escaleno.";
    }
    else {
        cout << "O triângulo é Isósceles.";
    }

    return 0;
}
