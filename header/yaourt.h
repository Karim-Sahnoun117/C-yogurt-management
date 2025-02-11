#ifndef YAOURT_H_INCLUDED
#define YAOURT_H_INCLUDED
#include<vector>
#include<string>
using namespace std ;

class yaourt {

protected:
string nom ;
vector<string>parfum;
int prix;
 public :
yaourt(string _nom,int prix):nom(_nom),prix(0){}

string getNom()const{return nom ;}
vector<string>getParfum()const{return parfum;}
int getPrix()const{return prix;}
void ajouter_parfum(const string & P);
virtual void affiche()const ;
};

#endif // YAOURT_H_INCLUDED
