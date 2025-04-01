#include <iostream>
using namespace std;

int main()
{
    int num, aux, limite, resultado;
    
    cout << "Insira um número: ";
    cin >> num;
    
    cout << "Até qual número você quer que ela seja exibida? ";
    cin >> limite;
    
    for(aux = 1; aux <= limite; aux++){
        
        resultado = num * aux;
        cout << num << " X " << aux << " = " << resultado << endl;
    }

    return 0;
}
