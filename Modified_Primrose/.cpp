// CIT125 Intro to C++ Luigi Robles
// 08-01-2020 Summer Term
// Ch.13 pg.467 Fig.13-6 Modified Primrose Auction House program
// Displays a buyer's name, premium,and item number

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	//declare and initialize variables
	const double RATE = 0.1; //named constant for Rate
	string name = "";
	int price = 0;
	double premium = 0.0;
	string itemNum = "";

	cout << "Buyer's name: ";
	getline(cin, name); //function call to get input from keyboard for Buyer's name
	cout << "Purchase price: ";
	cin >> price; //input for price
	cout << "Item number: ";
	getline(cin, itemNum);//function call to get input from keyboard for intem number

	premium = price * RATE; //calculate premium

	cout << fixed << setprecision(2);
	cout << "********Auction Summary******" << endl;
	cout << "Buyer: " << name << endl //output for name
		<< "Premium: $" << premium << endl //output calculated premium
		<< "Premium for item " << itemNum
		<< ": $" << premium << endl;
	return 0;
} //end of main
