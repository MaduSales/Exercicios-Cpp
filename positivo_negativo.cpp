#include <iostream>
using namespace std;

int main(){
    
   int numero1;
   
   cout << "Insira um número inteiro: ";
   cin >> numero1;
   
   if (numero1 > 0){
       cout << "O número " << numero1 << " é positivo.";
   }
   else if (numero1 < 0){
       cout << "O número " << numero1 << " é negativo";
   }
   else {
       cout << "O número " << numero1 << " é neutro.";
   }

    return 0;
}
