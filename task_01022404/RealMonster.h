#pragma once
#include "AbstractMonster.h"
namespace MY {
	// ����, �� ����� �������
	class RealMonster : public AbstractMonster {
	public:
		// ������ �������� ��� ���� �������
		enum MonsterType {
			MUSCOVITE,
			BURYAT,
			CHECHEN,
			CHUVASH,
			KALMYK,
			DAGESTAN,
			TATAR
		};

		// ����������� �����
		RealMonster(std::string name_, int health_, MonsterType type_, int birthYear_);

		RealMonster(const RealMonster& other);
		RealMonster& operator=(const RealMonster& other);
		RealMonster(RealMonster&& other);
		RealMonster& operator=(RealMonster&& other);

		// ��������� ������������ ������ ��� ��������� ���������� ��� �������
		void printMonster() const override;

	private:
		MonsterType type;
		int    birthYear;
	};

} // namespace MY






