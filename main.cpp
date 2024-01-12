#include <iostream>

class Student {
protected:
    std::string name;
    int age;
    double averageGrade;

public:
    Student(const std::string& n, int a, double avg) : name(n), age(a), averageGrade(avg) {}

    void displayInfo() const {
        std::cout << "Name: " << name << "\nAge: " << age << "\nAverage Grade: " << averageGrade << std::endl;
    }
};

class Aspirant : public Student {
private:
    std::string thesisTopic;

public:
    Aspirant(const std::string& n, int a, double avg, const std::string& topic)
        : Student(n, a, avg), thesisTopic(topic) {}

    void displayInfo() const {
        Student::displayInfo();
        std::cout << "Thesis Topic: " << thesisTopic << std::endl;
    }
};

int main() {
    Student student("Bill Gates", 27,90.0);
    std::cout << "Student Information:\n";
    student.displayInfo();
    std::cout << "\n";

    Aspirant aspirant("Melinda Gates)", 35,88.5, "Research on Artificial Intelligence");
    std::cout << "Aspirant Information:\n";
    aspirant.displayInfo();

    return 0;
}