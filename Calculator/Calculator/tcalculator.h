//tcalculator.h
#ifndef _TCALCULATOR_H_
#define _TCALCULATOR_H_

#include "tstack.h"
#include <cmath>
#include <string>
#include <iostream>

using namespace std;


template <class T>
class TCalculator {
	string expr; //string contains expression
	string postfix;
	TStack <char> st_c;  //stack of symbols
	TStack <double> st_d;
public:
	void SetExpr(string s) {
		expr = s;
	}
	string GetExpr() {
		return expr;
	}
	int prior(char c) {              //Приоритеты операций
		if (c == '(')
			return 0;
		if ((c == '+') || (c == '-'))
			return 1;
		if ((c == '*') || (c == '/'))
			return 2;
		if (c == '^')
			return 3;
	}

	//Method of transfer from infix to postfix
	void ToPostfix() {
		string str = "("; //temporary string
		str += expr;
		str += ")";
		st_c.Clear(); //clean stack
		postfix = ""; //assign the postfix an empty string so that there are no residuesfrom previous calculation 
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(')
				st_c.Push(str[i]);
			if (((str[i] >= '0') && (str[i] <= '9')) || (str[i] == '.'))
				postfix += str[i];
			if (str[i] == ')') {
				char tmp = st_c.Pop();
				while (tmp != '(') {
					postfix += tmp;
					tmp = st_c.Pop();
				}
			}
			if ((str[i] == '+') || (str[i] == '-') || (str[i] == '*') || (str[i] == '/') || (str[i] == '^')) {
				postfix += " ";
				char tmp = st_c.Pop();
				while (prior(str[i]) <= prior(tmp)) {
					if (st_c.IsEmpty()) throw - 1;
					else {
						postfix += tmp;
						tmp = st_c.Pop();
					}
				}
				st_c.Push(tmp);
				st_c.Push(str[i]);
			}
		}
	}

	//Getting postfix
	string GetPostfix() {
		return postfix;
	}

	//Calculating method
	double calc() {
		st_d.Clear();
		char* tmp;
		double res = 0;
		for (int i = 0; i < postfix.length(); i++) {
			if (postfix[i] >= '0' && postfix[i] <= '9') {
				double d = strtod(&postfix[i], &tmp);
				int j = tmp - &postfix[i];
				i += j - 1;
				st_d.Push(d);
			}
			if ((postfix[i] == '*') || (postfix[i] == '/') || (postfix[i] == '+') || (postfix[i] == '-') || (postfix[i] == '^')) {
				double op1, op2;
				op2 = st_d.Pop();
				op1 = st_d.Pop();
				if (postfix[i] == '+') {
					res = op1 + op2;
				}
				if (postfix[i] == '-')
					res = op1 - op2;
				if (postfix[i] == '*')
					res = op1 * op2;
				if (postfix[i] == '/')
					res = op1 / op2;
				if (postfix[i] == '^')
					res = pow(op1, op2);
				st_d.Push(res);
			}
		}
		if (st_d.IsEmpty())
			throw - 1;
		else
			res = st_d.Pop();
		return res;
	}
	bool Check() {
		st_c.Clear();
		for (int i = 0; i < expr.size(); i++) {
			if (expr[i] == '(')
				st_c.Push(expr[i]);
			if (expr[i] == ')') {
				if (st_c.IsEmpty())
					return false;
				else
					st_c.Pop();
			}
		}
		return st_c.IsEmpty();
	}
};
#endif 
