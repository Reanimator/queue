#include "Queue.h"
#include <iostream>

using namespace std;

int main()
{
	try
	{


		Queue <int> temp(200);

		temp.push(1235);
		temp.push(437);
		temp.push(2225);
		temp.push(4110);
		temp.resize(9);
		temp.writeTop(std::string("queue.txt"));
		cout << temp.pop(); 
		cout << " " << temp.pop(); 
		cout << " " << temp.pop() << endl;
	}
	catch (int & e)
	{
		cout << "error number: " << e << endl;
	}
	cin.get();
	return 0;
}


