#ifndef CATALOGUE_H_INCLUDED
#define CATALOGUE_H_INCLUDED

#include <vector>
#include"yaourt.h"
#include "yaourtAlleger.h"
#include "offreCommercial.h"
using namespace std ;
class catalogue {

vector<yaourt *>tab3 ;
vector<offreCommercial*>offre;
/*for(auto & i : offre)
{
    if (i->)
}
*/
catalogue(){}

void ajouter_Yaourt(yaourt & obj);
void ajouter_YaourtAlleger (yaourtAlleger & obj);
void ajouter_offreCommerciale(offreCommercial & obj);
void ajouter_yaourt_a_une_offre_commerciale(string nom, int id);
void supprimer_yaourt_offre_commerciale(string nom, int id);
void afficher_catalogue()const ;
};

#endif // CATALOGUE_H_INCLUDED
