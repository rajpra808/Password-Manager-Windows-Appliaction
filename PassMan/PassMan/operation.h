/*

**************************************************************************************************
						Author : Rajendra Prajapat
						Aim : defination of all required functions

**************************************************************************************************

*/



#pragma once

#include <iostream>
#include<sstream>
#include <vector>
#include <string>
#include "Content.h"
#include <Windows.h>
#include <time.h>
namespace  Operation {
	std::string FilePath = "C:\\PassMan\\";   //data will store here
	std::vector<UserClass> usrs;						//Variable to store all the admins data
	std::vector<Pass_Man> ppl;     //all passwords will store in this vector for a user

	std::string adm;           //Store the admin name to show in main window
	std::string  globalID;     // Used in modify function
	bool Idselected = 0;
	Pass_Man View_id;          //store the  person details
	int IdArrayGen[1000];


	void init()
	{
		for (unsigned int i = 0; i < 1000; i++)
		{
			IdArrayGen[i] = 0;
		}
	}

//generates unick id
	int GenId()
	{
//		srand(time(NULL));
		int k = rand() % 1000;
		while (IdArrayGen[k] != 0)
		{
			k = rand() % 1000;
		}
		int j = k;
		IdArrayGen[k] = j;

		return j;
	}


//update id when there is change or loading the data
	void update_Id(std::string x)
	{
		std::istringstream IIDD(x);
		int l = 0;
		IIDD >> l;
		int z = l;
		if (z < 1000)
		{
			IdArrayGen[z] = l;
	}
	}
// to find index
	int findIndex(std::string x)
	{
		for (unsigned int i = 0; i < ppl.size(); i++)
		{
			if (ppl[i].GId() == x)
			{
				return i;
			}
		}
		return -1;
	}
	//to create folder

	void CreateFolder(std::basic_string<TCHAR> path)
	{

		if (!CreateDirectory(path.c_str(), NULL))
		{
			return;
		}

	}


	//funciton to Search
	int findme(std::string x)
	{
		if (usrs.size() == 0)
		{
			return -12;
		}
		for (unsigned int i = 0; i < usrs.size(); i++)
		{
			if (usrs[i].Gadm() == x)
			{
				return i;
			}
		}
		return -12;
	}





}
