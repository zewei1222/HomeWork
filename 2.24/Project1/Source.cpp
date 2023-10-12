#include <iostream>
using namespace std;

int main() {
	int x;
	cout << "輸入一個整數\n";
	cin >> x;
	cout << (x % 2 == 0 ? "even\n" : "odd\n");
	
	return 0;
}