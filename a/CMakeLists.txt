# CMakeList.txt: проект CMake для CMakeProject2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8) #установка минимальной версии CMake
project (PRJ)#название проекта
file(GLOB PROJECT_2 "src/*.cpp")#создание отдельной переменной для добавления cpp файлов в библиотеку
add_library(inoutlib STATIC ${PROJECT_2})#создание библиотеки и добавление туда cpp файлов
target_include_directories(inoutlib PUBLIC ./include)#файлы cpp теперь могут взаимодействовать с заголовочным файлом,тоесть  библиотека может подключиться в main.cpp через inout.h
# Добавьте источник в исполняемый файл этого проекта.


# TODO: Добавьте тесты и целевые объекты, если это необходимо.
