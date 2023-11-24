#include <iostream>
#include "FabulousMonster.h"
#include "RealMonster.h"

int main() {

    system("chcp 1251>nul");

    // Ініціалізація монстрів з використанням auto і decltype
    auto orc = MY::FabulousMonster("Grommash", 100, MY::FabulousMonster::MonsterType::ORC);
    decltype(orc) troll("Grobb", 120, MY::FabulousMonster::MonsterType::TROLL);

    // Виведення інформації про монстрів
    std::cout << orc << std::endl;    
    std::cout << troll << std::endl;

    // Додавання нового монстра за допомогою decltype
    decltype(orc) zombie("Zed", 80, MY::FabulousMonster::MonsterType::ZOMBIE);    
    std::cout << zombie << std::endl;



    auto m1 = MY::RealMonster("Александр Смирнов", 89, MY::RealMonster::MonsterType::MUSCOVITE, 1985);
    decltype(MY::RealMonster("", 0, MY::RealMonster::MonsterType::BURYAT, 0)) m2 = MY::RealMonster("Батор Доржиев"    , 99, MY::RealMonster::MonsterType::BURYAT   , 2000);
    decltype(auto) m3 = MY::RealMonster("Заур Хаджиев"     , 65, MY::RealMonster::MonsterType::CHECHEN  , 1975);
    auto m4 = MY::RealMonster("Антоy Шупашкаров" , 85, MY::RealMonster::MonsterType::CHUVASH  , 2001);
    auto m5 = MY::RealMonster("Ерлан Батуров"    , 95, MY::RealMonster::MonsterType::KALMYK   , 1995);
    auto m6 = MY::RealMonster("Магомед Магомедов", 56, MY::RealMonster::MonsterType::DAGESTAN , 1999);
    auto m7 = MY::RealMonster("Рустем Якупов"    , 36, MY::RealMonster::MonsterType::TATAR    , 2002);

    std::cout << m1 << std::endl;
    std::cout << m2 << std::endl;
    std::cout << m3 << std::endl;
    std::cout << m4 << std::endl;
    std::cout << m5 << std::endl;
    std::cout << m6 << std::endl;
    std::cout << m7 << std::endl;




















    return 0;
}