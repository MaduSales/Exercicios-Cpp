#include <iostream>

using namespace std;

int main()
{
    float n1, n2, n3, n4, n5, media;
    cout << "Insira a primeira nota do aluno ";
    cin >> n1;
    
    cout << "Insira a segunda nota do aluno ";
    cin >> n2;
    
    cout << "Insira a terceira nota do aluno ";
    cin >> n3;
    
    cout << "Insira a quarta nota do aluno ";
    cin >> n4;
    
    cout << "Insira a quinta nota do aluno ";
    cin >> n5;
    
    media = (n1 + n2 + n3 + n4 + n5) / 5;
    
    cout <<"A média do aluno é: " << media;

    return 0;
}
