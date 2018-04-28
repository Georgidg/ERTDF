#pragma once
#include<iostream>
#include<string>
using namespace std;


class CircularInt
{

public:
	int start, end;
    int current;
	CircularInt(int, int);
	CircularInt( const CircularInt& );
	~CircularInt();
CircularInt &operator++(int);
CircularInt &operator+=(const int num);
CircularInt &operator+=(const CircularInt &);
CircularInt &operator--(int);
CircularInt &operator-=(const int num);
CircularInt &operator-=(const CircularInt &);
CircularInt &operator*=(const int num);
CircularInt &operator/=(const int num);
void setcurrent(int);
friend ostream &operator<<(ostream &out, const CircularInt &c);
friend istream &operator>>(istream &in, const CircularInt &c);
friend CircularInt operator-(const CircularInt &p);
friend CircularInt operator+(const CircularInt &t, const int num);
friend CircularInt operator+(const int num, const CircularInt &t);
friend CircularInt operator+(const CircularInt &cir, const CircularInt &other);
friend CircularInt operator-(const CircularInt &t, const int num);
friend CircularInt operator-(const CircularInt &t, const CircularInt &cir);
friend CircularInt operator-(const int num, const CircularInt &t);
friend CircularInt operator*(const CircularInt &cir, const CircularInt &other);
friend CircularInt operator*(const CircularInt &cir, const int num);
friend CircularInt operator*(const int num, const CircularInt &cir);
friend CircularInt operator/(const CircularInt &cir, const CircularInt &other);
friend CircularInt operator/(const CircularInt &cir, const int num);
friend CircularInt operator/(const int num, const CircularInt &cir);
friend bool operator==(const CircularInt &t, const CircularInt &cir);
friend bool operator==(const int t, const CircularInt &cir);
friend bool operator==(const CircularInt &cir, const int t);
friend bool operator!=(const CircularInt &t, const CircularInt &cir);
friend bool operator!=(const int t, const CircularInt &cir);
friend bool operator!=(const CircularInt &cir, const int t);
friend bool operator<(const CircularInt &t, const CircularInt &cir);
friend bool operator<(const int t, const CircularInt &cir);
friend bool operator<(const CircularInt &cir, const int t);
friend bool operator>(const CircularInt &t, const CircularInt &cir);
friend bool operator>(const int t, const CircularInt &cir);
friend bool operator>(const CircularInt &cir, const int t);
friend bool operator>=(const CircularInt &t, const CircularInt &cir);
friend bool operator>=(const int t, const CircularInt &cir);
friend bool operator>=(const CircularInt &cir, const int t);
friend bool operator<=(const CircularInt &t, const CircularInt &cir);
friend bool operator<=(const int t, const CircularInt &cir);
friend bool operator<=(const CircularInt &cir, const int t);
friend CircularInt operator*=(const CircularInt &cir, const CircularInt &other);
friend CircularInt operator/=(const CircularInt &cir, const CircularInt &other);
CircularInt &operator=(const int);
int getstart();
int getend();
};
inline CircularInt operator-(const CircularInt &cir)
{
	CircularInt temp(cir);
	temp.current = temp.end - temp.current;
	return temp;
}
inline CircularInt operator-(const CircularInt &t, const int num)
{
	CircularInt temp(t);
	temp -= num;
	return temp;
}

inline CircularInt operator-(const int num, const CircularInt &t)
{
	return -(t - num);
}

inline CircularInt operator-(const CircularInt &cir, const CircularInt &other)
{
	return cir - other.current;
}

inline CircularInt operator+(const CircularInt &t, const int num)
{
	CircularInt temp(t);
	temp += num;
	return temp;
}

inline CircularInt operator+(const int num, const CircularInt &t)
{
	return t + num;
}

inline CircularInt operator+(const CircularInt &cir, const CircularInt &other)
{
	return cir + other.current;
}

inline CircularInt operator*(const CircularInt &cir, const CircularInt &other)
{
	return cir * other.current;
}
inline CircularInt operator*(const CircularInt &t, const int num)
{
	CircularInt temp(t);
	temp *= num;
	return temp;
}
inline CircularInt operator*(const int num, const CircularInt &t)
{
	return t * num;
}

inline CircularInt operator/(const CircularInt &cir, const CircularInt &other)
{
	return cir / other.current;
}
inline CircularInt operator/(const CircularInt &t, const int num)
{
	CircularInt temp(t);
	temp /= num;
	return temp;
}

inline CircularInt operator/(const int num, const CircularInt &cir)
{
	return cir / num;
}

inline bool operator==(const CircularInt &cir, const CircularInt &other)
{
	return cir.current == other.current;
}

inline bool operator==(const int val, const CircularInt &cir)
{
	return val == cir.current;
}

inline bool operator==(const CircularInt &cir, const int a)
{
	return cir.current == a;
}

inline bool operator!=(const CircularInt &cir, const CircularInt &other)
{
	return cir.current != other.current;
}

inline bool operator!=(const int a, const CircularInt &cir)
{
	return a != cir.current;
}

inline bool operator!=(const CircularInt &cir, const int t)
{
	return t != cir;
}

inline bool operator<(const CircularInt &cir, const CircularInt &other)
{
	return cir.current < other.current;
}

inline bool operator<(const int t, const CircularInt &cir)
{
	return t < cir.current;
}

inline bool operator<(const CircularInt &cir, const int t)
{
	return cir.current < t;
}

inline bool operator>(const CircularInt &t, const CircularInt &cir)
{
	return t.current > cir.current;
}

inline bool operator>(const int t, const CircularInt &cir)
{
	return t > cir.current;
}

inline bool operator>(const CircularInt &cir, const int t)
{
	return cir.current > t;
}
inline bool operator>=(const CircularInt &cir, const CircularInt &other)
{
	return cir.current >= other.current;
}

inline ostream &operator<<(ostream &out, const CircularInt &c)
{
	out << c.current;
	return out;
}

inline bool operator>=(const int t, const CircularInt &cir)
{
	return t >= cir.current;
}

inline bool operator>=(const CircularInt &cir, const int t)
{
	return cir.current >= t;
}

inline bool operator<=(const CircularInt &t, const CircularInt &cir)
{
	return t.current <= cir.current;
}

inline bool operator<=(const int t, const CircularInt &cir)
{
	return t <= cir.current;
}

inline bool operator<=(const CircularInt &cir, const int t)
{
	return cir.current <= t;
	;
}

inline istream &operator>>(istream &input, CircularInt &c)
{
	ios::pos_type startPosition = input.tellg();
	int t;
	input >> t;
	if (t > c.getstart() && t < c.getend())
	{
		c.setcurrent(t);
	}
	else
	{
		int p = c.getend() - c.getstart() + 1;
		if (t > c.getend())
		{

			while (t > c.getend())
				t = t - p;
			c.setcurrent(t);
		}
		else
		{
			if (t < c.getstart())
			{

				while (t < c.getstart())
					t = t + p;
			}
			c.setcurrent(t);
		}
	}
	return input;
}

inline CircularInt operator*=(const CircularInt &cir, const CircularInt &other)
{
	return cir * other;
}

inline CircularInt operator/=(const CircularInt &cir, const CircularInt &other)
{
	return cir / other;
}