#include "ParcServices.h"
#include "Accommondations.h"
#include "Parcs.h"
#include <vector>
#include <string>
using namespace std;
void Parcs::setName(string nameName) {
	name = nameName;
}
string Parcs::getName()const {
	return name;
}
void Parcs::setAddress(string addressName) {
	address = addressName;
}
string Parcs::getAddress()const {
	return address;
}
void Parcs::setServices(ParcServices servicesSet) {
	services = servicesSet;
}
ParcServices Parcs::getServices()const {
	return services;
}
void Parcs::setAccommondations(vector<Accommondations> accommondationsSet) {
	accommondations = accommondationsSet;
}
vector<Accommondations> Parcs::getAccommondations()const {
	return accommondations;
}