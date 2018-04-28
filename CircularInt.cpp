
#include "CircularInt.hpp"


CircularInt::CircularInt(int _start, int _end)
{
	this->start = _start;
	this->end = _end;
	this->current = _start;
}


CircularInt::CircularInt(const CircularInt& other) :start(other.start), end(other.end), current(other.current)
{}

CircularInt::~CircularInt()//destructor
{
}

CircularInt &CircularInt::operator++(int)
{
	return (*this += 1);
}

CircularInt &CircularInt::operator+=(const int num)
{
	int t = end - start + 1;
	current = ((current - start) + (num % t)) % t + start;
	return *this;
}

CircularInt &CircularInt::operator+=(const CircularInt &c)
{
	return *this += c.current;
}

CircularInt &CircularInt::operator--(int)
{
	return (*this -= 1);
}

CircularInt &CircularInt::operator-=(const int num)
{
	int t = end - start + 1;
	current = ((current - end) - (num % t)) % t + end;
	return *this;
}

CircularInt &CircularInt::operator-=(const CircularInt &c)
{
	return *this -= c.current;
}

CircularInt &CircularInt::operator*=(const int num)
{
	for (int i = 1; i < num; i++)
	{
		*this += current;
	}
	return *this;
}

CircularInt &CircularInt::operator/=(const int num)
{
	CircularInt temp(start, end);
	for (int i = start; i < end; i++)
	{
		temp.current = i;
		temp *= num;
		if (current == temp.current)
		{
			current = i;
			return *this;
		}
	}
	string ans = "here is no number x in {" + to_string(start) + "," + to_string(end) + "} such that x*" + to_string(num) + "=10";
	throw ans;
}

CircularInt &CircularInt::operator=(const int num)
{
	if (num >= this->start && num <= this->end)
	{
		this->current = num;
		return *this;
	}
	string er = "Error";
	throw er;
}
int CircularInt::getstart()
{
	return start;
}
int CircularInt::getend()
{
	return end;
}
void CircularInt::setcurrent(int num)
{
	this->current = num;
}


