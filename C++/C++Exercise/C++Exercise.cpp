#include <iostream>
#include <vector>
#include "Person.h"

using namespace std;

int main()
{
/* OUTPUT 
> The person John was created
> John Doe was born on June 25, 1990 and is a man
> John has 25320€ and no car
> The car Peugeot 208 was created
> It is a red car with license plate GH-456-XD
> With a mileage of 12563 km, it has a value of 7251€
> The person Alex was created
> Alex Bean was born on September 2, 1995 and is non-binary
> Alex has 5432€ and a Peugeot 208 (GH-456-XD)
> Alex sells their car to John
> Alex earned 7251€, they now have 12683€
> John spent 7251€, they now have 18076€
> John Doe was born on June 25, 1990 and is a man
> John has 25320€ and a Peugeot 208 (GH-456-XD)
> John rolls with the Peugeot 208 (GH-456-XD) for 16km
> The Peugeot 208 (GH-456-XD) mileage is now 12579km
> John paints his car blue
> Peugeot 208 now has the color blue
*/

    cout << "moin" << endl;

	//Adding People (FirstName, LastName, BirthdateDay, BirthdateMonth, BirthdateYear, Money, Car, Gender)
	Person PlantBoi = Person("Humphry", "Van Plant", 1, "November", 2022, 10000, "Car go BRR", "male");
	Person Cactus = Person("Charlotte", "the Catus", 10, "September", 2020, 20000, "Car go BRR", "non-binary");

	//Adding Cars (Color, Brand, Model, LicensePlate, Year, Mileage, CostValue)
	Car PlantBoisCar = Car(Car_Color::green, "Opel", "Zafira Life", "WI-HP-00", 2020, 1000, 5938);
	Car CactusCar = Car(Car_Color::black, "Porsche", "Cayenne", "HH-CC-31", 2010, 50690, 3909);



	//line 1
	cout << "> The person " << Cactus.GetFirstName() << " was created. \n";
	//line 2
	Cactus.Introduce();
	//line 3
	cout << "> " << Cactus.GetFirstName() << " has " << Cactus.GetMoney() << "EURO and " << Cactus.GetCar() << ". \n"; //will change car

	cout << "\n";
 
	//line 4
	cout << "The car " << PlantBoisCar.GetBrand() << PlantBoisCar.GetModel() << "was created. \n";
	//line 5
	cout << "> It is " << PlantBoisCar.GetColor() << " with the license plate " << PlantBoisCar.GetLicensePlate() << ". \n";
	//line 6
	cout << "> With a mileage of " << PlantBoisCar.GetMileage() << "KM, it has a value of " << PlantBoisCar.GetCostValue() << "EURO. \n";

	cout << "\n";

	//line 7
	cout << "> The person " << PlantBoi.GetFirstName() << " was created. \n";
	//line 8
	cout << "> " << PlantBoi.Introduce() << "\n"; 
	//line 9
	cout << "> " << PlantBoi.GetFirstName() << " has " << PlantBoi.GetMoney() << "EURO and " << PlantBoisCar.DisplaySumUp() << ". \n";

	cout << "\n";

	//line 10 will be changed
	cout << "> " << PlantBoi.GetFirstName() << " sells their car to " << Cactus.GetFirstName() << " . \n";
	//line 11
	cout << "> " << PlantBoi.GetFirstName() << " earned " << PlantBoisCar.GetCostValue() << "EURO, they now have " << PlantBoi.GetMoney() + PlantBoisCar.GetCostValue() << "EURO. \n";
	//line 12
	cout << "> " << Cactus.GetFirstName() << " spent " << PlantBoisCar.GetCostValue() << "EURO, they now have " << Cactus.GetMoney() - PlantBoisCar.GetCostValue() << "EURO. \n";

	cout << "\n";

	//line 13
	cout << "> " << Cactus.Introduce() << "\n";
	//line 14
	cout << "> " << Cactus.GetFirstName() << " has now " << Cactus.GetMoney() - PlantBoisCar.GetCostValue() << "EURO and a " << PlantBoisCar.DisplaySumUp() << ". \n";
	//line 15

}
