using namespace std;
#include <iostream>

class Base
{
public:
    Base() {}
	virtual ~Base() {}

	virtual void err() const{
		cerr << "Base error\n";
	}
};

class Derived: public Base
{
public:
    Derived() {}
	~Derived() override {}

	void err() const override{
		cerr << "Derived error\n";
	}
};

int main()
{
    try
    {
        throw Derived();
    }
    catch (const Base& base)
    {
        base.err();
    }
    // catch (const Derived& derived)
    // {
    //     derived.err();
    // }

    return 0;
}