#include "Pikachu.hpp"

pkmn::Pikachu::Pikachu(std::string pseudo)
{
    _name = pseudo;
    _health = 100;
}

const std::string pkmn::Pikachu::species()
{
    return _species;
}

const std::string pkmn::Pikachu::type()
{
    return _type;
}

const std::string pkmn::Pikachu::name()
{
    return _name;
}

unsigned int& pkmn::Pikachu::health()
{
    return _health;
}
bool pkmn::Pikachu::fainted() 
{
    if (_health == 0) {
        return true;
    }
    return false;
}
