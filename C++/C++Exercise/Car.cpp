#include "Car.h"
#include <iostream>
using namespace std;

Car::Car()
{
	mColor = Car_Color::black;
	mBrand = "Default";
	mModel = "Default";
	mLicensePlate = "Default";
	mYear = 2000;
	mMileage = 0;
	mCostValue = 0;
}
Car::Car(Car_Color color, string brand, string model, string licensePlate, int year, int mileage, int costValue)
{
	mColor = color;
	mBrand = brand;
	mModel = model;
	mLicensePlate = licensePlate;
	mYear = year;
	mMileage = mileage;
	mCostValue = costValue;
}
//Deconstructor
Car::~Car()
{

}

//Getters
Car_Color Car::GetColor()
{
	return mColor;
}
string Car::GetBrand()
{
	return mBrand;
}
string Car::GetModel()
{
	return mModel;
}
string Car::GetLicensePlate()
{
	return mLicensePlate;
}
int Car::GetYear()
{
	return mYear;
}
int Car::GetMileage()
{
	return mMileage;
}
int Car::GetCostValue()
{
	return mCostValue;
}

//functions
void Car::DisplaySumUp()
{
	//display Brand_Model_(LicensePlate)
	cout << mBrand << " " << mModel << " (" << mLicensePlate << ")" << endl;
}
void Car::DriveMiles()
{

}
void Car::ChangeColor()
{

}