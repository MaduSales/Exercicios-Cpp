#include <iostream>

using namespace std;

int main()
{
    int mes;
    
    cout << "Selecione um mês em formato de número (1-12) " <<endl;
    cin >> mes;
    
    switch(mes){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
        cout << "Esse mês tem 31 dias!";
        break;
        
        case 2:  
        cout << "Esse mês tem 28 dias!";
        break;
        
        case 4: case 6: case 9: case 11: 
        cout << "Esse mês tem 30 dias!";
        break;
        
        default: 
        cout << "Opção inválida.";
    }

    return 0;
}
