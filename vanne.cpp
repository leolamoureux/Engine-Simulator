#include "vanne.h"

Vanne::Vanne()
{
    etat=FERME;
}

Vanne::~Vanne(){cout<<"destruction de la vanne"<<endl;}


void Vanne::fermerV(){etat=FERME;  }

void Vanne::ouvrirV(){etat=OUVERT; }

int Vanne::getEtat(){return etat;}
