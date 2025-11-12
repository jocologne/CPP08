
#include "Span.hpp"

Span::Span() :_maxSize(0) {}

Span::Span(unsigned int N) : _maxSize(N) {}

Span::Span(const Span& other) {
	_maxSize = other._maxSize;
	_numbers = other._numbers;
}

Span& Span::operator=(const Span& other) {
	if(this != &other) {
		_maxSize = other._maxSize;
		_numbers = other._numbers;
	}
	return *this;
}

unsigned int Span::getMaxSize() const {
	return _maxSize;
}

void Span::addNumber(int num) {
	if (_numbers.size() >= _maxSize)
		throw std::runtime_error("Container full");
	_numbers.push_back(num);
}

void Span::addSpan(int min, int max) {
	for (int i = min; i <= max; i++) {
		this->addNumber(i);
	}
}

int Span::shortestSpan() const {
	if (_numbers.size() < 2)
		throw std::runtime_error("Not enough numbers");
	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());
	int result = sorted[1] - sorted[0];
	for (size_t i = 0; i < sorted.size() - 1; i++) {
		int span = sorted[i + 1] - sorted[i];
		if (span < result) {
			result = span;
		}
	}
	return result;
}

int Span::longestSpan() const {
	if (_numbers.size() < 2)
		throw std::runtime_error("Not enough numbers");
	int min = *std::min_element(_numbers.begin(), _numbers.end());
	int max = *std::max_element(_numbers.begin(), _numbers.end());
	return max - min;
}

Span::~Span() {}