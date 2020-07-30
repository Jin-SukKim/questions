//손익분기점
#include <iostream>
#include <math.h>

using namespace std;

int main() {
	//고정비용(임대료,재산세,보험료 등), 가변비용(인건비, 재료비 등), 판매비용, 총 비용, 수익, 판매량
	long long int fixed, variable, sales, total = 0, income = 0, rate = 0; 
	cin >> fixed >> variable >> sales;

	//breakeven point = fixed / (1 - variable / sales)
	if (sales > variable && fixed != 0) {
		rate = fixed / (sales - variable) + 1;
	}
	else if (fixed == 0 && sales > variable)
		rate++;
	else { // if there is no BEP
		rate = -1;
	}

	cout << rate;
	return 0;
}