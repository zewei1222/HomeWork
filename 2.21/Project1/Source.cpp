#include <iostream>
using namespace std;

int main() {
	//方形
	for (int i = 0; i < 9; i++) cout << "*";
	cout << endl;
	for (int i = 0; i < 9; i++) cout << "*       *\n";
	for (int i = 0; i < 9; i++) cout << "*";
	cout << endl<<endl;
	

	//橢圓
	for (int i = 0; i < 5; i++) printf((i > 1) ? "*" : " ");
	cout << "\n *   *\n";
	for(int i = 0; i <= 5;i++) cout << "*     *\n";
	cout << " *   *\n";
	for (int i = 0; i < 5; i++) printf((i > 1) ? "*" : " ");

	//箭頭
	cout << "\n\n  *  \n *** \n*****\n";
	for (int i = 0; i < 6; i++) cout << "  *  \n";
	cout << endl;
	
	//菱形
	cout << "    *\n";
	cout << "   * *\n";
	cout << "  *   *\n";
	cout << " *     *\n";
	cout << "*       *\n";
	cout << " *     *\n";
	cout << "  *   *\n";
	cout << "   * *\n";
	cout << "    *\n";
	
	return 0;
}