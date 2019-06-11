#include <iostream>

using namespace std;

extern "C" void TellC(long);

void TellC(int Value)
{
	cout << "Rresultado " << Value << " Desde una funcion de ensamblador" << endl;
}