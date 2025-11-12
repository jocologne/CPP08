
#include "Span.hpp"


int main() {
	
	std::srand(std::time(0));

	Span s1(5);
	try {
		s1.addNumber(6);
		s1.addNumber(3);
		s1.addNumber(17);
		s1.addNumber(9);
		s1.addNumber(11);
		std::cout << s1.shortestSpan() << std::endl;
		std::cout << s1.longestSpan() << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	Span s2(5);
	try {
		s2.addNumber(1);
		std::cout << s2.shortestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	Span s3(5);
	try {
		s3.addNumber(1);
		std::cout << s3.longestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	Span s4(10000);
	try {
		for (unsigned int i = 0; i < s4.getMaxSize(); i++) {
			s4.addNumber(i);
		}
		std::cout << s4.shortestSpan() << std::endl;
		std::cout << s4.longestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	Span s5(10000);
	try {
		for (unsigned int i = 0; i < s5.getMaxSize(); i++) {
			s5.addNumber(std::rand());
		}
		std::cout << s5.shortestSpan() << std::endl;
		std::cout << s5.longestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	Span s6(10);
	try {
		for (unsigned int i = 0; i < 11; i++) {
			s6.addNumber(i);
		}
	} catch(const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	Span s7(3);
	try {
		s7.addNumber(-2);
		s7.addNumber(0);
		s7.addNumber(3);
		std::cout << s7.shortestSpan() << std::endl;
		std::cout << s7.longestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}