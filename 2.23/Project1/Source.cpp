#include <iostream>
using namespace std;

int main() {
	int a, b, c;

	cout << "2.23\n��J�T�ӼƦr\n";
	cin >> a >> b >> c;

	int max, min;
	max = a;
	min = a;
	if (b > max) {
		max = b;
	}
	else if (b < min) {
		min = b;
	}

	if (c > max) {
		max = c;
	}
	else if (c < min) {
		min = c;
	}
	printf("�̤j���O%d\n�̤p���O%d\n", max, min);
	
	return 0;
}