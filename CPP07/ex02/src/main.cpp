#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750
int main(int, char**){
	Array<char> numbers(MAX_VAL);
	char* mirror = new char[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++){
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	// for (unsigned int i = 0; i < numbers.size(); i++){
	// 	std::cout << "numbers[" << i << "]:\t" << numbers[i] << "\tmirror[" << i << "]:\t" << mirror[i] << std::endl;
	// }
	{
		Array<char> tmp = numbers;
		Array<char> test(tmp);
		// for (unsigned int i = 0; i < numbers.size(); i++){
		// 	std::cout << "tmp[" << i << "]:\t" << tmp[i] << "\ttest[" << i << "]:\t" << test[i] << std::endl;
		// }
	}
	for (int i = 0; i < MAX_VAL; i++){
		if (mirror[i] != numbers[i]){
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	std::cout << std::endl;
	try{
		numbers[-2] = 0;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	try{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	for (int i = 0; i < MAX_VAL; i++){
		numbers[i] = rand();
	}
	// for (unsigned int i = 0; i < numbers.size(); i++){
	// 	std::cout << "numbers[" << i << "]:\t" << numbers[i] << "\tmirror[" << i << "]:\t" << mirror[i] << std::endl;
	// }
	delete [] mirror;
	return 0;
}
