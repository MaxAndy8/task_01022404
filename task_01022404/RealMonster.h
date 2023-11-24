#pragma once
#include "AbstractMonster.h"
namespace MY {
	// Клас, що описує монстра
	class RealMonster : public AbstractMonster {
	public:
		// Перелік констант для типів монстрів
		enum MonsterType {
			MUSCOVITE,
			BURYAT,
			CHECHEN,
			CHUVASH,
			KALMYK,
			DAGESTAN,
			TATAR
		};

		// Конструктор класу
		RealMonster(std::string name_, int health_, MonsterType type_, int birthYear_);

		RealMonster(const RealMonster& other);
		RealMonster& operator=(const RealMonster& other);
		RealMonster(RealMonster&& other);
		RealMonster& operator=(RealMonster&& other);

		// Реалізація абстрактного методу для виведення інформації про монстра
		void printMonster() const override;

	private:
		MonsterType type;
		int    birthYear;
	};

} // namespace MY






