#include <iostream>
#include "FabulousMonster.h"

namespace MY {
	FabulousMonster::FabulousMonster(std::string name_, int health_, MonsterType type_)
		: AbstractMonster(name_, health_), type(type_) {}

	// Реалізація конструктора копіювання
	FabulousMonster::FabulousMonster(const FabulousMonster& other) : AbstractMonster(other) {
		type = other.type;
	}

	// Реалізація оператора присвоєння
	FabulousMonster& FabulousMonster::operator=(const FabulousMonster& other) {
		if (this != &other) {
			AbstractMonster::operator=(other);
			type = other.type;
		}
		return *this;
	}

	// Реалізація конструктора переміщення
	FabulousMonster::FabulousMonster(FabulousMonster&& other)
		: AbstractMonster(std::move(other)) {
		type = other.type;
	}

	// Реалізація оператора переміщення
	FabulousMonster& FabulousMonster::operator=(FabulousMonster&& other) {
		if (this != &other) {
			AbstractMonster::operator=(std::move(other));
			type = other.type;
		}
		return *this;
	}

	void FabulousMonster::printMonster() const {
		std::cout << "Казкове чудовисько: " << name << std::endl;
		std::cout << "Типу: ";
		switch (type) {
		case ORC:
			std::cout << "Орк";
			break;
		case TROLL:
			std::cout << "Троль";
			break;
		case ZOMBIE:
			std::cout << "Зомбі";
			break;
		case GOBLIN:
			std::cout << "Гоблін";
			break;
		default:
			std::cout << "Невідомого типу";
		}
		std::cout << std::endl;
		std::cout << "Здоров'я: " << health << std::endl;
		std::cout << "----------------------" << std::endl;
	}


} // namespace MY
