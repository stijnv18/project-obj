#pragma once
#include <string>
#include <fstream>
#include <iostream>
class Customer {
public:
    void setName(std::string nameSet);
    std::string getName() const;
    void setAddress(std::string addressSet);
    std::string getAddress() const;
    void setMail(std::string mailSet);
    std::string getMail() const;
    friend std::ostream& operator<<(std::ostream& out, const Customer& obj) {
        out << obj.name << ',' << obj.address<<','<<obj.mail;
        return out;
    }
    friend std::istream& operator>>(std::istream& in, Customer& obj) {
        std::getline(in, obj.name, ','); 
        //in >> std::ws;  // std::ws skips leading whitespace
        std::getline(in, obj.address, ',');
        std::getline(in, obj.mail);
        return in;

    }
private:
    std::string name;
    std::string address;
    std::string mail;
};