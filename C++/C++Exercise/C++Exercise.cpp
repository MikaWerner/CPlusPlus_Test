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
	Person PlantBoi = Person("Humphry", "Van Plant", 1, "November", 2022, 10, "Car go BRR", "male");
	Person Cactus = Person("Charlotte", "the Catus", 10, "September", 2020, 4, "Car go BRR", "non-binary");

	//Adding Cars (Color, Brand, Model, LicensePlate, Year, Mileage, CostValue)
	Car PlantBoisCar = Car(Car_Color::green, "Opel", "Zafira Life", "WI-HP-00", 2020, 1000, 5938);
	Car CactusCar = Car(Car_Color::black, "Porsche", "Cayenne", "HH-CC-31", 2010, 50690, 3909);



	//line 1
	cout << "> The person " << PlantBoi.GetFirstName() << " was created. \n";
	//line 2
	PlantBoi.Introduce(); //done
	//line 3
	cout << "> " << PlantBoi.GetFirstName() << " has " << PlantBoi.GetMoney() << "EURO and " << PlantBoi.GetCar() << ". \n";

	cout << "\n";
 

	//line 4
	cout << "The car " << PlantBoisCar.GetBrand << PlantBoisCar.GetModel << "was created. \n";
}
