#ifndef CRITTER_H
#define CRITTER_H

#include <iostream>
#include <vector>

using namespace std;

class Critter {
public:
    // Constructor amb valors per defecte per a gana i avorriment
    Critter(int gana = 0, int avorriment = 0);
    // M�tode perqu� el Critter parli sobre el seu estat
    void Parla();
    // M�tode per alimentar el Critter
    void Menja(int menjar = 4);
    // M�tode per jugar amb el Critter
    void Juga(int diversio = 4);
    // M�tode per mostrar l'estat del Critter
    void MostraEstat();
    // M�tode per fer esport (no implementat)
    void FerEsport();
    // Sobrec�rrega de l'operador de sortida per a la classe Critter
    friend ostream& operator<<(ostream& os, const Critter& critter);
    // Sobrec�rrega de l'operador d'assignaci� per a la classe Critter
    Critter& operator=(const Critter& critter);

private:
    int m_Gana; // Nivell de gana del Critter
    int m_Avorriment; // Nivell d'avorriment del Critter
    int GetEstil() const; // M�tode privat per obtenir l'estil del Critter
    void PassaTemps(int temps = 1); // M�tode privat per avan�ar el temps del Critter
};

class Ogre {
public:
    // Constructor amb valors per defecte per a la salut
    Ogre(int health = 100);
    // M�tode perqu� l'Ogre parli sobre el seu estat
    void Parla();
    // M�tode per alimentar l'Ogre
    void Menja(int menjar = 4);
    // M�tode per jugar amb l'Ogre
    void Juga(int diversio = 4);
    // M�tode per mostrar l'estat de l'Ogre
    void MostraEstat();
    // M�tode per fer esport (no implementat)
    void FerEsport();
    // Sobrec�rrega de l'operador de sortida per a la classe Ogre
    friend ostream& operator<<(ostream& os, const Ogre& ogre);
    // Sobrec�rrega de l'operador d'assignaci� per a la classe Ogre
    Ogre& operator=(const Ogre& ogre);

private:
    int m_Salut; // Nivell de salut de l'Ogre
    int m_Enutjat; // Nivell d'enutjament de l'Ogre
    int GetEstil() const; // M�tode privat per obtenir l'estil de l'Ogre
    void PassaTemps(int temps = 1); // M�tode privat per avan�ar el temps de l'Ogre
};

class Granja {
public:
    // Constructor per a la classe Granja
    Granja();
    // M�tode per afegir un Critter a la granja
    void Agregar(const Critter& critter);
    // M�tode per afegir un Ogre a la granja
    void Agregar(const Ogre& ogre);
    // M�tode per mostrar tots els animals de la granja
    void MostrarAnimals() const;
    // M�tode per mostrar un animal espec�fic de la granja
    void MostrarAnimalEspecific(int indice) const;

private:
    vector<Critter> critters; // Vector que emmagatzema els Critters de la granja
    vector<Ogre> ogres; // Vector que emmagatzema els Ogres de la granja
};

#endif // CRITTER_H
