#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, f, g, h, i;
	printf("------------TOKO NEGA------------");
	cout << "\n\n\n Harga barang 1 (Rp)= ", cin >> a;
	cout << "\n Harga barang 2 (Rp)= ", cin >> b;
	cout << "\n Harga barang 3 (Rp)= ", cin >> c;
	cout << "\n Harga barang 4 (Rp)= ", cin >> d;
	cout << "\n Harga barang 5 (Rp)= ", cin >> e;
	printf("\n---------------------------------");
	cout << "\n\n Masukkan diskon (%)= ", cin >> f;
	printf("\n---------------------------------");
	g = a + b + c + d + e;
	cout << "\n\n\t Jumlah (Rp)= ", cout << g;
	h = g * f / 100;
	cout << "\n\n\t Potongan (Rp)= ", cout << h;
	i = g - h;
	cout << "\n\n\t Total (Rp)= ", cout << i;
	printf("\n\n");
}