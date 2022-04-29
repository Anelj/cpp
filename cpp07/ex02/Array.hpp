#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <ostream>

template <typename T>
class Array
{
	unsigned int n;
	T *ar;
public:
	Array();
	Array(unsigned int n);
	Array(Array<T> const &a);
	Array<T> &operator=(const Array<T> &other);
	virtual ~Array();
	unsigned int size() const;
	T &operator[](unsigned int index);
	T const &operator[](unsigned int index) const;
};

template<typename T>
std::ostream &operator<<(std::ostream &os, const Array<T> &array);

template<typename T>
Array<T>::Array() : n(0)
{
	ar = new T[0];
}

template<typename T>
Array<T>::Array(unsigned int n) : n(n)
{
	ar = new T[n];
	for (unsigned int i = 0; i < n; i++)
		ar[i] = T();
}

template<typename T>
Array<T>::Array(Array<T> const &a) : n(a.n)
{
	ar = new T[a.n];
	for (unsigned int i = 0; i < a.n; i++)
		ar[i] = a.ar[i];
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &oth)
{
	delete[] ar;
	n = oth.n;
	ar = new T[n];
	for (unsigned int i = 0; i < n; i++)
		ar[i] = oth.ar[i];
	return *this;
}

template<typename T>
Array<T>::~Array()
{
	delete[] ar;
}

template<typename T>
T &Array<T>::operator[](unsigned int index) {
	if(index >= n)
		throw std::exception();
	return ar[index];
}

template<typename T>
T const &Array<T>::operator[](unsigned int index) const
{
	if(index >= n)
		throw std::exception();
	return ar[index];
}

template<typename T>
unsigned int Array<T>::size() const
{
	return n;
}

template<typename T>
std::ostream &operator<<(std::ostream &os, const Array<T> &array)
{
	for (unsigned int i = 0; i < array.size(); i++)
		os << array[i] << " ";
	return os;
}

#endif
