#ifndef CHARMANDER_HPP_
#define CHARMANDER_HPP_
#include <algorithm>
#include <iostream>

namespace pkmn {
class Charmander {
public:
    Charmander(std::string);
    const std::string   species() const;
    const std::string   type() const;
    const std::string   name() const;
    const unsigned int &health() const;
    unsigned int       &health();
    bool                fainted();

private:
    std::string  _species = "Charmander";
    std::string  _type    = "Fire";
    std::string  _name;
    unsigned int _health;
};
} // namespace pkmn

#endif