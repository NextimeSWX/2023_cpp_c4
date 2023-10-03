#ifndef PIKACHU_HPP_
#define PIKACHU_HPP_
#include <algorithm>
#include <iostream>

namespace pkmn {
class Pikachu {
public:
    Pikachu(std::string);
    const std::string   species() const;
    const std::string   type() const;
    const std::string   name() const;
    const unsigned int &health() const;
    unsigned int       &health();
    bool                fainted();

private:
    std::string  _species = "Pikachu";
    std::string  _type    = "Electric";
    std::string  _name;
    unsigned int _health;
};
}

#endif