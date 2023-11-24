#include <iostream>
#include "FabulousMonster.h"

namespace MY {
	FabulousMonster::FabulousMonster(std::string name_, int health_, MonsterType type_)
		: AbstractMonster(name_, health_), type(type_) {}

	// ��������� ������������ ���������
	FabulousMonster::FabulousMonster(const FabulousMonster& other) : AbstractMonster(other) {
		type = other.type;
	}

	// ��������� ��������� ���������
	FabulousMonster& FabulousMonster::operator=(const FabulousMonster& other) {
		if (this != &other) {
			AbstractMonster::operator=(other);
			type = other.type;
		}
		return *this;
	}

	// ��������� ������������ ����������
	FabulousMonster::FabulousMonster(FabulousMonster&& other)
		: AbstractMonster(std::move(other)) {
		type = other.type;
	}

	// ��������� ��������� ����������
	FabulousMonster& FabulousMonster::operator=(FabulousMonster&& other) {
		if (this != &other) {
			AbstractMonster::operator=(std::move(other));
			type = other.type;
		}
		return *this;
	}

	void FabulousMonster::printMonster() const {
		std::cout << "������� ����������: " << name << std::endl;
		std::cout << "����: ";
		switch (type) {
		case ORC:
			std::cout << "���";
			break;
		case TROLL:
			std::cout << "�����";
			break;
		case ZOMBIE:
			std::cout << "����";
			break;
		case GOBLIN:
			std::cout << "�����";
			break;
		default:
			std::cout << "��������� ����";
		}
		std::cout << std::endl;
		std::cout << "������'�: " << health << std::endl;
		std::cout << "----------------------" << std::endl;
	}


} // namespace MY
