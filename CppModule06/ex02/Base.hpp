#pragma once
# include <time.h>
# include <iostream>

class Base
{
	public:
	Base() {}
	virtual ~Base() {}
};

class A : public Base
{
	public:
		A() {}
		virtual ~A() {}
};

class B : public Base
{
	public:
		B() {}
		virtual ~B() {}
};

class C : public Base
{
	public:
		C() {}
		virtual ~C() {}
};
