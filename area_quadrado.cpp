#include <iostream>
using namespace std;

int main()
{
   float lado, area;
   
   
    cout << "Digite o lado do quadrado para descobrir a área: ";
    cin >> lado;
    
    area = lado * lado;
    
    cout << "A área do quadrado é: " << area;
    return 0;
}
