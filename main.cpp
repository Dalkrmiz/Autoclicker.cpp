#include <iostream>
#include <Windows.h>

using namespace std;


void clicker() {

	bool isClicking = false;
		while (true)
		{
			if (GetAsyncKeyState('X')) // checks if key X is pressed
			{
				isClicking = true;
			}

			else if (GetAsyncKeyState('Z')) 
			{
				isClicking = false;
			}

			if (isClicking == true)
			{
				mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
				mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
				Sleep(5); // delay between clicks
			}
		
		};

}


int main()
{
	cout << "press X to start and Z to stop the autoclicker!\n";
	clicker();
}
