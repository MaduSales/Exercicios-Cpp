#include <iostream>
#include <istream>
using namespace std;

int main()
{
   int base, altura, area;
   
    cout << "Digite a base e a altura do retângulo para descobrir a área: ";
    cin >> base >> altura;
    
    area = base * altura;
    
    cout << "A área do retângulo é: " << area;
    return 0;
}
