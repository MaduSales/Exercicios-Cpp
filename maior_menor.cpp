#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float num, maior;
    
    cout << "Insira um número: ";
    cin >> maior;
    
    for(int i = 1; i < 5; i++){
        cout << "Insira um número: ";
        cin >> num;
        
        if(num > maior){
            maior = num;
        }
        
    }
    
    cout << "O maior numero é: " << maior;
    return 0;
}
