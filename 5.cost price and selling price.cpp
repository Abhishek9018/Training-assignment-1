#include <iostream>
using namespace std;
int main() {
	
	float costPricePerDozen, sellingPricePerDozen;
	float costPricePerBanana, sellingPricePerBanana;
	float totalcost, totalselling, profitLoss;
	
	//Input from users
	cout << "Enter cost price per dozen in bananas: ";
	cin >> costPricePerDozen;
	
	cout << "Enter selling price per dozen in bananas: ";
	cin >> sellingPricePerDozen;
	
	//converting per dozen price into per banana price
	costPricePerBanana = costPricePerDozen / 12;
	sellingPricePerBanana = sellingPricePerDozen / 12;
	
	//selling 25 bananas
	totalcost = costPricePerBanana * 25;
	totalselling = sellingPricePerBanana * 25;
	
	profitLoss = totalselling - totalcost;
	
	
	//check profit or loss
	if( profitLoss > 0 )
	    cout << "profitloss: " << profitLoss << endl;
	else if( profitLoss < 0 )
	    cout << "loss: " << -profitLoss << endl;
	else
	    cout << "no profit, no loss. " << endl;
	    
	return 0;
}
