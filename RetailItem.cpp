#include <iostream>
#include <string>

using namespace std;
class RetailItem
{
private:
	string description;
	int unitsOnHand;
	double price;

public:
	RetailItem()
	{
		description = " ";
		unitsOnHand = 0;
		price = 0;
	}
	RetailItem(string desc, int qty, double cost)
	{
		description = desc;
		unitsOnHand = qty;
		price = cost;
	}
	string getDescription()
	{
	    return description;
	    }
	int getUnits()
	{
	    return unitsOnHand;
	    }
	double getPrice()
	{
	    return price;
	    }
	void SetDescription(string desc)
	{
	    description = desc;
	    }
	void SetUnits(int qty)
	{
	    unitsOnHand = qty;
	    }
	void SetPrice(double cost)
	{
	    price = cost;
	    }
};

int main()
{
	RetailItem Items[4];

	Items[1].SetDescription("Jacket        ");
	Items[1].SetUnits(12);
	Items[1].SetPrice(59.95);
	Items[2].SetDescription("Designer Jeans");
	Items[2].SetUnits(40);
	Items[2].SetPrice(34.95);
	Items[3].SetDescription("Shirt         ");
	Items[3].SetUnits(20);
	Items[3].SetPrice(24.95);


	RetailItem Item1("Jacket", 12, 59.95);
	RetailItem Item2("Designer Jeans", 40, 34.95);
	RetailItem Item3("Shirt", 20, 24.95);

	cout << "\t\tDescription" << "\t\tUnits On Hand" << "\t\tPrice" << endl;

	for (int i = 1; i <= 3; i++)
		cout << "Item #"<< i << "\t\t" << Items[i].getDescription() << "\t\t" <<
		Items[i].getUnits() << "\t\t\t" << Items[i].getPrice() << endl;

	return 0;
}
