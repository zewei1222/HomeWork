#include <iostream>
using namespace std;

int main() {
	//���
	for (int i = 0; i < 9; i++) cout << "*";
	cout << endl;
	for (int i = 0; i < 9; i++) cout << "*       *\n";
	for (int i = 0; i < 9; i++) cout << "*";
	cout << endl<<endl;
	

	//���
	for (int i = 0; i < 5; i++) printf((i > 1) ? "*" : " ");
	cout << "\n *   *\n";
	for(int i = 0; i <= 5;i++) cout << "*     *\n";
	cout << " *   *\n";
	for (int i = 0; i < 5; i++) printf((i > 1) ? "*" : " ");

	//�b�Y
	cout << "\n\n  *  \n *** \n*****\n";
	for (int i = 0; i < 6; i++) cout << "  *  \n";
	cout << endl;
	
	//�٧�
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