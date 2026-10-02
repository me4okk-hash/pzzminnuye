#include <iostream>

int main()
{
 //   int year;
 //   std::cout << "Enter year: ";
 //   std::cin >> year;
 //   
 //   int days = 366 - ((year % 4 + 3) % 4) / 3;

	//std::cout << "Number of days in year " << year << ": " << days

	//int uah;
	//int cops;
	//std::cout << "Enter amount in UAH: ";
	//std::cin >> uah;
	//std::cout << "Enter amount in cops: ";
	//std::cin >> cops;

	//uah = uah + (cops / 100);
	//cops = cops % 100;

	//std::cout << uah << " UAH " << cops << " Cops\n";

	//double length;
	//double width;
	//double height;

	//std::cout << "Enter length: ";
	//std::cin >> length;
	//std::cout << "Enter width: ";
	//std::cin >> width;
	//std::cout << "Enter height: ";
	//std::cin >> height;

	//double volume = length * width * height;

	//std::cout << "Volume: " << volume << "\n";

	//double x1, y1, x2, y2, scale;

	//std::cout << "Enter X1 and Y1: ";
	//std::cin >> x1 >> y1;
	//std::cout << "Enter X2 and Y2: ";
	//std::cin >> x2 >> y2;
	//std::cout << "Enter map scale: ";
	//std::cin >> scale;

	//double dx = x2 - x1;
	//double dy = y2 - y1;
	//double distance_squared = dx * dx + dy * dy;

	//double guess = distance_squared / 2.0;
	//guess = 0.5 * (guess + distance_squared / guess);
	//guess = 0.5 * (guess + distance_squared / guess);
	//guess = 0.5 * (guess + distance_squared / guess);
	//guess = 0.5 * (guess + distance_squared / guess);

	//double final_distance = guess * scale;
	//std::cout << "Distance between points: " << final_distance << "km\n";

	double radius;
	std::cout << "Enter sphere radius: ";
	std::cin >> radius;

	double pi = 3.14;
	double volume = (4.0 / 3.0) * pi * radius * radius * radius;

	std::cout << "Volume of sphere: " << volume << "\n";
}