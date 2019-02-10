/*

**************************************************************************************************
						Author : Rajendra Prajapat
						Aim : contains encryption and decryption functions

**************************************************************************************************

*/


#pragma once

#include<string>
#include<iostream>

//encryption function
//anyone can change this function according to there requirements
std::string secure_me(std::string data)
{
	for (unsigned int i = 0; i < data.size(); i++)
	{
		data.at(i) = data.at(i) + 1;    //
	}
	return data;
}

//decryption function
std::string decrypt_me(std::string data)
{
	for (unsigned int i = 0; i < data.size(); i++)
	{
		data.at(i) = data.at(i) - 1;    //
	}
	return data;
}
