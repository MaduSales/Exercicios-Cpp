#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float notasLimite, nota, soma, media;
    
    cout << "Quantas notas você quer calcular? ";
    cin >> notasLimite;
    
    for(int i = 0; i < notasLimite; i++){
        cout << "Insira uma nota: ";
        cin >> nota;
        
        soma += nota;
        media = soma/notasLimite;
        
    }
    
    cout << "A média dos números é " << media;
    return 0;
}
