#include <iostream>
using namespace std;

int main()
{
    int numero1, numero2;
    
    cout << "Insira um numero ";
    cin >> numero1;
    
    cout << "Insira outro numero ";
    cin >> numero2;
    
    numero1 += 1;
    
    for(numero1; numero1 < numero2; numero1++){
        
        cout << numero1;
       
    }
    

    return 0;
}
