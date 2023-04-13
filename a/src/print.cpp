#include<iostream>
#include<vector>
#include<string>
using namespace std;
void print(const vector<int>& vec) {// принимает ссылку на вектор
	string str;
	for (int i = 0; i < vec.size(); i++) {//заполняет строку для вывода значений вектора
		str.append(to_string(vec[i]) + " ");
	}
	cout << str;
};
