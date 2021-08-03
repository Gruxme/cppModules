#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>

template <typename T>
class Array
{

	public:

		Array();
		Array( unsigned int n );
		Array( Array<T> const & src );
		virtual ~Array();

		Array &		operator=( Array<T> const & rhs );
		T&			operator[]( unsigned int index );
		const T& 	operator[]( unsigned int index ) const;

		class outOfLimits : public std::exception
		{
			public:
				outOfLimits() throw() {}
				virtual ~outOfLimits() throw() {}
				virtual const char* what() const throw()
				{
					return "Element is out of the limits!";
				}	
		};

		int	size( void ) const;

	private:

		T* 				_array;
		unsigned int	_lenght;
};

template <typename T>
Array<T>::Array() : _array(nullptr), _lenght(0)
{}

template <typename T>
Array<T>::Array( unsigned int n) : _array(nullptr), _lenght(n)
{
	this->_array = new T[n];
}

template <typename T>
Array<T>::Array( Array<T> const & src ) : _array(nullptr), _lenght(0)
{
	if (src._lenght > 0)
	{
		this->_array = new T[src._lenght];
		for (unsigned int i = 0; i < src._lenght; i++)
		{
			this->_array[i] = src._array[i];
		}
	}
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->_array;
}

template <typename T>
Array<T>& Array<T>::operator=( Array<T> const & rhs )
{
	if (this->_lenght > 0 && this->_array != nullptr)
		delete[] this->_array;
	if (rhs._lenght > 0)
	{
		this->_array = new T[rhs._lenght];
		for (unsigned int i = 0; i < rhs._lenght; i++)
		{
			this->_array[i] = rhs._array[i];
		}
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[]( unsigned int index )
{
	if (index >= this->_lenght)
		throw Array<T>::outOfLimits();
	return this->_array[index];
}

template <typename T>
const T& Array<T>::operator[]( unsigned int index ) const
{
	if (index >= this->_lenght)
		throw Array<T>::outOfLimits();
	return this->_array[index];
}

template <typename T>
int	Array<T>::size() const
{
	return this->_lenght;
}

#endif /* *********************************************************** ARRAY_H */
