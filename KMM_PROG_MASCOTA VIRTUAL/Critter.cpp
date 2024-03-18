#include "Critter.h"

Critter::Critter(int gana, int avorriment) {
    m_Gana = gana; // Inicialitza l'atribut de gana amb el valor rebut com a paràmetre
    m_Avorriment = avorriment; // Inicialitza l'atribut d'avorriment amb el valor rebut com a paràmetre
}

void Critter::Parla() {
    cout << "Hola, soc la teva mascota!" << endl; // Imprimeix un missatge de salutació
    cout << "Em trobo " << (m_Gana >= 8 ? "molt famolenc" : (m_Gana >= 5 ? "famolenc" : "satisfet")) << " i " << (m_Avorriment >= 8 ? "molt avorrit" : (m_Avorriment >= 5 ? "avorrit" : "entretingut")) << "." << endl; // Imprimeix l'estat de gana i avorriment basat en els seus valors
}

void Critter::Menja(int menjar) {
    cout << "Nyam nyam nyam... menjant!" << endl; // Imprimeix un missatge indicant que l'animal està menjant
    m_Gana -= menjar; // Redueix el nivell de gana
    if (m_Gana < 0)
        m_Gana = 0; // Assegura que el nivell de gana no sigui negatiu
    PassaTemps(); // Actualitza el temps
}

void Critter::Juga(int diversio) {
    cout << "Yupi! Anem a jugar!" << endl; // Imprimeix un missatge indicant que l'animal està jugant
    m_Avorriment -= diversio; // Redueix el nivell d'avorriment
    if (m_Avorriment < 0)
        m_Avorriment = 0; // Assegura que el nivell d'avorriment no sigui negatiu
    PassaTemps(); // Actualitza el temps
}

void Critter::MostraEstat() {
    cout << "Nivell actual de gana: " << m_Gana << endl; // Imprimeix el nivell actual de gana
    cout << "Nivell actual d'avorriment: " << m_Avorriment << endl; // Imprimeix el nivell actual d'avorriment
    cout << "Adreca d'aquest objecte Critter: " << this << endl; // Imprimeix l'adreça d'aquest objecte Critter
}

void Critter::FerEsport() {
    cout << "La mascota fa esport." << endl; // Imprimeix un missatge indicant que l'animal està fent esport
}

int Critter::GetEstil() const {
    return (m_Gana + m_Avorriment); // Retorna la suma del nivell de gana i avorriment
}

void Critter::PassaTemps(int temps) {
    m_Gana += temps; // Incrementa el nivell de gana
    m_Avorriment += temps; // Incrementa el nivell d'avorriment
}

ostream& operator<<(ostream& os, const Critter& critter) {
    os << "Nivell de gana: " << critter.m_Gana << ", Nivell d'avorriment: " << critter.m_Avorriment; // Imprimeix el nivell de gana i avorriment de l'animal
    return os;
}

Critter& Critter::operator=(const Critter& critter) {
    if (this != &critter) { // Comprova si no és el mateix objecte
        m_Gana = critter.m_Gana; // Copia el nivell de gana
        m_Avorriment = critter.m_Avorriment; // Copia el nivell d'avorriment
    }
    return *this; // Retorna l'objecte actual
}

Ogre::Ogre(int health) : m_Salut(health), m_Enutjat(0) {} // Constructor d'ogre amb un paràmetre d'energia i inicialitzant l'enutjament a 0

void Ogre::Parla() {
    cout << "Hola, soc l'ogre!" << endl; // Imprimeix un missatge de salutació de l'ogre
    cout << "Em trobo " << (m_Salut >= 80 ? "sano" : (m_Salut >= 50 ? "ferit" : "malalt")) << " i " << (m_Enutjat >= 8 ? "molt enfadat" : (m_Enutjat >= 5 ? "enfadat" : "tranquil")) << "." << endl; // Imprimeix l'estat de salut i enutjament de l'ogre basat en els seus valors
}

