#pragma once
#include <string>	
#include "Car.h"

class Person
{
private:
	//First Name
	std::string mFirstName;
	//Last Name
	std::string mLastName;
	//Birthdate
	int mBirthdateDay;
	std::string mBirthdateMonth;
	int mBirthdateYear;
	//Amount of Money
	int mMoney;
	//car
	std::string mCar;
	//gender of person
	std::string mGender;

public:

	Person();
	Person(std::string firstName, std::string lastName, int birthdateDay, std::string birthdateMonth, int birthdateYear, int money, std::string car, std::string gender);

	~Person();

	//Getters/ Setters
	std::string GetFirstName();
	std::string GetLastName();
	int GetBirthdateDay();
	std::string GetBirthdateMonth();
	int GetBirthdateYear();
	int GetMoney();
	std::string GetCar();
	std::string GetGender();

	//functions 
	void Introduce();
	void Age();
	void BuyCar();
	void SellCar();
	void DriveCar();
	void PaintCar();
};

