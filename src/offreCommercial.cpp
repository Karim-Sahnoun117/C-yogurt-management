#include "offreCommercial.h"
#include <vector>
#include<iostream>

void offreCommercial :: affiche()const {

cout<< "lid est "<<id<<endl;
cout<<"la date de debut est "<<debut<<endl;
cout<<"la date de fin   est "<<fin<<endl;
cout<<"la reduction du prix  "<<reduction<<endl;
for (auto it = yaourt_concerne.begin();it != yaourt_concerne.end();++it){

    cout<<"les yaours concernes correspond "<<*it<<endl;

}





}
