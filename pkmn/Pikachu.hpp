#ifndef PIKACHU_HPP_
#define PIKACHU_HPP_
#include <iostream>
#include <algorithm> 

namespace pkmn {
    class Pikachu {
    public:
        Pikachu(std::string);
        const std::string species();
        const std::string type();
        const std::string name();
        unsigned int& health();
        bool fainted();

    private:
        std::string _species = "Pikachu";
        std::string _type = "Electric";
        std::string _name;
        unsigned int _health;
    };
}

#endif