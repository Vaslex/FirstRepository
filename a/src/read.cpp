#include<iostream>
#include<vector>
#include <string>
using namespace std;
string str;
void read(vector<int>& vec) {
	string c;//������ ��� �������� �������� ����������� ����� � ������� � ��� ����������� ������ getline(11 ������)

	getline(cin, c);
	string str;
	getline(cin, str);//���� �������� �������(��� 11 ������)
	int a;//���������� ��� �������� ����������� ��������,����� ��� ������������ ���������� ������� ���������� �������
	for (int i = 0; i < stoi(c); i++) {
		a = str.find(" ");
		if (a > 0) {
			string b = str;//������,�������� ��������� �����
			a = str.find(" ");
			vec.push_back(stoi(b.erase(a)));//�������� ���� �������� ����� ������� � ������������ ���������� ����� � ������
			str = str.erase(0, a + 1);//�������� ������������ �����
		}
		else {
			vec.push_back(stoi(str));//���� ��� �������� - � ������ ����������� ���������� �����

		}
	}
	

}