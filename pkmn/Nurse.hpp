#ifndef NURSE_HPP_
#define NURSE_HPP_
#include "Pikachu.hpp"
#include <algorithm>
#include <iostream>

namespace pkmn {
    class Nurse {
    public:
        const std::string name() const;
        void              heal(Pikachu &pikachu);

    private:
        std::string _name = "Joy";
};
} 
#endif