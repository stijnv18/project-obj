#include <string>
#include "Customer.h"
#include "Parcs.h"
#include <vector>
#include "VacationParcs.h"
using namespace std;
//function 1 GET name
string VacationParcs::getName() const {
    return name;
}
//function 2 SET name
void VacationParcs::setName(string VPname) {
    name = VPname;
}
//function 3 GET address
string VacationParcs::getAddress() const {
    return address;
}
//function 4 SET address
void VacationParcs::setAddress(string VPaddress) {
    address = VPaddress;
}
//function 4 GET VAT
string VacationParcs::getVAT() const {
    return VAT;
}
//function 5 SET VAT
void VacationParcs::setVAT(string VPVAT) {
    VAT = VPVAT;
}
//function 6 GET parcs
vector<Parcs> VacationParcs::getParcs() const {
    return parcs;
}
//function 7 SET parcs
void VacationParcs::setParcs(vector<Parcs> VPparcs) {
    parcs = VPparcs;
}
//function 8 GET parcs
vector<Customer> VacationParcs::getCustomers() const {
    return customers;
}
//function 9 SET parcs
void VacationParcs::setCustomers(vector<Customer> VPcustomers) {
    customers = VPcustomers;
}