#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	/*��������� ������ ���������� ������� �� -10 �� 10. ���������� ���������� �������������
	const int n = 10;
	int O = 0;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 51 - 25;
		if (mas[i] > 0) {
			O++;
		}
	}
	cout << O;
	��� 1 ��������� ������ ��������� ������� �� -10 �� 20 . ���������� ����� ������ ���������
	const int n = 10;
	int O = 0;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand()% 31 - 10;
		if (mas[i] > 0) {
			O+= mas[i];
		}
		cout << mas[i] << endl;
	}
	cout << O;
	��� 2 ��������� ������ ��������� ������� �� - 50 �� 50.���������� ���-�� ������������� �����
	const int n = 10;
	int O = 0;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 101 - 50;
		if (mas[i] < 0) {
			O++;
		}
		cout << mas[i] << endl;
	}
	cout << O;
	��� 3 ��������� ������ ��������� ������� �� - 20  �� 20 .���������� ������������ ��� ����� ������� �� ������� �� 5
	const int n = 10;
	int O = 1;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 41 - 20;
		if (mas[i] % 5 > 0) {
			O*= mas[i];
		}
	}
	cout << O;
	��� 4 ��������� ������ ��������� ������� �� - 5  �� 15 .
	const int n = 10;
	double O = 0, H = 0;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 20 - 5;
		if (mas[i] % 3 > 0 || mas[i] % 5 > 0) {
			O++;
			H += mas[i];
		}
	}
	cout << H/O;
	��� 5 */
	const int n = 10;
	double O = 0;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 15 + 1;
		
	}
	
	for (int i = 0; i < n; i+=2) {
		O += mas[i];
	}
	cout << sqrt(O);
}