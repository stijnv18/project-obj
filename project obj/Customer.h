#pragma once
#include <string>

class Customer {
public:
    void setName(std::string nameSet);
    std::string getName() const;
    void setAddress(std::string addressSet);
    std::string getAddress() const;
    void setMail(std::string mailSet);
    std::string getMail() const;
private:
    std::string name;
    std::string address;
    std::string mail;
};