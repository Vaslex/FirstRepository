#include<iostream>
#include<vector>
#include<string>
using namespace std;
void print(const vector<int>& vec) {// ��������� ������ �� ������
	string str;
	for (int i = 0; i < vec.size(); i++) {//��������� ������ ��� ������ �������� �������
		str.append(to_string(vec[i]) + " ");
	}
	cout << str;
};
