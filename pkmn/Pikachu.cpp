#include "Pikachu.hpp"
#include "Nurse.hpp"

pkmn::Pikachu::Pikachu(std::string pseudo)
{
    _name   = pseudo;
    _health = 100;
}

const std::string pkmn::Pikachu::species() const
{
    return _species;
}

const std::string pkmn::Pikachu::type() const
{
    return _type;
}

const std::string pkmn::Pikachu::name() const
{
    return _name;
}

const unsigned int &pkmn::Pikachu::health() const
{
    return _health;
}

unsigned int &pkmn::Pikachu::health()
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
