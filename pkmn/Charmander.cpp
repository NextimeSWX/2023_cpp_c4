#include "Charmander.hpp"
#include "Nurse.hpp"
#include "Pikachu.hpp"

pkmn::Charmander::Charmander(std::string pseudo)
{
    _name   = pseudo;
    _health = 100;
}

const std::string pkmn::Charmander::species() const
{
    return _species;
}

const std::string pkmn::Charmander::type() const
{
    return _type;
}

const std::string pkmn::Charmander::name() const
{
    return _name;
}

const unsigned int &pkmn::Charmander::health() const
{
    return _health;
}

unsigned int &pkmn::Charmander::health()
{
    return _health;
}
bool pkmn::Charmander::fainted()
{
    if (_health == 0) {
        return true;
    }
    return false;
}
