#include <iostream>
using namespace std;

int main() {
	int x,y;
	cout << "��J��Ӿ��\n";
	cin >> x >> y;
	if (x%y == 0) printf("%d�O%d������", x, y);
	else printf("%d���O%d������", x, y);
	
	return 0;
}