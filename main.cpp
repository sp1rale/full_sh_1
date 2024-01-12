#include <iostream>
#include <string>

class Passport {
public:
    Passport(const std::string& full_name, const std::string& date_of_birth, const std::string& passport_number)
        : full_name(full_name), date_of_birth(date_of_birth), passport_number(passport_number) {}

    void display_info() const {
        std::cout << "Full Name: " << full_name << "\nDate of Birth: " << date_of_birth
            << "\nPassport Number: " << passport_number << std::endl;
    }

private:
    std::string full_name;
    std::string date_of_birth;
    std::string passport_number;
};

class ForeignPassport : public Passport {
public:
    ForeignPassport(const std::string& full_name, const std::string& date_of_birth, const std::string& passport_number,
        const std::string& visa_info, const std::string& foreign_passport_number)
        : Passport(full_name, date_of_birth, passport_number), visa_info(visa_info),
        foreign_passport_number(foreign_passport_number) {}

   

private:
    std::string visa_info;
    std::string foreign_passport_number;
};

int main() {
    Passport passport1("Jake Seint", "1995-05-07", "745466179");
    passport1.display_info();

    std::cout << "\n";

    ForeignPassport foreign_passport1("Linda Stone", "1995-05-15", "797362220", "Tourist Visa", "FP987654");
    foreign_passport1.display_info();

    return 0;
}

