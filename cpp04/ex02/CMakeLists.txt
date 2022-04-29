cmake_minimum_required(VERSION 3.20)
project(ex02)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex02 main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp)
