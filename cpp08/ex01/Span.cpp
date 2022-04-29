#include <climits>
#include <complex>
#include "Span.hpp"

Span::Span(unsigned int n) : n(n)
{}

Span::Span() : n(0)
{}

Span::Span(const Span& span) : n(span.n)
{
	set.insert(span.set.begin(), span.set.end());
}

Span &Span::operator=(const Span &span)
{
	n = span.n;
	set.clear();
	set.insert(span.set.begin(), span.set.end());
	return *this;
}

Span::~Span()
{}

void Span::addNumber(int i)
{
	if (set.size() == n)
		throw std::exception();
	set.insert(i);
}

long Span::shortestSpan()
{
	long sspan = LONG_MAX;
	long cur_span;
	std::multiset<int>::iterator last = set.end();

	if (set.size() <= 1)
		throw std::exception();
	last--;
	for (std::multiset<int>::iterator it = set.begin(); it != last; )
	{
		cur_span = std::abs((long)*(it++) - (long)*it);
		if (sspan > cur_span)
			sspan = cur_span;
	}
	return sspan;
}

long Span::longestSpan()
{
	std::multiset<int>::iterator last = set.end();

	if (set.size() <= 1)
		throw std::exception();
	last--;
	return ((long)*last - (long)*(set.begin()));
}
