#include <iostream>
using namespace std;

int main(){
    
   int idade, comorbidade;
   
   cout << "Qual a sua idade? ";
   cin >> idade;
   
   
   
   if (idade >= 18){
       cout << "Você possui alguma comorbidade? " << endl;
       cout << "1 - Não" << endl;
       cout << "2 - Sim" << endl;
       cin >> comorbidade;
       
       if (comorbidade == 1){
           cout << "Você pode doar sangue.";
       }
       else {
           cout << "Você não pode doar sangue pois possui restrições médicas.";
       }
   }
   else {
       cout << "Você precisa ter 18+ para doar sangue.";
   }
    return 0;
}
