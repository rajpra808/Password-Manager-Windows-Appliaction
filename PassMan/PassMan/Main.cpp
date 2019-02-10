/*

**************************************************************************************************
						Author : Rajendra Prajapat
						Aim : Main file of the application ,Application will start from here

**************************************************************************************************

*/



#include "REGIS.h"
#include "welcome.h"
#include "Main.h"
#include "Login.h"
#include <Windows.h>
#include "operation.h"

using namespace PassMan; // This is your project name


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)

{

	//To create a file to save data
	// You can change the FilePath
	std::basic_string<TCHAR> FilePath = TEXT("C:\\PassMan\\");

	Operation::CreateFolder(FilePath);


	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew welcome());

	return 0;

}
