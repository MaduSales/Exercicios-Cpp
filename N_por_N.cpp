#include <iostream>
using namespace std;

int main()
{
    int i, k, n;
    
    cout << "Digite o número N do tabuleiro N x N: ";
    cin >> n;
    
    for (i = 1; i <= n; i++){
        
        for (k = 1; k <= n; k++){
        
            cout << " - ";
        }
        
        cout << endl;
    }
    
    
    return 0;
}
