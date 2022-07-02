// You are given a number. Your task is to find whether the given number is a palindrome or not

#include <iostream>

int read_positive_number() {
	int number;
	std::cout << "Please enter a positive number:\n";
	std::cin >> number;
	return number;
}

int reverse_number(int decimal_number) {
	int reversed_number = 0;
	int reminder;
	while (decimal_number != 0) {
		reminder = decimal_number % 10;
		reversed_number = reversed_number * 10 + reminder; 
		decimal_number /= 10;
	}

	return reversed_number;
}

bool isPalindrome(int decimal_number) {
	if (decimal_number == reverse_number(decimal_number)) {
		return 1;
	}
	else {
		return 0;
	}
}


int main() {
	int number = read_positive_number();
	int reversed = reverse_number(number);

	std::cout << "number = " << number << "\n";
	std::cout << "reversed_number = " << reversed << "\n";
	
	
	if (isPalindrome(number)) {
		std::cout << "palindrome";
	}
	else {
		std::cout << "not palindrome"; 
	}
	
}