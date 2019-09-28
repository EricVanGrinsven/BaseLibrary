/* Euclidean Algorithm: 
	Used to find the greatest common factor between two numbers.
		Example: GCD of 4 & 6 is 2.
*/
	std::string euclideanAlgorithm(std::string num1Str, int base1, std::string num2Str, int base2, int base3) {
		num1Str = convertToDecimal( base1, num1Str );
		num2Str = convertToDecimal( base2, num2Str );
		int num1 = std::stoi(num1Str);
		int num2 = std::stoi(num2Str);
		// Make num1 the bigger number by bit-shifting
		if ( num2 > num1 ) {
			num1 ^= num2;
			num2 ^= num1;
			num1 ^= num2;
		}
		int q = 0;
		int r = num2;
		int prevr = 0;
		while (r > 0) {
		  q = num1/num2;
		  prevr = r;
		  r = num1 - num2*q;
		  num1 = prevr;
		  num2 = r;	  
		}
		return convertFromDecimal( base3, std::to_string(prevr) );
}	