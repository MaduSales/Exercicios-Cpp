#include <iostream>

using namespace std;

int main()
{
    double velocidadeVia, velocidadeMaxima;
    cout << "Insira a velocidade máxima de uma via: ";
    cin >> velocidadeVia;
    
    velocidadeMaxima = velocidadeVia + (velocidadeVia * 0.12);
    
    cout <<"O seu carro pode andar até " << velocidadeMaxima << "Km/h na via";

    return 0;
}
