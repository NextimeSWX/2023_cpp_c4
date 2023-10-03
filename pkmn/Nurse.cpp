#include "Nurse.hpp"
#include "Pikachu.hpp"

const std::string pkmn::Nurse::name() const
{
    return _name;
}

void pkmn::Nurse::heal(Pikachu &pikachu)
{
    if (pikachu.health() <= 50) {
        std::cout << "There there" << pikachu.name()
                  << ", you should feel way better now!" << std::endl;
    } else if (pikachu.health() > 50 && pikachu.health() < 100) {
        std::cout << "That should do it, " << pikachu.name() << "!"
                  << std::endl;
    } else {
        std::cout << "You already are in tip-top shape, " << pikachu.name()
                  << "!" << std::endl;
    }
    pikachu.health() = 100;
}
