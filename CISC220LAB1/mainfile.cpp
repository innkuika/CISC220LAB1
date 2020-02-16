/*
 * mainfile.cpp
 *
 * Instructor: Debra Yarrington
 * TA: Laura
 *
 *
 * Created on: Feb 14, 2020
 * Author: jessicawu
 * Memo: This file contains functions for lab 1. The functions aren’t necessarily related
 * in any way other than that they are required for lab 1.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <math.h>

using namespace std;

void printGreetings();
/* No.Problem: 1
 * Parameter: None
 * Return: None
 *
 * This function prints "Hello, world!!!" to the screen.
 * It is used to show that the c++ compiler is working on my computer.
 */

int powerCalculator(int, int);
/* No.Problem: 2
 * Parameter: x(base), y(power)
 * Return: Result of x to the power of y.
 *
 * This function calculates x to the power of y and returns its result.
 *
 *INPUT: 2,3 ->8
 *INPUT: 3,4->81
 *INPUT: 4,11->4194304
 */

void verticalWord(char[]);
/* No.Problem: 3
 * Parameter: a word
 * Return: None
 *
 * This prints out every character in the string on its own line.
 *
 * INPUT: “cat” ->  c
 * 					a
 * 					t
 * INPUT: “byte”->  b
 * 					y
 *					t
 *					e
 * INPUT:”hi”-> h
 *				i
 */

void convertDigit(int);
/* No.Problem: 4
 * Parameter: int, a input parameter has only one digit.
 * Return: a string which shows the equivalent word.
 *
 * This function will transfer a single digit into the equivalent word.
 * It is used to change the format of number.
 *
 *INPUT: 3 -> "three"
 *INPUT: 7 -> "seven"
 *INPUT: 0 -> "zero"
 */
void printWord(char word[]);
/* No.Problem: 5
 * Parameter: word[], A string which are consists of many letters out of order.
 * Return: None.
 *
 * This function prints the word of the current string by skipping the char one by one.
 * It used to select specific letter to consist effective information for a mess-up string.
 *
 *INPUT: "prouteavtnos" -> potato
 *INPUT: "chorfafledey" -> coffee
 *INPUT: "nairbobylte" -> nibble
 */
bool isPalindrome(char*);
/* No.Problem: 6
 * Parameter: char *, take input as a string.
 * Return: boolean.
 *
 * This function checks whether the world is palindrome. Palindrome is a word, phrase,
 * or sequence that reads the same backward as forward, e.g., madam.
 * It is used to check the palindrome word.
 *
 *INPUT: "mom" -> true
 *INPUT: "palindrome" -> false
 *INPUT: "amanaplanpanama" -> true
 */
void printString(char[], int);
/* No.Problem: 7
 * Parameter: char[] & int, numList[] is a string consists many char. int is the length of the string
 * Return: None.
 *
 * This function will reverse strings which are provided.
 * It is used to change reverse string.
 *
 *INPUT: "cat" -> tac
 *INPUT: "byte" -> etyb
 *INPUT: "hi" -> ih
 */
void sumNumber(int n);
/* No.Problem: 8
 * Parameter: int n, a large int which has many digits.
 * Return: None.
 *
 * This function will add the digits in the number together and print out the sum.
 * It is used to sum the digits of a larger number.
 *
 *INPUT: 3278 -> 17
 *INPUT: 823 -> 13
 *INPUT: 1240293 -> 21
 */
void binaryToDemial(char*);
/* No.Problem: 9
 * Parameter: char*, this is a string consist many numbers.
 * Return: None.
 *
 * This function will transfer a binary number and convert it to a decimal number.
 * It is used to know the decimal number which are represented by the binary number.
 *
 *INPUT: "10110" -> 22
 *INPUT: "1000011" -> 67
 */
