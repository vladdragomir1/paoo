#include "proiect.hpp"
#include <iostream>
#include <cstring>

//initializeaza membrii din constructor
Carte::Carte(const char* t, int p) : pagini(p) {
    titlu = new char[strlen(t) + 1];
    strcpy(titlu, t);
}

//copy constructor
Carte::Carte(const Carte& other) : pagini(other.pagini) {
    titlu = new char[strlen(other.titlu) + 1];
    strcpy(titlu, other.titlu);
    std::cout << "copy constructor pt " << titlu << "\n";
}

//move constructor
Carte::Carte(Carte&& other) noexcept : titlu(other.titlu), pagini(other.pagini) {
    other.titlu = nullptr;
    other.pagini = 0;
    std::cout << "move constructor apelat\n";
}

//destructor - elibereaza memoria alocata pe heap
Carte::~Carte() {
    delete[] titlu;
    std::cout << "destructor apelat\n";
}

//setteri si getteri - incapsulare
void Carte::setTitlu(const char* t) {
    delete[] titlu;
    titlu = new char[strlen(t) + 1];
    strcpy(titlu, t);
}

void Carte::setPagini(int p) {
    pagini = p;
}

const char* Carte::getTitlu() const {
    return titlu;
}

int Carte::getPagini() const {
    return pagini;
}

void Carte::afiseaza() const {
    std::cout << "Carte: " << titlu << "Pagini: " << pagini << "\n";
}
