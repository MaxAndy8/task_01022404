#include <iostream>
#include "RealMonster.h"

namespace MY {
	RealMonster::RealMonster(std::string name_, int health_, MonsterType type_, int birthYear_)
		: AbstractMonster(name_, health_), type(type_), birthYear(birthYear_) {}

	// ��������� ������������ ���������
	RealMonster::RealMonster(const RealMonster& other) : AbstractMonster(other) {
		type = other.type;
	}

	// ��������� ��������� ���������
	RealMonster& RealMonster::operator=(const RealMonster& other) {
		if (this != &other) {
			AbstractMonster::operator=(other);
			type = other.type;
		}
		return *this;
	}

	// ��������� ������������ ����������
	RealMonster::RealMonster(RealMonster&& other)
		: AbstractMonster(std::move(other)) {
		type = other.type;
	}

	// ��������� ��������� ����������
	RealMonster& RealMonster::operator=(RealMonster&& other) {
		if (this != &other) {
			AbstractMonster::operator=(std::move(other));
			type = other.type;
		}
		return *this;
	}

	void RealMonster::printMonster() const {
		std::cout << "������� ����������: " << name << std::endl;
		std::cout << "��������: ";
		switch (type) {
		case MUSCOVITE:
			std::cout << "�������";
			break;
		case BURYAT:
			std::cout << "�����";
			break;
		case CHECHEN:
			std::cout << "�������";
			break;
		case CHUVASH:
			std::cout << "�����";
			break;
		case KALMYK:
			std::cout << "������";
			break;
		case DAGESTAN:
			std::cout << "�����������";
			break;
		case TATAR:
			std::cout << "�����";
			break;
		default:
			std::cout << "������� ������� ������ �����";
		}
		std::cout << std::endl;
		std::cout << "������'�: " << health << std::endl;
		std::cout << "г� ����������: " << birthYear << std::endl;
		std::cout << "----------------------" << std::endl;
	}


} // namespace MY





