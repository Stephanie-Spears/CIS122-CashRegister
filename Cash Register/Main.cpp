#include <iostream>
#include <time.h>

using namespace std;

int main() {
	

	double dItemPrice;
	int iAge;
	int iItemNum;
	double dTotal = 0;


	cout << "Customer Age: ";
	cin >> iAge;



	cout << "Enter number of items: ";
	cin >> iItemNum;

	cout << '\n';

	{
	while (iItemNum > 0)
	{
		cout << "Enter Item Price: ";
		cin >> dItemPrice;
		cout << '\n' ;
	--iItemNum;


	if (iAge >= 65)

	{
		dItemPrice = dItemPrice - 1.00;
	};



	cout << dItemPrice << '\n' ;
	dTotal = dTotal + dItemPrice;
	}
	cout << '\n';

	








		

		cout << dTotal << '\n';
		cout << "Thank you, loyal shopper!" << '\n' ;
		system("pause");
	}
}