void perfectNumber();
/* No.Problem: 10
 * Parameter: None.
 * Return: None.
 *
 * This function can select all the perfect number between 2 and 10000. A perfect number is a number that is sum of
 * its positive divisors, excluding itself.
 * It is used to find which number is perfect number in a given range.
 *
 * Range: 2 ~ 10000 ->  6 is a perfect number.
						28 is a perfect number.
						496 is a perfect number.
						8128 is a perfect number.
 *
 */
void drawDiamond(int);
/* No.Problem: 11
 * Parameter: int, a number which set the half length of the graph and half width of graph.
 * Return: None.
 *
 * This function will print a specific graph like a diamond
 * It is used to draw a special graph.
 *
 *INPUT: 5 ->**********
 	 	 	 ****  ****
 	 	 	 ***    ***
 	 	 	 **      **
 	 	 	 *        *
 	 	 	 *        *
 	 	 	 **      **
 	 	 	 ***    ***
 	 	 	 ****  ****
 	 	 	 **********
 *INPUT: 4 ->********
 	 	 	 ***  ***
 	 	 	 **    **
 	 	 	 *      *
 	 	 	 *      *
 	 	 	 **    **
 	 	 	 ***  ***
 	 	 	 ********
 *INPUT: 7 ->**************
 	 	 	 ******  ******
 	 	 	 *****    *****
 	 	 	 ****      ****
 	 	 	 ***        ***
 	 	 	 **          **
 	 	 	 *            *
 	 	 	 *            *
 	 	 	 **          **
 	 	 	 ***        ***
 	 	 	 ****      ****
 	 	 	 *****    *****
 	 	 	 ******  ******
 	 	 	 **************
 */
void uniqueArray(int numList[], int len);
/* No.Problem: 12
 * Parameter: numList[] & len, numList[] is a string consists many numbers. len is int represents the length of
 * 				digits.
 * Return: None.
 *
 * This function select all the unique value in an array list and print them out.
 * It is used to remind the use whether they have duplicate elements in the array.
 *
 *INPUT: [3, 2, 3, 5, 1, 2, 3, 44, 2, 6, 1] -> 5 44 6
 *INPUT: [23, 46, 17, 19, 22, 18, 46, 2] -> 23 46 17 19 22 18 2
 *INPUT: [1, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 2, 1, 2] -> nothing will be printed out.
 */

void shiftArr(int*, int, int);

void matrixDiagonal(char[], int);
/* No.Problem: 14
 * Parameter: char[], int, char[] is the string consists of chars. int is the length of the char[].
 * Return: None.
 *
 * This function will create a square matrix from the array by first determining the largest square matrix that will
 * hold as many numbers as as possiable yet not have any blank space.
 * This equation is used to read in turn form the diagonal of the letters.
 *
 *INPUT: [3, 2, 3, 5, 1, 2, 3, 44, 2, 6, 1] -> 5 44 6
 *INPUT: [23, 46, 17, 19, 22, 18, 46, 2] -> 23 46 17 19 22 18 2
 *INPUT: [1, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 2, 1, 2] -> nothing will be printed out.
 */
void transposeMat(int, int, int**);

