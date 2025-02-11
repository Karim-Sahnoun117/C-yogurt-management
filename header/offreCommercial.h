#ifndef OFFRECOMMERCIAL_H_INCLUDED
#define OFFRECOMMERCIAL_H_INCLUDED
#include "yaourt.h"
#include <vector>
using namespace std ;
class offreCommercial {

private :
    int id ;
    string debut ;
    string fin ;
    int reduction ;//pourcentage de reduction du prix initiale
    vector <string> yaourt_concerne; // les yaourts concernes
public :
    offreCommercial(int _id ,string _debut ,string _fin ,int _reduction):id(_id),debut(_debut),
    fin(_fin),reduction(_reduction){}

   int  get_id(){return id ;}
   string get_debut(){return debut ;}
   string get_fin(){return fin ;}
   int get_reduction(){return reduction;}
   vector<string>get_yaourt_concerne(){return yaourt_concerne; }
   void affiche()const   ;
};

#endif // OFFRECOMMERCIAL_H_INCLUDED