void Ogre::Menja(int menjar) {
    cout << "Menjant... ara estic menys famolenc!" << endl; // Imprimeix un missatge indicant que l'ogre està menjant
    m_Salut += menjar; // Incrementa el nivell de salut
    if (m_Salut > 100)
        m_Salut = 100; // Assegura que el nivell de salut no superi el límit
    PassaTemps(); // Actualitza el temps
}

void Ogre::Juga(int diversio) {
    cout << "Jugant... aixo es divertit!" << endl; // Imprimeix un missatge indicant que l'ogre està jugant
    m_Enutjat -= diversio; // Redueix el nivell d'enutjament
    if (m_Enutjat < 0)
        m_Enutjat = 0; // Assegura que el nivell d'enutjament no sigui negatiu
    PassaTemps(); // Actualitza el temps
}

void Ogre::MostraEstat() {
    cout << "Nivell actual de salut: " << m_Salut << endl; // Imprimeix el nivell actual de salut de l'ogre
    cout << "Nivell actual d'enutjament: " << m_Enutjat << endl; // Imprimeix el nivell actual d'enutjament de l'ogre
    cout << "Adreca d'aquest objecte Ogre: " << this << endl; // Imprimeix l'adreça d'aquest objecte Ogre
}

void Ogre::FerEsport() {
    cout << "L'ogre fa exercici." << endl; // Imprimeix un missatge indicant que l'ogre està fent exercici
}

int Ogre::GetEstil() const {
    return (m_Salut + m_Enutjat); // Retorna la suma del nivell de salut i enutjament
}

void Ogre::PassaTemps(int temps) {
    m_Salut -= temps; // Redueix el nivell de salut
    m_Enutjat += temps; // Incrementa el nivell d'enutjament
}

ostream& operator<<(ostream& os, const Ogre& ogre) {
    os << "Nivell de salut: " << ogre.m_Salut << ", Nivell d'enutjament: " << ogre.m_Enutjat; // Imprimeix el nivell de salut i enutjament de l'ogre
    return os;
}

Ogre& Ogre::operator=(const Ogre& ogre) {
    if (this != &ogre) { // Comprova si no és el mateix objecte
        m_Salut = ogre.m_Salut; // Copia el nivell de salut
        m_Enutjat = ogre.m_Enutjat; // Copia el nivell d'enutjament
    }
    return *this; // Retorna l'objecte actual
}

Granja::Granja() {} // Constructor per defecte de la classe Granja

void Granja::Agregar(const Critter& critter) {
    critters.push_back(critter); // Afegir un Critter a la granja
}

void Granja::Agregar(const Ogre& ogre) {
    ogres.push_back(ogre); // Afegir un Ogre a la granja
}

void Granja::MostrarAnimals() const {
    if (critters.empty() && ogres.empty()) { // Comprova si la granja està buida
        cout << "La granja no te cap animal." << endl; // Imprimeix un missatge indicant que la granja està buida
        return;
    }

    cout << "Animals a la granja:" << endl;

    cout << "\nCritters:" << endl;
    for (size_t i = 0; i < critters.size(); ++i) {
        cout << "Critter " << i + 1 << ": " << critters[i] << endl; // Imprimeix informació de cada Critter a la granja
    }

    cout << "\nOgres:" << endl;
    for (size_t i = 0; i < ogres.size(); ++i) {
        cout << "Ogre " << i + 1 << ": " << ogres[i] << endl; // Imprimeix informació de cada Ogre a la granja
    }
}

void Granja::MostrarAnimalEspecific(int indice) const {
    if (indice >= 0 && indice < critters.size()) {
        cout << "Critter en la posicio " << indice + 1 << ": " << critters[indice] << endl; // Mostra informació d'un Critter específic
    }
    else if (indice >= critters.size() && indice < critters.size() + ogres.size()) {
        cout << "Ogre en la posicio " << indice - critters.size() + 1 << ": " << ogres[indice - critters.size()] << endl; // Mostra informació d'un Ogre específic
    }
    else {
        cout << "L'index especificat esta fora del rang de la granja." << endl; // Imprimeix un missatge d'error si l'índex està fora del rang
    }
}
