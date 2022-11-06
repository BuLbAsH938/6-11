#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	/*заполнить массив случайными числами от -10 до 10. ѕодсчитать количетсво положительных
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
	—ам 1 заполнить массив случаными числами от -10 до 20 . ѕодсчитать сумму четных элементов
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
	—ам 2 заполнить массив случаными числами от - 50 до 50.ѕодсчитать кол-во отрицательных чисел
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
	—ам 3 заполнить массив случаными числами от - 20  до 20 .ѕодсчитать произведение тех чисел которые не дел€тс€ на 5
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
	—ам 4 заполнить массив случаными числами от - 5  до 15 .
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
	—ам 5 */
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