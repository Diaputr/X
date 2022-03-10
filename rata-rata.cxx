#include <stdio.h>
#include <conio.h>
#include <iostream>
int main()
{
	int a, b, c, d, e;
	std::string n;
	std::cout << "\t\tNama Siswa: ", std::cin >> n;
	std::cout << "\nNilai 1= ", std::cin >> a;
	std::cout << "\nNilai 2= ", std::cin >> b;
	std::cout << "\nNilai 3= ", std::cin >> c;
	d = a + b + c;
	std::cout << "\n\t\tJumlah= ", std::cout << d;
	e = d / 3;
	std::cout << "\n\n\t\tRata-rata= ", std::cout << e;
}