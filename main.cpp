// CMakeProject2.cpp: определяет точку входа для приложения.
//

#include <algorithm>
#include "inout.h"//подключение inout.h,чтобы main cpp могла взаимодействовать с объявленными там функциями и библиотеками
int main() {
    vector<int> vec;//создание вектора 
    read(vec);//вызов функции read
    sort(vec.begin(), vec.end());//сортировка вектора
    print(vec);//вызов функции print
    return 0;
}
