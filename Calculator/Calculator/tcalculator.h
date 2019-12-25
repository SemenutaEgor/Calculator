#ifndef _TCALCULATOR_H_
#define _TCALCULATOR_H_

#include "tstack.h"
#include <cmath>
#include <string>
#include <iostream>

using namespace std;


template <class T>
class TCalculator{
	string expr; //������, ���������� ���������
	string postfix;
	TStack <char> st_c;  //���������� ����
	TStack <double> st_d;
public:	
	void SetExpr(string s) {
		expr = s;
	}
	string GetExpr() {
		return expr;
	}
	int prior(char c) {              //���������� ��������
		if (c == '(')
			return 0;
		if ((c == '+') || (c == '-'))
			return 1;
		if ((c == '*') || (c == '/'))
			return 2;
		if (c == '^')
			return 3;
	}
	void ToPostfix() {               //����� �������� �� ��������� ������ � �����������
		string str = "("; //��������� ������
		str += expr;
		str += ")";
		st_c.Clear(); //���������� ����
		postfix = ""; //��������� ��������� ������ ������, ����� �� ���� �������� �� ������� ����������
		for (int i = 0; i < str.size(); i++) { //�� ���� �� ������� ������
			if (str[i] == '(') //���� (, �� ����� � � ����
				st_c.Push(str[i]);
			if (((str[i] >= '0') && (str[i] <= '9') )|| (str[i] == '.')) //���� �� ���� �� 9 ��� ., �� ���������� � ��������
				postfix += str[i];
			if (str[i] == ')') { //���� ), ��
				char tmp = st_c.Pop(); //����������� ��� ��, ��� ���� �� ������� �����
				while (tmp != '(') { //���� ��� �� ����� (
					postfix += tmp; //���������� � ��������� ���
					tmp = st_c.Pop(); //� ��� ���������� ��������� �������� �� �����
				}
			}
			if ((str[i] == '+') || (str[i] == '-') || (str[i] == '*') || (str[i] == '/') || (str[i] == '^')) {// ���� ��� ���� �� ����� ��������
				postfix += " "; //��������� � �������� ������
				char tmp = st_c.Pop(); //������ ��� � ����������� ��� ��, ��� �� ������� �����
				while (prior(str[i]) <= prior(tmp)) {//���� ��������� ������ �������� ����i� ��� ����� ���������� ���
					if (st_c.IsEmpty()) throw - 1;
					else {
						postfix += tmp; //���������� � �������� ���
						tmp = st_c.Pop();
					}//��� ����������� ��, ��� �� ������� �����
				}
				st_c.Push(tmp); //����� � ���� ���
				st_c.Push(str[i]); //����� � ���� ������
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
};
#endif // !_TCALCULATOR_H_
