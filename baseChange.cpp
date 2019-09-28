// WARNING: DO NOT PUT NUMBERS OUTSIDE OF THE BASE
//EX: 9 IS NOT A DIGIT IN OCTAL
// num is a string due to ABCDEF
#include <stdexcept>
#include <map>
#include <map>
#include <algorithm>
#include<string> // for string class

//int baseChange( int newBase, int oldBase, int num );
std::string convertToDecimal ( int base, std::string num);
std::string convertFromDecimal( int newBase, std::string StrNum);
int decimal = 10;
// The symbols line up with their values
std::string symbols[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F"};


std::string baseChange( int newBase, int oldBase, std::string num ) {
	std::string decimalNum = convertToDecimal(oldBase, num);
	return convertFromDecimal( newBase, decimalNum);
	
}
std::string convertToDecimal ( int base, std::string num ) {
 
	int newNum = 0;
	int weight = 1;
	while (num.size() != 0) {
		// Extract the last character from the string
		std::string rem = num.substr(num.size()-1,num.size());
		//The index of the remainder IS the value
		//int value = std::find(symbols[0], symbols[17], rem);
		auto itr = std::find(symbols, symbols + sizeof(symbols)/sizeof(symbols[0]), rem);
		int value = 0;
		if (itr != end(symbols)) {
			value = std::distance(symbols, itr);
		}
		else {
			return "error,not in";
		}
		// Add the value * it's weight in the number
		newNum += (value) * weight;
		// Mulitply weight by the base
		weight *= base;	
		num.pop_back();
		//num = num/decimal;	
	}
	return std::to_string(newNum);
}



std::string convertFromDecimal( int newBase, std::string strNum) {
    int dec = 1;
    std::string newNum = "";
	bool isNegative = false;
	int num = std::stoi(strNum);
	//BECAUSE OUR NUMBER IS IN DECIMAL, WE HAVE NO ISSUES CHANGING TO INT FROM STRING
	
	// Change to positive for the math portion
	if (num < 0) {
		num *= -1;
		isNegative = true;		
	}
	
	while (num != 0) {      
		
		int remainder = num % newBase;
		num = num/newBase;
		//RELYING ON THE FACT THAT THE 10TH ELEMENT OF THE MAP WILL BE 10
		newNum.insert(0, symbols[remainder]); 
		dec = dec*decimal;      
	}
	// Change back to negative if it was negative
	if (isNegative == true) newNum.insert(0,"-");
	// Return 0 instead of the empty string
	if (newNum.compare("") == 0) return "0";
    return (newNum);	
}
