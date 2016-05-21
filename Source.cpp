#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

class Band
{
protected:
	int count;

public:
	Band()
	{
		count = 10;
	}
	virtual int Count() = 0;
	virtual string type() = 0;
	int getCount()
	{
		return count;
	}
};

class MetalBand : public Band
{
private:
	int mem;

public:
	MetalBand(int m)
	{
		this->mem = m;
	}

	string type()
	{
		return "Metal ";
	}
	int Count()
	{
		return getCount() + mem;
	}

};

class JazzBand : public Band
{
private:

public:
	string type()
	{
		return "Jazz";
	}
	int Count()
	{
		return getCount() + 4;
	}

};

class MarchingBand : public Band
{
private:

public:
	string type()
	{
		return "Marching";
	}
	int Count()
	{
		return getCount() + 6;
	}
};

class SymphonyBand : public Band
{
private:

public:
	string type()
	{
		return "Symphony";
	}
	int Count()
	{
		return getCount() + 8;
	}
};

int main()
{
	Band *ptr;

	MetalBand mt(2);
	mt.Count();
	ptr = &mt;

	cout << "Band: " << ptr->type();
	cout << endl << "Members :" << ptr->Count();

	cout << endl;

	JazzBand jb;
	jb.Count();
	ptr = &jb;

	cout << endl << "Band: " << ptr->type();
	cout << endl << "Members :" << ptr->Count();

	cout << endl;

	MarchingBand mb;
	mb.Count();
	ptr = &mb;

	cout << endl << "Band: " << ptr->type();
	cout << endl << "Members :" << ptr->Count();

	cout << endl;

	SymphonyBand sb;
	sb.Count();
	ptr = &sb;

	cout << endl << "Band: " << ptr->type();
	cout << endl << "Members :" << ptr->Count();

	_getch();
	return 0;
}