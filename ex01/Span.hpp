
#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

class Span {
	private:
		unsigned int _maxSize;
		std::vector<int> _numbers;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& other);
		~Span();
		Span& operator=(const Span& other);
		unsigned int getMaxSize() const;
		void addNumber(int num);
		int shortestSpan() const;
		int longestSpan() const;
};

#endif