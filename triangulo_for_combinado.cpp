#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j, k, linhas;
    
    cout << "Digite o número de linhas: ";
    cin >> linhas;
    
    for (i = 1; i <= linhas; i++){
        
        for (k = 1; k <= linhas - i; k++){
            
            cout << " ";
            
        }
        
            for (j = 1; j <= 2*i-1; j++){
            
                cout << "*";
            
            }
        
        cout << endl;
    }
        
    
    return 0;
}
