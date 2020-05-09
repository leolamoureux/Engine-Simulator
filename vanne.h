#ifndef VANNE_H
#define VANNE_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <iostream>
using namespace std;

#define OUVERT 30
#define FERME  31

class Vanne
{
protected:
    int etat;
public:
    Vanne();
    ~Vanne();
    void ouvrirV();
    void fermerV();
    int getEtat();
};

#endif // VANNE_H
