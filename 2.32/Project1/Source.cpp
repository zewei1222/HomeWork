#include <iostream>
using namespace std;

int main() {

	cout << "2.32\n";
	int height, weight;
	cout << "��J����(cm)�魫(kg)\n";
	cin >> height >> weight;
	cout <<"�A��BMI�Ȭ�"<< weight / ((float(height) / 100)*(float(height) / 100));
	
	return 0;
}