int main() {
	cout << "Problem 1" << endl;
	printGreetings();
	cout << "****************************************" << endl;

	cout << "Problem 2" << endl;
	cout << powerCalculator(2, 3) << endl;
	cout << powerCalculator(3, 4) << endl;
	cout << powerCalculator(4, 11) << endl;
	cout << "****************************************" << endl;

	cout << "Problem 3" << endl;
	verticalWord("cat");
	cout << "\n" << endl;
	verticalWord("byte");
	cout << "\n" << endl;
	verticalWord("hi");
	cout << "****************************************" << endl;

	cout << "Problem 4" << endl;
	convertDigit(3);
	convertDigit(7);
	convertDigit(0);
	cout << "****************************************" << endl;

	cout << "Problem 5" << endl;
	printWord("prouteavtnos");
	printWord("chorfafledey");
	printWord("nairbobylte");

	cout << "****************************************" << endl;

	cout << "Problem 6" << endl;
	std::cout << std::boolalpha << isPalindrome("mom") << endl;
	std::cout << std::boolalpha << isPalindrome("palindrome") << endl;
	std::cout << std::boolalpha << isPalindrome("faoaf") << endl;

	cout << "****************************************" << endl;

	cout << "Problem 7" << endl;

	char test1[2] = { 'e', 'h' };
	char test2[3] = { 'c', 'a', 't' };
	char test3[4] = { 'r', 'a', 'i', 'n' };

	printString(test1, 2);
	printString(test2, 3);
	printString(test3, 4);

	cout << "****************************************" << endl;

	cout << "Problem 8" << endl;
	sumNumber(3248);
	sumNumber(823);
	sumNumber(1240293);
	cout << "****************************************" << endl;

	cout << "Problem 9" << endl;
	binaryToDemial("10110");
	binaryToDemial("1000011");
	cout << "****************************************" << endl;

	cout << "Problem 10" << endl;
	perfectNumber();
	cout << "****************************************" << endl;

	cout << "Problem 11" << endl;
	drawDiamond(5);
	drawDiamond(4);
	drawDiamond(7);
	cout << "****************************************" << endl;

	cout << "Problem 12" << endl;
	int test121[11] = { 3, 2, 3, 5, 1, 2, 3, 44, 2, 6, 1 };
	int test122[8] = { 23, 46, 17, 19, 22, 18, 46, 2 };
	int test123[14] = { 1, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 2, 1, 2 };
	uniqueArray(test121, 11);
	uniqueArray(test122, 8);
	uniqueArray(test123, 14);

	cout << "Problem 13" << endl;
	int test131[6] = { 1, 2, 3, 4, 5, 6 };
	int test132[9] = { 3, 7, 2, 6, 4, 3, 1, 9, 8 };
	int test133[4] = { 7, 2, 4, 5 };

	shiftArr(test131, 6, 2);
	shiftArr(test132, 9, 4);
	shiftArr(test133, 4, 1);

	cout << "****************************************" << endl;

	cout << "Problem 14" << endl;
	char test141[16] = { 'r', 'a', 'i', 'n', 'r', 'a', 'i', 'n', 'r', 'a', 'i',
			'n', 'r', 'a', 'i', 'n' };
	char test142[12] = { 'c', 'a', 't', 'c', 'a', 't', 'c', 'a', 't', 'c', 'a',
			't' };
	char test143[9] = { 'd', 'o', 'g', 'd', 'o', 'g', 'd', 'o', 'g' };

	matrixDiagonal(test141, 16);
	matrixDiagonal(test142, 12);
	matrixDiagonal(test143, 9);
	cout << "****************************************" << endl;

	cout << "Problem 15" << endl;
	int test151[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };

	//transposeMat(3, 3,&test151[0]);

	cout << "****************************************" << endl;

	return 0;
}

void printGreetings() {
	cout << "!!!Hello, world!!!" << endl;
}

int powerCalculator(int x, int y) {
	int result = x;
	while (y > 1) {
		result *= x;
		y--;
	} //while

	return result;
}

void verticalWord(char word[]) {
	for (int i = 0; i < strlen(word); i++) {
		cout << word[i] << endl;
	}
}

void convertDigit(int x) {

	if (x == 0) {
		cout << "zero" << endl;
	} else if (x == 1) {
		cout << "one" << endl;
	} else if (x == 2) {
		cout << "two" << endl;
	} else if (x == 3) {
		cout << "three" << endl;
	} else if (x == 4) {
		cout << "four" << endl;
	} else if (x == 5) {
		cout << "five" << endl;
	} else if (x == 6) {
		cout << "six" << endl;
	} else if (x == 7) {
		cout << "seven" << endl;
	} else if (x == 8) {
		cout << "eight" << endl;
	} else if (x == 9) {
		cout << "nine" << endl;
	}
}

void printWord(char word[]) {
	int i = 0;
	int j = strlen(word);
	while (i < j) {
		cout << word[i];
		i += 2;
	}
	cout << "\n ";

}

