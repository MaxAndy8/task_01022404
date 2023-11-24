#pragma once
#include "AbstractMonster.h"
namespace MY {
	// ����, �� ����� �������
	class FabulousMonster : public AbstractMonster {
	public:
		// ������ �������� ��� ���� �������
		enum MonsterType {
			ORC,
			TROLL,
			ZOMBIE,
			GOBLIN
		};

		// ����������� �����
		FabulousMonster(std::string name, int health, MonsterType type);

		FabulousMonster(const FabulousMonster& other);
		FabulousMonster& operator=(const FabulousMonster& other);
		FabulousMonster(FabulousMonster&& other);
		FabulousMonster& operator=(FabulousMonster&& other);

		// ��������� ������������ ������ ��� ��������� ���������� ��� �������
		void printMonster() const override;

	private:
		MonsterType type;
	};

} // namespace MY






