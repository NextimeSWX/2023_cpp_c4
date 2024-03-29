#ifndef NURSE_HPP_
#define NURSE_HPP_
#include <algorithm>
#include <iostream>
#include "Charmander.hpp"
#include "Pikachu.hpp"

namespace pkmn {
class Nurse {
public:
    const std::string name() const;
    void              heal(Pikachu &pikachu);
    void              heal(Charmander &charmander);

private:
    std::string _name = "Joy";
};
}

#endif