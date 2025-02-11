#include <iostream>
#include "yaourt.h"
#include"yaourtAlleger.h"
#include "catalogue.h"
#include "offreCommercial.h"


using namespace std;

int main()
{
  yaourt Y("Delice",450);
    Y.ajouter_parfum("Vanille");
    Y.ajouter_parfum("Fraise");
    Y.ajouter_parfum("Ananas");

    offreCommercial A(12,"11/03/2024","11/06/2024",10);
    offreCommercial B(15,"18/03/2024","13/07/2024",25);

}
