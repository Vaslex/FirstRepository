#include<iostream>
#include<vector>
#include <string>
using namespace std;
string str;
void read(vector<int>& vec) {
	string c;//строка для хранения значения колличества чисел в векторе и для последующей работы getline(11 строка)

	getline(cin, c);
	string str;
	getline(cin, str);//ввод значений вектора(это 11 строка)
	int a;//переменная для хранения колличества пробелов,нужно для последующего заполнения вектора отдельными числами
	for (int i = 0; i < stoi(c); i++) {
		a = str.find(" ");
		if (a > 0) {
			string b = str;//строка,хранящая отдельные числа
			a = str.find(" ");
			vec.push_back(stoi(b.erase(a)));//удаление всех символов после пробела и присваивание отдельного числа в вектор
			str = str.erase(0, a + 1);//удаление присвоенного числа
		}
		else {
			vec.push_back(stoi(str));//если нет пробелов - в вектор добавляется оставшееся число

		}
	}
	

}