#include "Charmander.hpp"
#include "Nurse.hpp"
#include "Pikachu.hpp"

void dump_charm(const pkmn::Charmander &charm)
{
    std::cout << charm.species() << " -- of type: " << charm.type()
              << " -- named: " << charm.name() << "-- hp " << charm.health()
              << std::endl;
}

int main(void)
{
    pkmn::Charmander Charm("Michelle");
	pkmn::Nurse nurse;

	Charm.health() -= 13;
	std::cout << Charm.health() << std::endl;
	nurse.heal(Charm);
	std::cout << Charm.health() << std::endl;

	pkmn::Pikachu pika("Daniel");

	pika.health() -= 13;
	std::cout << pika.health() << std::endl;
	nurse.heal(pika);
	std::cout << pika.health() << std::endl;
}