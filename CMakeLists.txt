# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)#установка минимальной версии CMake
project ("CMakeProject2")#название проекта
add_executable (CMakeProject2 "main.cpp")#задание цели проекта,которая будет компилироваться из main.cpp
add_subdirectory (a)#создание поддиректории(папки в проекте)
target_link_libraries(CMakeProject2 inoutlib)#связываем конечную цель с библиотекой inoutlib

