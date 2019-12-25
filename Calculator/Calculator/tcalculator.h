#ifndef _TCALCULATOR_H_
#define _TCALCULATOR_H_

#include "tstack.h"
#include <cmath>
#include <string>
#include <iostream>

using namespace std;


template <class T>
class TCalculator{
	string expr; //строка, содержащая выражение
	string postfix;
	TStack <char> st_c;  //символьный стек
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
	void ToPostfix() {               //Метод перевода из инфиксной записи в постфиксную
		string str = "("; //временная строка
		str += expr;
		str += ")";
		st_c.Clear(); //опустошаем стек
		postfix = ""; //Присвоить постфиксу пустую строку, чтобы не было остатков от прошлых вычислений
		for (int i = 0; i < str.size(); i++) { //от нуля до размера строки
			if (str[i] == '(') //если (, то кладём её в стек
				st_c.Push(str[i]);
			if (((str[i] >= '0') && (str[i] <= '9') )|| (str[i] == '.')) //если от нуля до 9 или ., то записываем в постфикс
				postfix += str[i];
			if (str[i] == ')') { //если ), то
				char tmp = st_c.Pop(); //присваиваем тмп то, что было на вершине стека
				while (tmp != '(') { //пока тмп не равно (
					postfix += tmp; //прибавляем к постфиксу тмп
					tmp = st_c.Pop(); //в тмп записываем следующее значение из стека
				}
			}
			if ((str[i] == '+') || (str[i] == '-') || (str[i] == '*') || (str[i] == '/') || (str[i] == '^')) {// если это одна из арифм операций
				postfix += " "; //вставляем в постфикс пробел
				char tmp = st_c.Pop(); //создаём тмп и присваиваем ему то, что на вершине стека
				while (prior(str[i]) <= prior(tmp)) {//пока приоритет данной операции меньiе или равен приоритету тмп
					if (st_c.IsEmpty()) throw - 1;
					else {
						postfix += tmp; //записываем в постфикс тмп
						tmp = st_c.Pop();
					}//тпм присваиваем то, что на вернише стека
				}
				st_c.Push(tmp); //кладём в стек тмп
				st_c.Push(str[i]); //кладём в стек символ
			}
		}
	}
	string GetPostfix() {
		return postfix;
	}
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
			throw -1;
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
#endif // !_TCALCULATOR_H_
