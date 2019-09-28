
std::string subtract( std::string num1, int base1, std::string num2, int base2, int base3 ) {
	// Convert both numbers to decimal
	num1 = convertToDecimal( base1, num1 );
	num2 = convertToDecimal( base2, num2 );
	// subtract the numbers, then convert to base3
	int num3 = std::stoi(num1) - std::stoi(num2);
	return convertFromDecimal( base3, std::to_string(num3));
}
//subtracting numbers of the same base, and keeping them in the same base
std::string subtract( std::string num1, std::string num2, int base ) {
	// Convert both numbers to decimal
	num1 = convertToDecimal( base, num1 );
	num2 = convertToDecimal( base, num2 );
	// subtract the numbers, then convert to base3
	int num3 = std::stoi(num1) - std::stoi(num2);
	return convertFromDecimal( base, std::to_string(num3));
}
