#include "Person.h"

//in order to write and use strings without constantly writing std::string 
#include <iostream>
using namespace std;

Person::Person()
{
	mFirstName = "Default";
	mLastName = "Default";
	mBirthdateDay = 1;
	mBirthdateMonth = "Default";
	mBirthdateYear = 2000;
	mMoney = 0;
	mCar = "Default";
	mGender = "Default";
}

Person::Person(string firstName, string lastName, int birthdateDay, string birthdateMonth, int birthdateYear, int money, string car, string gender)
{
	mFirstName = firstName;
	mLastName = lastName;
	mBirthdateDay = birthdateDay;
	mBirthdateMonth = birthdateMonth;
	mBirthdateYear = birthdateYear;
	mMoney = money;
	mCar = car;
	mGender = gender;
}

//Deconstructor
Person::~Person()
{
	//empty like my soul
}


//Getters
string Person::GetFirstName()
{
	return mFirstName;
}
string Person::GetLastName()
{
	return mLastName;
}
int Person::GetBirthdateDay()
{
	return mBirthdateDay;
}
string Person::GetBirthdateMonth()
{
	return mBirthdateMonth;
}
int Person::GetBirthdateYear()
{
	return mBirthdateYear;
}
int Person::GetMoney()
{
	return mMoney;
}
string Person::GetCar()
{
	return mCar;
}
string Person::GetGender()
{
	return mGender;
}

//functions
void Person::Introduce()
{
	//Example of output: Alex Bean was born on September 2, 1995 and is non-binary
	cout << "> " << mFirstName << " " << mLastName << " was born on " << mBirthdateMonth << " " << mBirthdateDay << ", " << mBirthdateYear << " identifies as " << mGender << ".\n";
}
void Person::Age()
{
	//calculating age
}
void Person::BuyCar()
{

}
void Person::SellCar()
{

}
void Person::DriveCar()
{

}
void Person::PaintCar()
{

}
