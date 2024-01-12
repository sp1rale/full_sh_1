#include <iostream>

class Transport {
public:
    virtual double calculateTime(double distance) const = 0;
    virtual double calculateCost(double weight) const = 0;
};
class Car : public Transport {
public:
    double calculateTime(double distance) const override {
        return distance / 60.0;
    }

    double calculateCost(double weight) const override {
        return weight * 0.10;
    }
};

class Bicycle : public Transport {
public:
    double calculateTime(double distance) const override {
        return distance / 20.0;
    }

    double calculateCost(double weight) const override {
        return 0.0;
    }
};

class Cart : public Transport {
public:
    double calculateTime(double distance) const override {
        return distance / 10.0;
    }

    double calculateCost(double weight) const override {
        return weight * 0.05;
    }
};

int main() {
    Car car;
    Bicycle bicycle;
    Cart cart;

    double distance = 100.0;  
    double weight = 50.0;   

    std::cout << "Car:\n";
    std::cout << "Time: " << car.calculateTime(distance) << " hours\n";
    std::cout << "Cost: $" << car.calculateCost(weight) << "\n\n";

    std::cout << "Bicycle:\n";
    std::cout << "Time: " << bicycle.calculateTime(distance) << " hours\n";
    std::cout << "Cost: $" << bicycle.calculateCost(weight) << "\n\n";

    std::cout << "Cart:\n";
    std::cout << "Time: " << cart.calculateTime(distance) << " hours\n";
    std::cout << "Cost: $" << cart.calculateCost(weight) << "\n";

    return 0;
}