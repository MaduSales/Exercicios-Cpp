#include <iostream>
using namespace std;

int main()
{
    int num, aux = 1, limite, resultado;
    
    cout << "Insira um número: ";
    cin >> num;
    
    cout << "Até qual número você quer que ela seja exibida? ";
    cin >> limite;
    
    while(aux <= limite){
        resultado = num * aux;
        cout << num << " X " << aux << " = " << resultado << endl;
        aux++;
    }

    return 0;
}
