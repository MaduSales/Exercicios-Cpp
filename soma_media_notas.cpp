#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float nota, soma, media;
    
    for(int i = 1; i < 5; i++){
        cout << "Insira uma nota: ";
        cin >> nota;
        
        soma += nota;
        media = soma/5;
        
    }
    
    cout << "A soma das notas é: " << soma << " e a média é " << media;
    return 0;
}
