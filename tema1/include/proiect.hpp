#pragma once
#include <iostream>
#include <cstring>

class Carte {
    private:
        char* titlu;
        int pagini;

    public:
        Carte(const char* t, int p);//constructor simplu
        Carte(const Carte& other);//copy constructor
        Carte(Carte&& other) noexcept;//move constructor
        ~Carte();//destructor

        void setTitlu(const char* t);
        void setPagini(int p);
        const char* getTitlu() const;
        int getPagini() const;

        void afiseaza() const;
};
