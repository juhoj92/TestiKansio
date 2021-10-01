//  Ohjelma kysyy kaksi lukua ja laskee lukujen keskiarvon. Ohjelmassa kaksi
//  aliohjelmaa: toinen kysyy
//  syöttätietoja (luetiedot) ja toinen laskee keskiarvon (keskiarvo). Ohjelma
//  tulostaa keskiarvon.
//  main.cpp
//  KouluHommia
//
//  Created by Juho Junnila on 29.9.2021.
//


#include <iostream>

using namespace std;

double summa (double x, double y);              //Ohjelman prototyyppi

double luetiedot();                             //Proto, joka kysyy luvut

int main()
{
    // MUUTTUJAT
    double luku1, luku2, yhteen;
    
    
    // SYÖTTÖTIEDOT TAI ALKUARVOT LUVUILLE
    luku1 = luetiedot();
    luku2 = luetiedot();
    
    
    //LASKENTA
    yhteen = summa(luku1, luku2);
    
    
    //TULOSTUS
    //cout <<"Luku 1 on: " << luku1;
    //cout <<"Luku 2 on: " << luku2;
    cout <<"Lukujen keskiarvo on: \n" << yhteen;
    
    
}
    // Summa aliohjelma, joka laskee kaksi kysyttyä lukua yhteen
 
double summa (double x, double y)
{
    double laske;
    laske = (x + y) / 2;
    
    return (laske);
}

double luetiedot()          //Ohjelma joka kysyy lukuja
{

    double luku;
    cout <<"Anna luku: \n"; cin >> luku;
    
    return (luku);
    
}

