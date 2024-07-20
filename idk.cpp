#include <iostream>

using namespace std;

class Car {
private:
    int _year_model;
    string rttake;    
    int _speed;      

public:
   
    
    Car(int year_model, string rrttake, string _make) {
        _year_model = _year_model;
        rttake = _make;
        _speed = 0; 
    }


    void accelerate() {
        _speed += 5; 
    }


    void brake() {
        _speed -= 5; 
    }

    
    int getSpeed() {
        return _speed; 
    }

    void _init_(Car)
    {
        
    }

};

int main() {
    setlocale(LC_ALL, "RU");
    Car car(2024, "Tesla", "ElonMusk");

  
    for (int i = 0; i < 10; ++i) {
        car.accelerate();
        cout << "Скорость машины: " << car.getSpeed() << " км в час" << endl;
    }


    for (int i = 0; i < 10; ++i) {
        car.brake();
        cout << "Скорость теперь: " << car.getSpeed() << " км в час" << endl;
    }

    return 0;
}

