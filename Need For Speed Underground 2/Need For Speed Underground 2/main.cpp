// Need for Speed Underground 2 - Open Sourcer by Nowak

#include <iostream>
#include <Windows.h>

const int nitro_set = 50000;
float default_speed = 350.0000000;
float high_speed = 550.0000000;
const int ultra_speed_default = 1072000000;
const int ultra_speed_high = 1169000000;


int main()
{
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		/*
			Place the address found by the cheat engine here with 0x before the address
			Ex: Cheat Engine Address found = 7635358;
			Type 0x7635358
											Have Fun!! :)
		*/

	DWORD Acceleration_Speed_​​Increase_Address = 0x78A0498;
	DWORD Nitro_Address = 0x07A2A6F4;
	DWORD ULTRA_Acceleration_Speed_Address = 0x07A2A6F0;


	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		// Program, Don't modify if you don't know

	HWND hwnd = FindWindowA(NULL, "NFS Underground 2");

	if (hwnd == NULL)
	{
		system("cls");
		std::cout << "Please, open the Need For Speed Underground 2 ..."; Sleep(2500); exit(-1);
	}

	DWORD ProcessID;
	GetWindowThreadProcessId(hwnd, &ProcessID);
	HANDLE Access = OpenProcess(PROCESS_ALL_ACCESS, FALSE, ProcessID);

	int options;

init:
	// MENU
	void menu(); menu();
	std::cin >> options;
	if (options > 4)
	{
		system("cls");
		std::cout << "                         Need For Speed Underground 2                         " << std::endl;
		std::cout << "\nINCORRECT OPTION !!, Try Again ..."; Sleep(2300); goto init;
	}

	// Infinity Nitro

	switch (options)
	{

	case 1:

		system("cls");

		std::cout << "                         Need For Speed Underground 2                         " << std::endl;
		std::cout << "\nSelected Hack: Infinity Nitro\n------------------------------\n\n*KEY BIND*: ALT\n\n";


		for (;;)
		{
			if (GetAsyncKeyState(VK_MENU))
			{
				WriteProcessMemory(Access, (LPVOID)Nitro_Address, &nitro_set, sizeof(nitro_set), 0);
				std::cout << "Nitro Setted\n- - - - - - - -\n";
				Sleep(100);
			}

			else if (GetAsyncKeyState(VK_F12))
			{
				goto init;
			}

		}

		break;
		//


		// Acceleration Speed ​​Increase
	case 2:

		system("cls");
		std::cout << "                         Need For Speed Underground 2                         " << std::endl;
		std::cout << "\nSelected Hack: Acceleration Speed Increase\n------------------------------\n\n*KEY BINDS*:\n";
		std::cout << "\n[ F1 ] - Default Acceleration Speed {recomended}";
		std::cout << "\n[ F2 ] - High Acceleration Speed";
		std::cout << "\n\n";

		for (;;)
		{
			if (GetAsyncKeyState(VK_F1))
			{
				WriteProcessMemory(Access, (LPVOID)Acceleration_Speed_​​Increase_Address, &default_speed, sizeof(default_speed), 0);
				std::cout << "Default Acceleration Speed Setted\n- - - - - - - -\n";
				Sleep(100);
			}

			if (GetAsyncKeyState(VK_F2))
			{
				WriteProcessMemory(Access, (LPVOID)Acceleration_Speed_​​Increase_Address, &high_speed, sizeof(high_speed), 0);
				std::cout << "High Acceleration Speed Setted\n- - - - - - - -\n";
				Sleep(100);
			}

			else if (GetAsyncKeyState(VK_F12))
			{
				goto init;
			}

		}

		//
		break;

		// ULTRA Acceleration Speed
	case 3:

		system("cls");

		std::cout << "                         Need For Speed Underground 2                         " << std::endl;
		std::cout << "\nSelected Hack: ULTRA Acceleration Speed\n------------------------------\n\n*KEY BINDS*:\n";
		std::cout << "\n[ F3 ] - Default Ultra Speed {recomended}";
		std::cout << "\n[ F4 ] - High Ultra Speed";

		for (;;)
		{
			if (GetAsyncKeyState(VK_F3))
			{
				WriteProcessMemory(Access, (LPVOID)ULTRA_Acceleration_Speed_Address, &ultra_speed_default, sizeof(ultra_speed_default), 0);
				std::cout << "Default Ultra Speed Setted\n- - - - - - - -\n";
				Sleep(100);
			}

			else if (GetAsyncKeyState(VK_F12))
			{
				goto init;
			}

			if (GetAsyncKeyState(VK_F4))
			{
				WriteProcessMemory(Access, (LPVOID)ULTRA_Acceleration_Speed_Address, &ultra_speed_high, sizeof(ultra_speed_high), 0);
				std::cout << "High Ultra Speed Setted\n- - - - - - - -\n";
				Sleep(100);
			}

		}

		break;

	case 4:

		int y = 0;

		do
		{

			if (GetAsyncKeyState(VK_MENU))
			{
				WriteProcessMemory(Access, (LPVOID)Nitro_Address, &nitro_set, sizeof(nitro_set), 0);
			}

			if (GetAsyncKeyState(VK_F3))
			{
				WriteProcessMemory(Access, (LPVOID)ULTRA_Acceleration_Speed_Address, &ultra_speed_default, sizeof(ultra_speed_default), 0);
			}

			if (GetAsyncKeyState(VK_F4))
			{
				WriteProcessMemory(Access, (LPVOID)ULTRA_Acceleration_Speed_Address, &ultra_speed_high, sizeof(ultra_speed_high), 0);

				if (hwnd == NULL)
				{
					system("cls");
					std::cout << "The Game has be Crashed, Don't use the F4 key a lot "; Sleep(3500); exit(-1);
				}

			}

			if (GetAsyncKeyState(VK_F1))
			{
				WriteProcessMemory(Access, (LPVOID)Acceleration_Speed_​​Increase_Address, &default_speed, sizeof(default_speed), 0);
			}

			if (GetAsyncKeyState(VK_F2))
			{
				WriteProcessMemory(Access, (LPVOID)Acceleration_Speed_​​Increase_Address, &high_speed, sizeof(high_speed), 0);
			}

			else if (GetAsyncKeyState(VK_F12))
			{
				goto init;
			}

		} while (y == 0);

	}

	return 0;

}

void menu()
{
	system("cls");
	std::cout << "                         Need For Speed Underground 2                         " << std::endl;
	std::cout << "\n**********************";
	std::cout << "\n  SELECT ONE OPTION\n";
	std::cout << "**********************\n";
	std::cout << "---------------------------------------------------------------";
	std::cout << "\n[ 1 ] - Infinity Nitro (BOTS will also have infinity nitro)\n";
	std::cout << "---------------------------------------------------------------";
	std::cout << "\n[ 2 ]  - Acceleration Speed Increase (Only for you)\n";
	std::cout << "---------------------------------------------------------------";
	std::cout << "\n[ 3 ] - ULTRA Acceleration Speed (BOTS will also have ULTRA Acceleration Speed)                        {use to go through walls}\n";
	std::cout << "---------------------------------------------------------------";
	std::cout << "\n[ 4 ] - Active All ( can crash )\n";
	std::cout << "---------------------------------------------------------------";
	std::cout << "\n[ F12 ] - Back to Menu\n";
	std::cout << "---------------------------------------------------------------";
	std::cout << std::endl;
}
