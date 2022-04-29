#ifndef SPAN_HPP
#define SPAN_HPP

#include <set>
#include <limits>

class Span
{
	unsigned int n;
	std::multiset<int> set;
public:
	Span(unsigned int n);

	Span();

	Span(const Span& span);

	Span &operator=(const Span &oth);

	virtual ~Span();

	void addNumber(int i);

	template<class T>
	void addNumber(T begin, T end);

	long shortestSpan();
	long longestSpan();
};

template<class T>
void Span::addNumber(T begin, T end)
{
	if ((long unsigned int)std::distance(begin, end) > n - set.size())
		throw std::exception();
	set.insert(begin, end);
}

#endif
