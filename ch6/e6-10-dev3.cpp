#include <iostream>
#include <array>

using namespace std;

int main()
{
	int size = 4;
	// cout << "Enter same size of both arrays: \n";
	// cin >> size;
	// int a[size];
	// int b[size];

	// for (int i = 0; i < size; i++)
	// {
	// 	cout << "Enter 'a' value: ";
	// 	cin >> a[i];
	// }
	// for (int i = 0; i < size; i++) 
	// {
	// 	cout << "Enter 'b' value: ";
	// 	cin >> b[i];
	// }

	int a[size] = { 1, 2, 3, 4 };
	// int b[size] = { 4, 3, 1, 2 };
	int b[size] = { 3, 4, 1, 2 };

	bool same_elements(int a[], int b[], int size);
	cout << same_elements(a, b, size);
	cout << endl;
	// if (same_elements(a, b, size) == 1)
	// {
	// 	cout << "Arrays are a match." << endl;
	// }
	// else if (same_elements(a, b, size) == 0)
	// {
	// 	cout << "Arrays are not a match." << endl;
	// }

}

bool same_elements(int a[], int b[], int size)
{
	int x[size];
	int y[size];
	int c[size];
	int d[size];
	int t = 0;
	for (int i = 0; i < size; i ++){
		x[i] = a[i];
		y[i] = b[i];
		c[i] = a[i];
		d[i] = b[i];
	}

	// int match = 0;
	// for (int i = 0; i < size; i++)
	// {
	// 	for (int j = 0; j < size; j++)
	// 	{
	// 		if (x[i] == y[j]) {
	// 			x[i] = '-';
	// 			y[j] = '-';
	// 			match ++;
	// 			break;
	// 		}
	// 	}
	// }
	int counter = 0;
	int tru;
	// if (match == size) {
		while (c[0] != d[0]) {
			int z = size -1;
			int lst = d[0];
			for (int i = 0; i < size; i++) {
				d[i] = d[i+1];
				if (i == z) {
					d[i] = lst;
				}
			}
		}
		for (int i = 0; i < size; i++) {
			if (c[i] == d[i]) {
				tru = 1;
			}
			else if (c[i] != d[i])
				tru = 0;
		}


		for (int i = 0; i < size; i++) {
			cout << c[i] << " "; 
		}
		cout << endl;
		for (int i = 0; i < size; i++) {
			cout << d[i] << " ";
		}
		return tru;
	// 	return 1;
	// }
	// else if (match != size) {
	// 	return 0;
	// }

}

