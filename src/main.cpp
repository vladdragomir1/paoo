#include "proiect.hpp"
#include <iostream>

int main() {
    
    Carte c1("De veghe in lanul de secara ", 513);
    c1.afiseaza();
    std::cout << "\n";

    std::cout << "copy cosntructor\n";
    Carte c2 = c1;
    c2.setTitlu("Copie carte ");
    c2.setPagini(520);
    c2.afiseaza();
    std::cout << "\n";

    {
        Carte c3("AI in viata de zi cu zi ", 292);
        Carte c4 = c3;
        c4.afiseaza();
    } // aici se apelează destructorii pentru c3 și c4

    std::cout << "move constructor\n";
    Carte c5 = std::move(c1);
    c5.afiseaza();
    std::cout << "\n";

    std::cout << "move din temporar\n";
    Carte c6 = Carte("Istoria noastra ", 1002);
    c6.afiseaza();

    return 0;
}
