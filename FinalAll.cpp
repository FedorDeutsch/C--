#include <iostream>
#include <string>

using namespace std;

// Базовый класс Animal
class Animal {
public:
    int id;
    string name;
    string type;
    float food_count;

    Animal(int id, string name, string type, float food_count) {
        this->id = id;
        this->name = name;
        this->type = type;
        this->food_count = food_count;
    }

    float getFoodRequirement() const {
        return food_count;
    }
};

// Класс хищные
class EatMeat : public Animal {
public:
    EatMeat(int id, string name, float food_count)
        : Animal(id, name, "Хищные", food_count) {}
};

// Класс Всеядные
class EatAll : public Animal {
public:
    EatAll(int id, string name, float food_count)
        : Animal(id, name, "Всеядные", food_count) {}
};

// Класс Травоядные
class EatGrass : public Animal {
public:
    EatGrass(int id, string name, float food_count)
        : Animal(id, name, "Травоядные", food_count) {}
};

// Функция для сортировки массива животных
void sortAnimals(Animal animals[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {
            if (animals[j].getFoodRequirement() < animals[j + 1].getFoodRequirement() ||
                (animals[j].getFoodRequirement() == animals[j + 1].getFoodRequirement() && animals[j].name > animals[j + 1].name)) {
                Animal temp = animals[j];
                animals[j] = animals[j + 1];
                animals[j + 1] = temp;
            }
        }
    }
}

// Функция для вывода списка животных
void printAnimals(Animal animals[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << animals[i].id << ", " << animals[i].name << ", " << animals[i].type << ", " << animals[i].getFoodRequirement() << endl;
    }
}

// Функция для вывода первых 5 имен животных
void printnames(Animal animals[], int size) {
    for (int i = 0; i < size && i < 5; ++i) {
        cout << animals[i].name << endl;
    }
}

// Функция для вывода последних 3 идентификаторов животных
void printid(Animal animals[], int size) {
    for (int i = size - 3; i < size; ++i) {
        if (i >= 0) {
            cout << animals[i].id << endl;
        }
    }
}

int main() {
    int size = 6;
    Animal animals[] = {
        EatMeat(1, "Акула", 15.0),
        EatGrass(2, "Жираф", 5.0),
        EatAll(3, "Медведь", 7.5),
        EatMeat(4, "Лев", 15.0),
        EatGrass(5, "Корова", 5.0),
        EatAll(6, "Курица", 7.5)
    };

    sortAnimals(animals, size);

    cout << "Все животные сортированные по количеству пищи и имени:" << endl;
    printAnimals(animals, size);

    cout << "\nПервые 5 имен:" << endl;
    printnames(animals, size);

    cout << "\nПоследние 3 ID:" << endl;
    printid(animals, size);

    return 0;
}
