#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, k, n, limite = 4, aux = "*";
    
    for (i = 1; i <= limite; i++){
        
        for (k = 1; k <= limite; k++){
            
            cout << aux;
            aux++;
        }
        
        cout << endl;
    }
    
    
    return 0;
}
