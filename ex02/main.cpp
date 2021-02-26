#include "array.tpp"
#include <iostream>

class Yikes {
	private:
		int	_num;
	public:
		Yikes(): _num(0) {}
		Yikes(int i): _num(i) {}
		Yikes(const Yikes &yikes): _num(yikes._num) {}
		int		getNum() const {
			return _num;
		}

		Yikes	&operator=(const Yikes &rhs) {
			_num = rhs._num;
			return *this;
		}
		bool	operator<(const Yikes &rhs) const {
			return _num < rhs._num;
		}
		bool	operator>(const Yikes &rhs) const {
			return _num > rhs._num;
		}
};

std::ostream	&operator<<(std::ostream &os, const Yikes &rhs) {
	os << rhs.getNum();
	return os;
}

int	main() {
	// 1. basic tests
	{
		Array<int>	array(1);
		Array<int>	arrayEmpty;

		array[0] = 42;
		try {
			array[1] = 420;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		std::cout << "Size 0 -> " << arrayEmpty.size() << std::endl;
		std::cout << "Size 1 -> " << array.size() << std::endl;

		Array<int>	arrayCopy(array);
		std::cout << "Copy item 42 -> " << arrayCopy[0] << std::endl;
		arrayCopy[0] = 123;
		std::cout << "Copy item 123 -> " << arrayCopy[0] << std::endl;
		std::cout << "original item 42 -> " << array[0] << std::endl;
	
		Array<int>	arrayAssign;
		arrayAssign = arrayCopy;
		std::cout << "Assign item 123 -> " << arrayAssign[0] << std::endl;
		arrayAssign[0] = 42;
		std::cout << "Copy item 42 -> " << arrayAssign[0] << std::endl;
		std::cout << "original item 123 -> " << arrayCopy[0] << std::endl;

		Array<int>	arrayAmount(10);
		std::cout << "Amount item 0 -> " << arrayAmount[0] << std::endl;
		std::cout << "Amount item 0 -> " << arrayAmount[4] << std::endl;
		std::cout << "Amount item 0 -> " << arrayAmount[9] << std::endl;
	}
	std::cout << std::endl;

	// 2. class tests
	{
		Array<Yikes>	array(2);
		array[0] = 42;
		array[1] = 420;

		std::cout << "item 42 -> " << array[0] << std::endl;
		std::cout << "item 420 -> " << array[1] << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
