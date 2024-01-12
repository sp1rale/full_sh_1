#include <iostream>
#include <string>

class Pet {
public:
    Pet(const std::string& name) : name(name) {}
    virtual void makeSound() const = 0;
    const std::string& getName() const {
        return name;
    }

private:
    std::string name;
};

class Dog : public Pet {
public:
    Dog(const std::string& name) : Pet(name) {}
    void makeSound() const override {
        std::cout << getName() << " voice-Woof!!!\n";
    }
};

class Cat : public Pet {
public:
    Cat(const std::string& name) : Pet(name) {}

    void makeSound() const override {
        std::cout << getName() << " says Meow...murrr!!!\n";
    }
};

class Parrot : public Pet {
public:
    Parrot(const std::string& name) : Pet(name) {}

    void makeSound() const override {
        std::cout << getName() << " says Hail!!!\n";
    }
};

int main() {
    Dog myDog("Blondi");
    Cat myCat("Simba");
    Parrot myParrot("Jasper");

    myDog.makeSound();
    myCat.makeSound();
    myParrot.makeSound();

    return 0;
}
