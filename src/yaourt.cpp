#include "yaourt.h"
#include "iostream"
#include <vector>
using namespace std ;

void yaourt::affiche()const{

cout<<"le nom est : "<<nom<<endl;
for (auto  it =parfum.begin();it != parfum.end();++it){

    cout<<*it<<endl;

}
cout<<"le prix est : "<<prix<<endl;


}
void yaourt :: ajouter_parfum(const string & P)
{
 parfum.push_back(P)   ;
}
