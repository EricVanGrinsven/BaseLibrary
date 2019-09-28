# BaseLibrary
Gives the ability to do mathematical operations on bases ranging from 1-100.
This project relates my passion for math and certain algorithms I've learned from math courses, and my passion for computer science.
The Euclidean Algorithm specifically, was my first idea for applying math.

The ability to switch between bases higher than decimal had to utilize strings, otherwise characters such as 'A' would not register as their desired value.  To get around this, I used an array where each element is the numerical symbol for it's value, and it's index is the value.  For example, "A" is at index 10.

USAGE:
Each mathematical operation, besides the  Euclidean Algorithm, can be used with the order of (num1, base1, num2, base2, num3) OR (num1, num2, num3) if everything already has the same base.

I use this library with all the classes in the same folder as the project I'm working on and use include statements for each method.  You can also use the header file.
