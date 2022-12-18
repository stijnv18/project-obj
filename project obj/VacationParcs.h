#pragma once
#include <string>
#include "Customer.h"
#include "Parcs.h"
#include <vector>

class VacationParcs
{
public:
    //function 1 GET name
    std::string getName() const;
    //function 2 SET name
    void setName(std::string VPname);
    //function 3 GET address
    std::string getAddress() const;
    //function 4 SET address
    void setAddress(std::string VPaddress);
    //function 4 GET VAT
    std::string getVAT() const;
    //function 5 SET VAT
    void setVAT(std::string VPVAT);
    //function 6 GET parcs
    std::vector<Parcs> getParcs() const;
    //function 7 SET parcs
    void setParcs(std::vector<Parcs> VPparcs);
    //function 8 GET parcs
    std::vector<Customer> getCustomers() const;
    //function 9 SET parcs
    void setCustomers(std::vector<Customer> VPcustomers);

    friend std::ostream& operator<<(std::ostream& os, const VacationParcs& parcs)
    {
        os << "," << parcs.name;
        os << "," << parcs.address;
        os << "," << parcs.VAT;
        os << ",";
        for (const auto& parc : parcs.parcs)
        {
            os << parc << std::endl;
        }
        os << ",";
        for (const auto& customer : parcs.customers)
        {
            os << customer;
        }
        return os;
    }

    // Overload the >> operator for VacationParcs
    friend std::istream& operator>>(std::istream& is, VacationParcs& parcs)
    {
        is >> parcs.name;
        is >> parcs.address;
        is >> parcs.VAT;
        int numParcs;
        is >> numParcs;
        parcs.parcs.resize(numParcs);
        for (auto& parc : parcs.parcs)
        {
            is >> parc;
        }
        int numCustomers;
        is >> numCustomers;
        parcs.customers.resize(numCustomers);
        for (auto& customer : parcs.customers)
        {
            is >> customer;
        }
        return is;
    }


private:
    std::string name;
    std::string address;
    std::string VAT;
    std::vector<Parcs> parcs;
    std::vector<Customer> customers;
};