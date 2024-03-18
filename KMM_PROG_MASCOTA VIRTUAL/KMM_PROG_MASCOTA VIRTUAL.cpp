#include <iostream>
#include "Critter.h"

using namespace std;

int main() {
    Critter crit; // Creem una instància de l'objecte Critter
    Ogre unOgre; // Creem una instància de l'objecte Ogre
    int opcio;

    do {
        cout << "\nCuidador de Criatures\n\n"; // Mostra el títol del programa
        cout << "0 Sortir\n"; // Opció per sortir del programa
        cout << "1 Escoltar la teva criatura\n"; // Opció per escoltar la criatura
        cout << "2 Donar menjar a la teva criatura\n"; // Opció per donar menjar a la criatura
        cout << "3 Jugar amb la teva criatura\n"; // Opció per jugar amb la criatura
        cout << "4 Mostrar l'estat de la teva criatura\n"; // Opció per mostrar l'estat de la criatura
        cout << "5 Fer esport amb la teva criatura\n"; // Opció per fer esport amb la criatura
        cout << "6 Mostrar l'Ogre\n"; // Nova opció per interactuar amb l'Ogre
        cout << "7 Mostrar Granja\n"; // Nova opció per mostrar els animals a la granja
        cout << "8 Mostrar Animal Especific\n"; // Nova opció per mostrar un animal específic a la granja
        cout << "\nOpcio: "; // Sol·licita a l'usuari que introdueixi una opció
        cin >> opcio; // Llegeix l'opció introduïda per l'usuari

        switch (opcio) {
        case 0:
            cout << "Adeu.\n"; // Mostra un missatge d'acomiadament
            break;
        case 1:
            crit.Parla(); // Crida al mètode Parla de la criatura
            break;
        case 2:
            crit.Menja(); // Crida al mètode Menja de la criatura
            break;
        case 3:
            crit.Juga(); // Crida al mètode Juga de la criatura
            break;
        case 4:
            crit.MostraEstat(); // Crida al mètode MostraEstat de la criatura
            break;
        case 5:
            crit.FerEsport(); // Crida al mètode FerEsport de la criatura
            break;
        case 6:
            unOgre.Parla(); // Crida al mètode Parla de l'Ogre
            unOgre.MostraEstat(); // Opcional: Mostra la salut de l'Ogre, si el mètode existeix
            break;
        case 7:
        {
            Granja granja; // Crea una instància de la classe Granja
            granja.Agregar(crit); // Afegeix la criatura a la granja
            granja.Agregar(unOgre); // Afegeix l'Ogre a la granja
            granja.MostrarAnimals(); // Mostra els animals a la granja
        }
        break;
        case 8:
        {
            int indice;
            cout << "Introdueix l'index de l'animal a mostrar: "; // Sol·licita a l'usuari que introdueixi l'índex de l'animal
            cin >> indice; // Llegeix l'índex introduït per l'usuari
            Granja granja; // Crea una instància de la classe Granja
            granja.Agregar(crit); // Afegeix la criatura a la granja
            granja.Agregar(unOgre); // Afegeix l'Ogre a la granja
            granja.MostrarAnimalEspecific(indice); // Mostra un animal específic a la granja
        }
        break;
        default:
            cout << "\nHo sentim, pero " << opcio << " no es una opcio valida.\n"; // Mostra un missatge d'error si l'opció no és vàlida
            break;
        }
    } while (opcio != 0); // Continua fins que l'usuari seleccioni l'opció de sortir

    return 0;
}
