#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack<T>()
	{}

	MutantStack<T>(const MutantStack<T> &oth) : std::stack<T>(oth)
	{}

	MutantStack<T> &operator=(const MutantStack<T> &oth)
	{
		std::stack<T>::operator=(oth);
		return *this;
	}

	iterator begin()
	{
		return std::stack<T>::c.begin();
	}

	iterator end()
	{
		return std::stack<T>::c.end();
	}
};


#endif
