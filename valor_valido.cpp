#include <iostream>
using namespace std;

int main()
{
    float nota;
    
    while(true){
        cout << "Digite uma nota: ";
        cin >> nota;
        
        if(nota > 10 || nota <= 0){
            cout << "Nota inválida! Tente de novo" << endl;
            continue;
        } else {
            cout << "Nota aceita! Finalizando.." << endl;
            break;
        }
        
        
    }
    
    

    return 0;
}
