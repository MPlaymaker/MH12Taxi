#include "TripManager.h"
#include <iostream>

using namespace std;

int main()
{
	std::cout << "Autenticate using user name and password..." << endl;

	//Add aunticate code


	//Create trip manager
	TripManager tripMgrObj;

	//location
	tripMgrObj.processLocationService();

	//Select cab
	tripMgrObj.processCabSelection();

	//Billing
	tripMgrObj.processBilling();

	//Payment
	tripMgrObj.processPayment();
}
