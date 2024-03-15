//chp1ex0.cpp
#include <iostream>
#include <string>

int main() {
	// 이름을 물음
	std::cout << "What's your name?\t";
	// 이름을 읽어들임
	std::string name;
	std::cin >> name;

	// 출력하려는 메세지를 구성
	const std::string greeting = "Hello, " + name + "!";

	// 인사말의 두 번째 행과 네 번째 행
	const std::string spaces(greeting.size(), ' ');
	const std::string second = "*" + spaces + "*";

	// 인사말의 첫 번째 행과 다섯 번째 행
	const std::string first(second.size(), '*');
	std::cout << std::endl;
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "*" << greeting << " *" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;
	return 0;
}