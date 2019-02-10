/*

**************************************************************************************************
						Author : Rajendra Prajapat
						Aim : contains all classes required

**************************************************************************************************

*/


#pragma once
#include <string>
class Pass_Man
{
	//to store all the info of a site
	std::string Id;
	std::string User_Name;
	std::string User_Pass;
	std::string site_Link;
	std::string site_name;
	std::string sec_ques;
	std::string sec_ans;
	std::string Email;
	std::string Mob;

public:
	//required functions

	void Enter(std::string llp,std::string a, std::string b, std::string c, std::string d, std::string e, std::string f, std::string g, std::string h)
	{
		Id = llp;
		User_Name = a;
		User_Pass = b;
		site_Link = c;
		site_name = d;
		sec_ques = e;
		sec_ans = f;
		Email = g;
		Mob = h;
	}

//getters
	std::string GId() { return Id; }
	std::string GName() { return User_Name; }
	std::string GPass() { return User_Pass; }
	std::string GLink() { return site_Link; }
	std::string GSite() { return site_name; }
	std::string GQues() { return sec_ques; }
	std::string GAns() { return sec_ans; }
	std::string GMail() { return Email; }
	std::string GMob() { return Mob; }
};


//User class main for application
class UserClass
{
	std::string AdminName;
	std::string PassWord;
	std::string DOB;
	std::string Email;
public:

	void registeration(std::string a, std::string P, std::string d, std::string e)
	{
		AdminName = a;
		PassWord = P;
		DOB = d;
		Email = e;
	}
	std::string Gadm() { return AdminName; }
	std::string Gpass() { return PassWord; }
	std::string Gudob() { return DOB; }
	std::string Gmail() { return Email; }
	bool verifyPass(std::string p) {
		if (PassWord == p)
		{
			return true;
		}
		else return false;
	}

};
