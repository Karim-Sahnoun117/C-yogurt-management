#include <iostream>
#include <vector>
#include "catalogue.h"
#include "offreCommercial.h"
#include <algorithm>  //je l'ai ajout� parcque remove par d�faut est d�stin� pour les elements char et on veut d�placer un string dans ce cas

void catalogue :: ajouter_Yaourt (yaourt & obj){

yaourt * p = new yaourt(obj);
tab3.push_back(p);

}

void catalogue :: ajouter_YaourtAlleger (yaourtAlleger & obj){

yaourt * c = new yaourtAlleger(obj);
tab3.push_back(c);

}
void catalogue :: ajouter_offreCommerciale(offreCommercial & obj){

offreCommercial * d = new offreCommercial(obj);

offre.push_back(d);

}

void catalogue::ajouter_yaourt_a_une_offre_commerciale(string nom, int id)
{ int a =0;
    for (auto it = offre.begin();it != offre.end();++it)
    {
        if ((*it)->get_id()==id)
        {
        (*it)->get_yaourt_concerne().push_back(nom);
        a+= 1;
        }
    }
    if (a==0)
    {
    cout<<"lid ne correspond pas "<<endl;
    }

}

void catalogue::supprimer_yaourt_offre_commerciale(string nom, int id)
{ int a = 0;
    for (auto it = offre.begin();it != offre.end();++it)
    {
        if ((*it)->get_id()==id)
        {
        (*it)->get_yaourt_concerne().erase(remove((*it)->get_yaourt_concerne().begin(),(*it)->get_yaourt_concerne().end(),nom),(*it)->get_yaourt_concerne().end());
        }
    }
    if (a==0)
    {
    cout<<"lid ne correspond pas  "<<endl;
    }

}

void catalogue::afficher_catalogue() const
{
cout << "voici le catalogue de yaourts " << endl;
    for (auto it = tab3.begin();it != tab3.end();++it)
    {
    (*it)->affiche();
    }
cout << "voici les offre commerciales " << endl;
   for (auto iter = offre.begin();iter != offre.end();++iter)
   {
     (*iter)->affiche();
   }
}

