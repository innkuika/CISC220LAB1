/*
 * mainfile.cpp
 *
 * Instructor: Debra Yarrington
 * TA: Laura
 *
 *
 *  Created on: Feb 14, 2020
 *  Author: jessicawu
 *  Memo: This file contains functions for lab 1. The functions aren’t necessarily related
 * in any way other than that they are required for lab 1.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

void printGreetings();
/* Parameter: None
 * Return: None
 *
 * This function prints "Hello, world!!!" to the screen.
 * It is used to show that the c++ compiler is working on my computer.
 */

int powerCalculator(int, int);
/* Parameter: x(base), y(power)
 * Return: Result of x to the power of y.
 *
 * This function calculates x to the power of y and returns its result.
 *
 *INPUT: 2,3 ->8
 *INPUT: 3,4->81
 *INPUT: 4,11->4194304
 */

void verticalWord(char[]);
/* Parameter: a word
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

	return (0);
} //main

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






























