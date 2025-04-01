#include <iostream>
using namespace std;

int main()
{
    int num, aux = 1, limite, resultado;
    
    cout << "Insira um número: ";
    cin >> num;
    
    cout << "Até qual número você quer que ela seja exibida? ";
    cin >> limite;
    
    do{
        resultado = num * aux;
        cout << num << " X " << aux << " = " << resultado << endl;
        aux++;
        
    } while (aux <= limite);

    return 0;
}
