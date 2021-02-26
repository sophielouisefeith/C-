#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>



template <class T>
void	iter(T *arr, std::size_t len, void (*cb)(T const &item)) {
	for (std::size_t i = 0; i < len; i++) cb(arr[i]);
}

#endif




// template<typename I> void display(I &el){
//     std::cout<<el;
// } //defining a template 


// template<typename I> void iter(I *array,  size_t len ,  void (*f)(I &elt)){
    
//     for (size_t i=0; i < len; i++) 
// 		(*f)(array[i]);
	
//     return ;
// }
