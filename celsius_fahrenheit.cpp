#include <iostream>

using namespace std;

int main()
{
    float celsius, resultadoFahrenheit;
    cout << "Insira o valor de graus Celsius: ";
    cin >> celsius;
    
    resultadoFahrenheit = celsius * (9.0/5.0) + 32;
    
    cout << celsius << "°C é " << resultadoFahrenheit << "°F";
    

    return 0;
}
