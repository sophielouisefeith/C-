#include "iter.hpp"
#include <iostream>

// class Yikes {
// 	private:
// 		int	_num;
// 	public:
// 		Yikes(int i): _num(i) {}
// 		Yikes(const Yikes &yikes): _num(yikes._num) {}
// 		int		getNum() const {
// 			return _num;
// 		}

// 		Yikes	&operator=(const Yikes &rhs) {
// 			_num = rhs._num;
// 			return *this;
// 		}
// 		bool	operator<(const Yikes &rhs) const {
// 			return _num < rhs._num;
// 		}
// 		bool	operator>(const Yikes &rhs) const {
// 			return _num > rhs._num;
// 		}
// };






// std::ostream	&operator<<(std::ostream &os, const Yikes &rhs) {
// 	os << rhs.getNum();
// 	return os;
// }

// void	callbackInt(int *i) {
// 	std::cout << "Callback ran on: " << *i << std::endl;
// }

// void	callbackYikes(Yikes *i) {
// 	std::cout << "Callback ran on: " << *i << std::endl;
// }

// int	main() {
// 	// 1. int tests
// 	{
// 		int	a[] = {1,2,3,4,5,6,7,8,9,10};
// 		::iter(a, 10, callbackInt);
// 	}
// 	std::cout << std::endl;

// 	// 2. yikes tests
// 	{
// 		Yikes	a[] = {1,2,3,4,5,6,7,8,9,10};
// 		::iter(a, 10, callbackYikes);
// 	}
// 	std::cout << std::endl;

// 	// 3. error tests
// 	{
// 		int	a[] = {1,2,3,4,5,6,7,8,9,10};
// 		std::cout << "run on 3 items" << std::endl;
// 		::iter(a, 3, callbackInt);
// 		std::cout << "run on 0 items" << std::endl;
// 		::iter(a, 0, callbackInt);
// 	}
// 	std::cout << std::endl;

// 	return 0;
// }


class Awesome
{
	public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
	private:
	int _n;
	};
	std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
	template< typename T >
	void print( T const & x ) { std::cout << x << std::endl; return; }
	int main() {
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];

	::iter( tab, 5, print );
	::iter( tab2, 5, print );

	return 0;
}
