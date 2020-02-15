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
void printWord(char word[]);
void sumNumber(int n);
void binaryToDemial(char* x);

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

	cout << "Problem 8" << endl;
	sumNumber(3248);
	sumNumber(823);
	sumNumber(1240293);
	cout << "****************************************" << endl;

	cout << "Problem 9" << endl;
	binaryToDemial("10110");
	binaryToDemial("1000011");
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

void convertDigit(int x){

		if (x == 0){
			cout << "zero" << endl;
		}else if(x==1){
			cout << "one" << endl;
		}else if(x==2){
			cout << "two" << endl;
		}else if(x==3){
			cout << "three" << endl;
		}else if(x==4){
			cout << "four" << endl;
		}else if(x==5){
			cout << "five" << endl;
		}else if(x==6){
			cout << "six" << endl;
		}else if(x==7){
			cout << "seven" << endl;
		}else if(x==8){
			cout << "eight" << endl;
		}else if(x==9){
			cout << "nine" << endl;
		}
}

void printWord(char word[]){
	int i = 0;
    int j= strlen(word);
	while(i<j){
		cout << word[i];
		i+=2;
	}
	cout << "\n";

}

void sumNumber(int x){
	int sum = 0,m;
	while(x>0){
		m = x%10;
		sum = sum + m;
		x = x/10;
	}
	cout<<sum<<endl;
}

void binaryToDemial(char* x){
	int sum = 0,base =1;
	int i = strlen(x);
	while (i>0){
		int last_digit = x[i-1];
		sum = sum + last_digit * base;
		base = base * 2;
		i--;
	}
	cout << sum<< endl;
}
