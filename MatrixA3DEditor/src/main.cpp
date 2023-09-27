#include <iostream>
#include <memory>
#include <MatrixA3DCore/Application.hpp>

class MyApp : public MA::Application
{
	virtual void on_update() override
	{
		//std::cout << "Update Frame: " << frame++ << std::endl;
	}

	int frame = 0;

};

int main()
{
	auto myApp = std::make_unique<MyApp>();

	int returnCode = myApp->start(1024, 768, "MyApp");

	std::cin.get();

	return returnCode;
}