void sumNumber(int x) {
	int sum = 0, m;
	while (x > 0) {
		m = x % 10;
		sum = sum + m;
		x = x / 10;
	}
	cout << sum << endl;
}

void binaryToDemial(char *x) {
	int sum = 0, base = 1;
	int i = strlen(x);
	while (i > 0) {
		int last_digit = x[i - 1] - '0';
		sum = sum + last_digit * base;
		base = base * 2;
		i--;
	}
	cout << sum << endl;
}

void perfectNumber() {
	int sum = 0;

	for (int i = 2; i < 10000; i++) {
		sum = 0;
		for (int j = 1; j < i; j++) {
			if (i % j == 0) {
				sum += j;
			}
		}
		if (sum == i) {
			cout << "\n";
			cout << i;
			cout << " is a perfect number.";
		}

	}
	cout << "\n";
}

void uniqueArray(int numList[], int len) {
	for (int i = 0; i < len; i++) {
		int countTime = 0;
		for (int j = 0; j < len; j++) {
			if (numList[i] == numList[j]) {
				countTime += 1;
			}
		}
		if (countTime == 1)
			cout << numList[i] << " ";
	}
	cout << "\n ";
}

void drawDiamond(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= n - i; j++) {
			cout << "*";
		}
		for (int j = 1; j <= 2 * (i - 1); j++) {
			cout << " ";
		}
		for (int j = 0; j <= n - i; j++) {
			cout << "*";
		}

		cout << endl;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		for (int j = 1; j <= 2 * (n - i); j++) {
			cout << " ";
		}
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}

		cout << endl;
	}

}

bool isPalindrome(char word[]) {
	int halfLen = strlen(word) / 2;
	for (int i = 0; i < halfLen; i++) {
		if (word[i] != word[strlen(word) - i - 1]) {
			return false;
		}

	}
	return true;
}

void printCharArr(char string[], int lenth) {
	for (int i = 0; i < lenth; i++) {
		cout << string[i];
	}
	cout << "\n";
}

char* inverseString(char string[], int lenth) {
	char temp;
	int halfLen = lenth / 2;
	for (int i = 0; i < halfLen; i++) {
		temp = string[i];
		string[i] = string[lenth - i - 1];
		string[lenth - i - 1] = temp;
	}
	return string;

}
void printString(char string[], int lenth) {
	printCharArr(string, lenth);
	string = inverseString(string, lenth);
	printCharArr(string, lenth);
}

void matrixDiagonal(char charArr[], int arrLen) {
	int matLen = sqrt(arrLen) - 1;
	char charMat[matLen][matLen];

	for (int i = 0, j = 0, k = 0; i < (matLen + 1) * (matLen + 1); i++) {
		charMat[j][k] = charArr[i];
		k++;
		if (k == matLen + 1) {
			j++;
			k = 0;
		}
	}

	for (int i = 0; i <= matLen; i++) {
		cout << charMat[i][i];

	}
	cout << "\n";

}

//void transposeMat( int x, int y,int intArr[][]) {
//
//
//	int row = x;
//	int col = y;
//
//	int tranMat[row-1][col-1];
//	for(int i = y-1, j = 0, h = 0, k = 0; (i == y - 1) and (j == x - 1);) {
//		tranMat[h][k] = intArr[i][j];
//		cout << tranMat[h][k];
//
//		k++;
//		i--;
//
//		if(k == col - 1) {
//			h++;
//			k = 0;
//			cout << "\n";
//		}
//		if(i == 0) {
//			j++;
//			i = y - 1;
//		}
//	}
//
//}

void shiftArr(int *intArr, int len, int offset) {
	int newArr[len];
	for (int i = offset, j = 0; j < len; j++, i++) {
		newArr[j] = intArr[i];
		cout << newArr[j] << ' ';
		if (i == len - 1)
			i = -1;

	}
	cout << "\n";
}

