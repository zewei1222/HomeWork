#include <iostream>
using namespace std;

int main() {

	cout << "2.32\n";
	int height, weight;
	cout << "輸入身高(cm)體重(kg)\n";
	cin >> height >> weight;
	cout <<"你的BMI值為"<< weight / ((float(height) / 100)*(float(height) / 100));
	
	return 0;
}