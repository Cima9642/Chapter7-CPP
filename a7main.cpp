/**
 * The function above is a class that creates a car object with a year, make, and speed. The class has
 * three functions that return the year, make, and speed of the car. The class also has two functions
 * that accelerate and brake the car.
 *
 * @return The current speed of the car.
 */
#include <iostream>
#include <string>

using namespace std;

class Car
{

public:
	int Year;
	string Make;
	int Speed;

	int getYear()
	{
		return Year;
	}

	string getMake()
	{
		return Make;
	}

	int getSpeed()
	{
		return Speed;
	}

	void acceleration()
	{
		Speed += 5;
	}

	void brake()
	{
		if (Speed >= 5)
		{
			Speed -= 5;
		}
		else
		{
			Speed = 0;
		}
	}
	Car(int year, string make, int speed = 0)
	{
		Year = year;
		Make = make;
		Speed = speed;
	}
};

int main()
{

	Car fastCar = Car(2022, "Bugatti");
	cout << "Current car is a " << fastCar.getYear() << " " << fastCar.Make << "\n"
		 << endl;

	cout << "Gooooooooo... \n"
		 << endl;
	for (int i = 0; i < 5; i++)
	{
		fastCar.acceleration();
		cout << " Current Speed: " << fastCar.getSpeed() << "mph" << endl;
	}

	cout << endl
		 << "Brake!!!"
		 << "\n"
		 << endl;
	for (int j = 0; j < 5; j++)
	{
		fastCar.brake();
		cout << "Current Speed: " << fastCar.getSpeed() << "mph" << endl;
		if (fastCar.getSpeed() == 0)
		{
			cout << fastCar.getMake() << " is now stopped";
		}
	}

	return 0;
}
