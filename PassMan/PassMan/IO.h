/*

**************************************************************************************************
						Author : Rajendra Prajapat
						Aim : For perform  Input Output Operation

**************************************************************************************************

*/


#pragma once

#include<iostream>
#include<sstream>
#include "operation.h"
#include<fstream>
#include<vector>
#include "Content.h"
#include "secure.h"
//#include "oper.h"


using namespace std;
using namespace Operation;


void WriteTOFile(vector<Pass_Man> &vect, string filename)
{

	filename = FilePath + filename;
	/*
	User_Name = a;
		User_Pass = b;
		site_Link = c;
		site_name = d;
		sec_ques = e;
		sec_ans = f;
		Email = g;
		Mob = h;
	*/
	fstream file;
	file.open(filename, ios::out | ios::trunc);  //open file.txt
	for (unsigned int i = 0; i < vect.size(); i++)  //write all objects to file
	{
		file << vect[i].GId() << endl;   //occupation
		file << secure_me(vect[i].GName()) << endl;   //occupation
		file << secure_me(vect[i].GPass()) << endl;  //first name
		file << secure_me(vect[i].GLink()) << endl;    // middile name
		file << secure_me(vect[i].GSite()) << endl;   //  mobile number
		file << secure_me(vect[i].GQues()) << endl;  //last name
		file << secure_me(vect[i].GAns()) << endl;   //Date of DateOfBirth
		file << secure_me(vect[i].GMail()) << endl; //city name
		file << secure_me(vect[i].GMob()) << endl; //city name
	}
	file.close(); //close the file
}

void WriteTOFileSec(vector<UserClass> &vect)
{

	/*
	name
	pass
	dob
	email
	*/
	fstream file;
	file.open(FilePath + "usr.txt", ios::out | ios::trunc);  //open file.txt
	for (unsigned int i = 0; i < vect.size(); i++)  //write all objects to file
	{
		file << secure_me(vect[i].Gadm()) << endl;   //occupation
		file << secure_me(vect[i].Gpass()) << endl;  //first name
		file << secure_me(vect[i].Gudob()) << endl;    // middile name
		file << secure_me(vect[i].Gmail()) << endl;   //  mobile number
	}
	file.close(); //close the file
}



int LoadData(vector<Pass_Man> &vect, string filename)
{
	filename = FilePath + filename;
	vect.clear();
	fstream file;
	file.open(filename, ios::in); //open file in read mode
	if (!file)
	{
		return 123;
	}
	while (file)
	{
		Pass_Man A; //
		string a, b, c, d, e, f, g,h,i;

		/*
	User_Name = a;
		User_Pass = b;
		site_Link = c;
		site_name = d;
		sec_ques = e;
		sec_ans = f;
		Email = g;
		Mob = h;
	*/

		getline(file, i); //id
		getline(file, a); //id
		getline(file, b); //first name
		getline(file, c); //first name
		getline(file, d); //first name
		getline(file, e); //first name
		getline(file, f); //first name
		getline(file, g); //first name
		getline(file, h);
		i = decrypt_me(i);
		a = decrypt_me(a);
		b = decrypt_me(b);
		c = decrypt_me(c);
		d = decrypt_me(d);
		e = decrypt_me(e);
		f = decrypt_me(f);
		g = decrypt_me(g);
		h = decrypt_me(h);
		update_Id(i);
		//enter(std::string i,std::string n, std::string f, std::string mob, std::string ci, std::string str, std::string oc)

		A.Enter(i,a, b, c, d, e, f, g,h);
		vect.push_back(A);

	}
	vect.erase(vect.end()-1);
	file.close(); //close the file
	return 1;
}

int LoadDataSec(vector<UserClass> &vect)
{
	fstream file;
	file.open(FilePath + "usr.txt", ios::in); //open file in read mode
	if (!file)
	{
		return 123;
	}
	while (file)
	{
		UserClass A; //
		string a, b, c, d;

		getline(file, a); //id
		getline(file, b);
		getline(file, c);
		getline(file, d);

		a = decrypt_me(a);
		b = decrypt_me(b);
		c = decrypt_me(c);
		d = decrypt_me(d);

		A.registeration(a, b, c, d);
		vect.push_back(A);
	}

	file.close(); //close the file
	return 1;
}
