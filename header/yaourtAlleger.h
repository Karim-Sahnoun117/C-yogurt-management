#ifndef YAOURTALLEGER_H_INCLUDED
#define YAOURTALLEGER_H_INCLUDED
#include<vector>
#include"yaourt.h"
class yaourtAlleger : public yaourt {

private :
    int tauxSucre;
    int tauxGras ;

    yaourtAlleger(string _nom,int _prix ,int _tauxSucre,int _tauxGras):yaourt(_nom,_prix),
    tauxSucre(_tauxSucre),tauxGras(_tauxGras){}

void affiche()const override; //error when i maked here;

int get_tauxSucre(){return tauxSucre ;}
int get_tauxGras(){return tauxGras;}




};

#endif // YAOURTALLEGER_H_INCLUDED
