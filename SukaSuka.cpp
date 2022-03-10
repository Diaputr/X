#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, k;
	float l, f, g, h, i , j;
	printf("----Masukkan nilai 1 sampai nilai 5 untuk menjumlahkan----");
	cout << "\n\n\nNilai 1= ", cin >> a;
	cout << "\nNilai 2= ", cin >> b;
	cout << "\nNilai 3= ", cin >> c;
	cout << "\nNilai 4= ", cin >> d;
	cout << "\nNilai 5= ", cin >> e;
	k= a+b+c+d+e;
	cout << "\n\n\tJumlah= ", cout << k;
	printf("\n\n\n-----Masukkan nilai 6 sampai nilai 10 untuk rata-rata-----");
	cout << "\n\n\nNilai 6= ", cin >> f;
	cout << "\nNilai 7= ", cin >> g;
	cout << "\nNilai 8= ", cin >> h;
	cout << "\nNilai 9= ", cin >> i;
	cout << "\nNilai 10= ", cin >> j;
	l= (f+g+h+i+j)/5;
	printf("\n\n\tRata-rata= %5.1f",l);
}
