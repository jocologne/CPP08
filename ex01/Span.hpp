
#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <stdexcept>

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
		void addSpan(int min, int max);
		int shortestSpan() const;
		int longestSpan() const;
		template <typename Iter>
		void addRange(Iter begin, Iter end);
};

template <typename Iter>
void Span::addRange(Iter begin, Iter end) {
	size_t dist = std::distance(begin, end);
	if (_numbers.size() + dist > _maxSize) {
		throw std::runtime_error("Not enough space");
	}
	_numbers.insert(_numbers.end(), begin, end);
}

#endif