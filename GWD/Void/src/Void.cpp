#include <gwdpch.h>
#include "GWD.h"

class MyClass
{
public:
	MyClass();
	~MyClass();

private:

};

MyClass::MyClass()
{
	std::cout << "Created!\n";
}

MyClass::~MyClass()
{
	std::cout << "Destroyed!\n";
}

void test()
{

}

int main()
{
		GWD::PS<MyClass> mcW;
	{
			GWD::PS<MyClass> mcs0;
			GWD::PS<MyClass> mcs1;
		{
			std::cout << "Inscope\n";
			//std::unique_ptr<MyClass> mc = std::make_unique<MyClass>();
			GWD::PS<MyClass> mcs = GWD::NewPS<MyClass>();
			mcW = mcs;
			mcs0 = mcs;
			mcs1 = mcs;
		}
	}
	std::cout << "outscope\n";

}