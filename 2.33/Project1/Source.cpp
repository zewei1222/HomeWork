#include <iostream>
using namespace std;

int main() {
	double totalMileage, costPerLiterGallon, mileagePerLiterGallon, parkingFee, tollFee;

	// 輸入資訊
	cout << "請輸入一整天的總里程數 (公里)：";
	cin >> totalMileage;

	cout << "請輸入汽油一公升/加侖的價格 (元)：";
	cin >> costPerLiterGallon;

	cout << "請輸入平均一公升/加侖能行駛多少公里：";
	cin >> mileagePerLiterGallon;

	cout << "請輸入一天的停車費用 (元)：";
	cin >> parkingFee;

	cout << "請輸入一天的通行費用 (元)：";
	cin >> tollFee;

	// 計算花費
	double totalFuelCost = (totalMileage / mileagePerLiterGallon) * costPerLiterGallon;
	double totalCost = totalFuelCost + parkingFee + tollFee;

	// 顯示結果
	cout << "一天開車所需的花費為：" << totalCost << " 元" << endl;
	*/
	
	return 0;
}