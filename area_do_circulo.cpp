#include <iostream>

using namespace std;

int main()
{
    int raio, perimetro, diametro, area;
    cout << "Insira o raio de um círculo: ";
    cin >> raio;
    
    area = 3.14 * (raio * raio);
    diametro = raio * 2;
    perimetro = 3.14 * diametro;
    
    cout << "O valor do raio é: " << raio << ", o diametro é: " << diametro << ", o perimetro é: " << perimetro << ", e a área é: " << area;
    

    return 0;
}
