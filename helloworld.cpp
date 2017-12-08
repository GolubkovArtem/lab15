// Copyright 2017 Golubkov Artem

#include <iostream>
#include <string>

int main() {
std::string * hello_world = new std::string ("Hello World!");
std::cout << *hello_world;
delete hello_world;
return 0;
}
