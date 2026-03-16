#pragma once
class Counter
{
private:
	//fields
	int count;
public:
	//constructors
	Counter();
	Counter(int a);
	//methods
	void up();
	void dawn();
	int print();
};