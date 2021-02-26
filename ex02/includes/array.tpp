#ifndef ARRAY_TPP
# define ARRAY_TPP

#include <exception>

template <class T>
class Array {
	typedef unsigned int	sizetype;

	private:
		T			*_storage;
		sizetype	_size;

		void	copy(T *newArray, T *oldArraysizetype, sizetype start, sizetype len) {
			for (sizetype i = start; i < len; i++) newArray[i] = oldArraysizetype[i];
		}

	public:
		Array(): _storage(new T[0]()), _size(0) {}
		Array(sizetype n): _storage(new T[n]()), _size(n) {};
		Array(const Array &array) {
			T	*newStorage = new T[array.size()];
			copy(newStorage, array._storage, 0, array.size());
			_storage = newStorage;
			_size = array.size();
		}
		~Array() {
			delete[] _storage;
		}

		sizetype	size() const {
			return _size;
		}

		Array		&operator=(const Array &array) {
			T	*newStorage = new T[array.size()];
			copy(newStorage, array._storage, 0, array.size());
			delete[] _storage;
			_storage = newStorage;
			_size = array.size();
			return *this;
		}

		T			&operator[](sizetype i) {
			if (i >= _size)
				throw OutOfBoundsException();
			return _storage[i];
		}
	
		class OutOfBoundsException: public std::exception {
			public:
				const char	*what() const throw() {
					return "Attempted to access value outside of limits";
				}
		};

};
#endif
