#include <iostream>
using namespace std;

int main() {
	double totalMileage, costPerLiterGallon, mileagePerLiterGallon, parkingFee, tollFee;

	// ��J��T
	cout << "�п�J�@��Ѫ��`���{�� (����)�G";
	cin >> totalMileage;

	cout << "�п�J�T�o�@����/�[�ڪ����� (��)�G";
	cin >> costPerLiterGallon;

	cout << "�п�J�����@����/�[�گ��p�h�֤����G";
	cin >> mileagePerLiterGallon;

	cout << "�п�J�@�Ѫ������O�� (��)�G";
	cin >> parkingFee;

	cout << "�п�J�@�Ѫ��q��O�� (��)�G";
	cin >> tollFee;

	// �p���O
	double totalFuelCost = (totalMileage / mileagePerLiterGallon) * costPerLiterGallon;
	double totalCost = totalFuelCost + parkingFee + tollFee;

	// ��ܵ��G
	cout << "�@�Ѷ}���һݪ���O���G" << totalCost << " ��" << endl;
	*/
	
	return 0;
}