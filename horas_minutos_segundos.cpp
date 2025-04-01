#include <iostream>

using namespace std;

int main()
{
    int horas, minutos, segundos, conversaoMinutos;
    cout << "Indique o valor somente das horas: ";
    cin >> horas;
    
    cout << "Indique o valor somente dos minutos: ";
    cin >> minutos;
    
    conversaoMinutos = (horas * 60) + minutos;
    segundos = conversaoMinutos * 60;
    
    cout << "Agora, " << horas << " hora(s) e " << minutos << " minuto(s) é " << conversaoMinutos << " minutos e " << segundos << " segundos.";
    

    return 0;
}
