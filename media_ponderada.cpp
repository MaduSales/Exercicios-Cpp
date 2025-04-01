#include <iostream>

using namespace std;

int main()
{
    float n1, n2, n3, n4, n5, media;
    float p1 = 3.0, p2 = 2.5, p3 = 1.0;
    cout << "Insira a nota de Matemática: ";
    cin >> n1;
    
    cout << "Insira a nota de Física: ";
    cin >> n2;
    
    cout << "Insira a nota de Química: ";
    cin >> n3;
    
    cout << "Insira a nota de Português: ";
    cin >> n4;
    
    cout << "Insira a nota de Inglês: ";
    cin >> n5;
    
    media = ((n1 * p1) + (n2 * p2) + (n3 * p2) + (n4 * p3) + (n5 * p3)) / (3.0 + 2.5 + 2.5 + 1.0 + 1.0);
    
    cout <<"A média do aluno é: " << media;

    return 0;
}
