#include "Pikachu.hpp"

void dump_pika(pkmn::Pikachu &pika) {
	std::cout << pika.species() << " -- of type: "
		  << pika.type() << " -- named: "
		  << pika.name() << "-- hp " << pika.health()
		  << std::endl;

	std::string_view given_name{pika.name()};

	auto numberof_e{std::count(given_name.begin(),
				   given_name.end(),
				   'e')};
	std::cout << "its name contains " << numberof_e << " time·s the letter e.";
}

int main(void) {
	pkmn::Pikachu pika("sbeeve");

	dump_pika(pika);
	pika.health() -= 10;
	dump_pika(pika);
	pika.health() -= 90;
	std::cout << "has fainted? " << ((pika.fainted()) ? "yes" : "no") << "\n";
}