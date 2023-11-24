#pragma once
#include "AbstractMonster.h"
namespace MY {
	// Клас, що описує монстра
	class FabulousMonster : public AbstractMonster {
	public:
		// Перелік констант для типів монстрів
		enum MonsterType {
			ORC,
			TROLL,
			ZOMBIE,
			GOBLIN
		};

		// Конструктор класу
		FabulousMonster(std::string name, int health, MonsterType type);

		FabulousMonster(const FabulousMonster& other);
		FabulousMonster& operator=(const FabulousMonster& other);
		FabulousMonster(FabulousMonster&& other);
		FabulousMonster& operator=(FabulousMonster&& other);

		// Реалізація абстрактного методу для виведення інформації про монстра
		void printMonster() const override;

	private:
		MonsterType type;
	};

} // namespace MY






