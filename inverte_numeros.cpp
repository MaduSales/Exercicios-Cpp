#include <iostream>
using namespace std;

int main(){
    
   int numero1, numero2, n;
   
   cout << "Insira um número: ";
   cin >> numero1;
   
   cout << "Insira outro número: ";
   cin >> numero2;
   
   n = numero1;
   numero1 = numero2;
   numero2 = n;
   
   cout << "Agora o primeiro número será " << numero1 << " e o segundo número digitado é " << numero2;

    return 0;
}
