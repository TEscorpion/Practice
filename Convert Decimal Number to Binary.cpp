#include <iostream>

int read_positive_number() {
	int number;
	std::cout << "Please enter a positive number:\n";
	std::cin >> number;
	return number;
}

int convert_decimal_to_binary(int decimal_number) {
	int binary = 0;
	int product = 1;
	int reminder; 

	while (decimal_number != 0) {
		reminder = decimal_number % 2;
		binary = binary + (reminder * product);
		decimal_number /= 2;
		product *= 10;
	}

	return binary; 
}


int main() {
	int decimal_number = read_positive_number();
	int binary = convert_decimal_to_binary(decimal_number);
	
	std::cout << "binary = " << binary << "\n";
}