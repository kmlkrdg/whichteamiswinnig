
#include "Futbol.h"

Futbol::Futbol(int beraberlik,string isim,int galibiyet, int maglubiyet) : Takim(isim,galibiyet,maglubiyet)
{
    this->beraberlik=beraberlik;

}

void Futbol::setTakimlar(int beraberlik, int galibiyet, int maglubiyet, int atilan_gol, int yenilen_gol)
{
    this->beraberlik=beraberlik;
    this->galibiyet=galibiyet;
    this->maglubiyet=maglubiyet;
    this->atilan_gol=atilan_gol;
    this->yenilen_gol=yenilen_gol;

}
int Futbol::getBeraberlik()
{
    return this->beraberlik;

}

int Futbol::getAtilan_gol()
{
    return this->atilan_gol;
}

int Futbol::getYenilen_gol()
{
    return this->yenilen_gol;

}


int Futbol::toplam_mac()
{
   return (this->getBeraberlik() + this->getMaglubiyet() + this->getGalibiyet());

}

int Futbol::puan()
{
    return (this->getBeraberlik() + 3*this->getGalibiyet());

}

int Futbol::averaj()
{
    return (this->getAtilan_gol() - this->getYenilen_gol());

}

bool Futbol::operator>(Futbol & f)
{
    if(this->puan() > f.puan())
    {
        return true;
    }

    else if (this->puan() == f.puan())
    {
        if(this->averaj() > f.averaj())
         {
             return true;
         }
    }

    else
        return false;
}
