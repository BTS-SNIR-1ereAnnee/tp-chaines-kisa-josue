/*
 chaine de caractères
 essai sur la longueur d'une chaîne
 */

#include <iostream>


using namespace std;

int main() {
   
   char mot[8];//variable mot de type char   
   cout << "donnez un mot" << endl;//affiche donnez un mot
   cin.getline(mot,sizeof(mot));//cin.getline affiche les caractères apres les espace
   cout << mot << endl;//affichage variable mot
   
   return 0;
}

