
#include "easyfind.hpp"

int main(void) {
	std::cout << "=== Test easyfind ===" << std::endl;

	std::cout << "\nVector" << std::endl;
	std::vector<int> vec;
	for (int i = 0; i <= 5; i++) {
		vec.push_back(i * 10);
	}

	try {
		std::vector<int>::iterator res = easyfind(vec, 30);
		std::cout << "Found: " << *res << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
		std::vector<int>::iterator res = easyfind(vec, 70);
		std::cout << "Found: " << *res << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\nList_1" << std::endl;
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(10);
	lst.push_back(15);
	lst.push_back(20);

	try {
		std::list<int>::iterator res = easyfind(lst, 15);
		std::cout << "Found: " << *res << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
		std::list<int>::iterator res = easyfind(lst, 12);
		std::cout << "Found: " << *res << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\nList_2" << std::endl;
	std::list<int> lst2;
	lst2.push_back(-5);
	lst2.push_back(-10);
	lst2.push_back(-15);
	lst2.push_back(-20);

	try {
		std::list<int>::iterator res = easyfind(lst2, -15);
		std::cout << "Found: " << *res << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
		std::list<int>::iterator res = easyfind(lst2, 15);
		std::cout << "Found: " << *res << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\nList_3" << std::endl;
	std::list<int> empty;

	try {
		std::list<int>::iterator res = easyfind(empty, 0);
		std::cout << "Found: " << *res << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}