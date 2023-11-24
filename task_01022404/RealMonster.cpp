#include <iostream>
#include "RealMonster.h"

namespace MY {
	RealMonster::RealMonster(std::string name_, int health_, MonsterType type_, int birthYear_)
		: AbstractMonster(name_, health_), type(type_), birthYear(birthYear_) {}

	// Реалізація конструктора копіювання
	RealMonster::RealMonster(const RealMonster& other) : AbstractMonster(other) {
		type = other.type;
	}

	// Реалізація оператора присвоєння
	RealMonster& RealMonster::operator=(const RealMonster& other) {
		if (this != &other) {
			AbstractMonster::operator=(other);
			type = other.type;
		}
		return *this;
	}

	// Реалізація конструктора переміщення
	RealMonster::RealMonster(RealMonster&& other)
		: AbstractMonster(std::move(other)) {
		type = other.type;
	}

	// Реалізація оператора переміщення
	RealMonster& RealMonster::operator=(RealMonster&& other) {
		if (this != &other) {
			AbstractMonster::operator=(std::move(other));
			type = other.type;
		}
		return *this;
	}

	void RealMonster::printMonster() const {
		std::cout << "Реальне чудовисько: " << name << std::endl;
		std::cout << "Етнічність: ";
		switch (type) {
		case MUSCOVITE:
			std::cout << "Москаль";
			break;
		case BURYAT:
			std::cout << "Бурят";
			break;
		case CHECHEN:
			std::cout << "Чеченць";
			break;
		case CHUVASH:
			std::cout << "Чуваш";
			break;
		case KALMYK:
			std::cout << "Калмик";
			break;
		case DAGESTAN:
			std::cout << "Дагестанець";
			break;
		case TATAR:
			std::cout << "Татар";
			break;
		default:
			std::cout << "Росіянин невідомої етнічної групи";
		}
		std::cout << std::endl;
		std::cout << "Здоров'я: " << health << std::endl;
		std::cout << "Рік народження: " << birthYear << std::endl;
		std::cout << "----------------------" << std::endl;
	}


} // namespace MY





