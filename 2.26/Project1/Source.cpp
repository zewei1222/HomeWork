#include <iostream>
using namespace std;

int main() {
	int x,y;
	cout << "輸入兩個整數\n";
	cin >> x >> y;
	if (x%y == 0) printf("%d是%d的倍數", x, y);
	else printf("%d不是%d的倍數", x, y);
	
	return 0;
}