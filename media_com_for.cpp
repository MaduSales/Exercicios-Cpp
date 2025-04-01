#include <iostream>

using namespace std;

int main()
{
    int aux, num_materias;
    float nota, soma = 0, media;
    
    cout << "Digite a quantidade de matérias: ";
    cin >> num_materias;
    
    
    for(aux = 1; aux <= num_materias; aux++){
        cout << "Nota " << aux << ": ";
        cin >> nota;
        soma += nota;
        media = soma / num_materias;
        
    }
    
    cout << "Média: " << media;
    return 0;
}
