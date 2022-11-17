#include "Customer.h"
#include <string>
using namespace std;

void Customer::setName(string nameSet) {
    name = nameSet;
}

string Customer::getName() const {
    return name;
}

void Customer::setAddress(string addressSet) {
    address = addressSet;
}

string Customer::getAddress() const {
    return address;
}

void Customer::setMail(string mailSet) {
    mail = mailSet;
}

string Customer::getMail() const {
    return mail;
}