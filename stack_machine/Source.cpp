
#include "interpreter.h"



using namespace std;

int main()
{
	//string msg = "####################\nTest menu of stack machine. ";
	//while (true)
	//{
//		system("cls");
		
//	}

	
	try
	{
		bool debug_level = false;
		interpreter I("E:\\work\\c++saves\\training_projects\\stack_machine\\Tests\\test10_if_combination.txt", debug_level);
		I.interpret();
		cout << I.get_result() << endl;
	}
	catch (exception& ex)
	{
		cout << ex.what() << endl;
	}
	
	system("pause");
	return 0;
}