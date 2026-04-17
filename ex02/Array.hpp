#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>
#include <cstdlib>

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		~Array();

		Array& operator=(const Array& other);
		T& operator[](const unsigned int i);
		const T& operator[](const unsigned int i) const;
		unsigned int size() const;
		
	private:
		T				*aTyp;
		unsigned int	_size;
};

template <class T>
Array<T>::Array() :
	aTyp(new T[0]()),
	_size(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

template <class T>
Array<T>::Array(unsigned int n) :
	_size(n)
{
	// std::cout << "Parametrized constructor called" << std::endl;
	aTyp = new T[n]();

}

template <class T>
Array<T>::Array(const Array& other)
{
	// std::cout << "Copy constructor called" << std::endl;
	_size = other._size;
	aTyp = new T[_size]();
	for (unsigned int i = 0; i < _size; i++)
		aTyp[i] = other.aTyp[i];
}

template <class T>
Array<T>::~Array()
{
	// std::cout << "Destructor called" << std::endl;
	delete [] aTyp;
}

template <class T>
Array<T>& Array<T>::operator=(const Array& other)
{
	// std::cout << "Assigment operator called" << std::endl;
	if (this != &other)
	{
		delete[] aTyp;
		_size = other._size;
		aTyp = new T[_size]();
		for (unsigned int i = 0; i < _size; i++)
			aTyp[i] = other.aTyp[i];
	}
	return *this;
}

template<class T>
T& Array<T>::operator[](const unsigned int i)
{
	if (i >= _size)
		throw std::exception();
	return aTyp[i];
}

template<class T>
const T& Array<T>::operator[](const unsigned int i) const
{
	if (i >= _size)
		throw std::exception();
	return aTyp[i];

}

template<class T>
unsigned int Array<T>::size() const
{
	return _size;
}

#endif
