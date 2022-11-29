
#include "Takim.h"
#include "Futbol.h"

#include <iostream>
using namespace std;

#include <string>
using std::string;

int main()
{

    Futbol f1(2,"Fenerbahce",3,1);
    Futbol f2(1,"Galatasaray",5,2);

    f1.setTakimlar(2,3,1,5,2);
    f2.setTakimlar(1,5,2,6,2);


    cout<<"1. Takim"<<endl;
    cout<< "Takim Ismi: "<<f1.getIsim()<<endl;
    cout<< "Galibiyet: "<<f1.getGalibiyet()<<endl;
    cout<< "Maglubiyet: "<<f1.getMaglubiyet()<<endl;
    cout<< "Beraberlik: "<<f1.getBeraberlik()<<endl;
    cout<<"Atilan gol: "<<f1.getAtilan_gol()<<endl;
    cout<<"Yenilen gol: "<<f1.getYenilen_gol()<<endl;
    cout<<"Toplam Mac: "<< f1.toplam_mac()<<endl;
    cout<<"Toplam Puan: "<< f1.puan()<<endl;
    cout<<"Averaj : "<< f1.averaj()<<endl;
    cout<<endl;

    cout<<"2. Takim"<<endl;
    cout<< "Takim Ismi: "<<f2.getIsim()<<endl;
    cout<< "Galibiyet: "<<f2.getGalibiyet()<<endl;
    cout<< "Maglubiyet: "<<f2.getMaglubiyet()<<endl;
    cout<< "Beraberlik: "<<f2.getBeraberlik()<<endl;
    cout<<"Atilan gol: "<<f2.getAtilan_gol()<<endl;
    cout<<"Yenilen gol: "<<f2.getYenilen_gol()<<endl;
    cout<<"Toplam Mac: "<< f2.toplam_mac()<<endl;
    cout<<"Toplam Puan: "<< f2.puan()<<endl;
    cout<<"Averaj : "<< f2.averaj()<<endl;
    cout<<endl;
    cout<<endl;

    if(f1>f2)
    {
        cout<<f1.getIsim()<<" daha iyi bir takim"<<endl;
    }

    else
    {
        cout<<f2.getIsim()<<" daha iyi bir takim"<<endl;
    }

return 0;
}
