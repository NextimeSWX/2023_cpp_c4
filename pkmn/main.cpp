#include "Pikachu.hpp"
#include "Nurse.hpp"

int main(void) {
	pkmn::Pikachu pika("Daniel");
	pkmn::Nurse nurse;

	pika.health() -= 13;
	std::cout << pika.health() << std::endl;
	nurse.heal(pika);
	std::cout << pika.health() << std::endl;
}