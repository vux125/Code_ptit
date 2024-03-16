#include <iostream>
using namespace std;
int dem = 1;

void swap(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
}
void inputArr(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void outputArr(int a[], int n)
{
	cout << "Buoc " << dem << ": ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	dem++;
	cout << endl;
}

void bubbleSort(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		bool in = false;
		for (int j = 0; j < n - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
				in = true;
			}
		}
		if (in)
			outputArr(a, n);
	}
}
int main()
{
	int n;
	cin >> n;
	int a[n];
	inputArr(a, n);
	bubbleSort(a, n);
}
