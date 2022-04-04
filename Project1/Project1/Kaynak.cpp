//152120201058_Ayþe_Ayhan_Quiz2_WEEK3 
#include<iostream>
using namespace std;
int main()
{
	int X = 100, Y = 100;
	int* Z;
	Z = &X; //Z, X'in adresine eþit
	*Z = X; //Z iþaretçisi X'in deðerine eþit // Bu sayede X deðiþirse Z de deðiþir, Y etkilenmez.

	cout << "1.STEP--> Variable X: " << X << "\tVariable Y: " << Y << "\tVariable Z: " << *Z << endl; //Ýlk deðerler
	cout << endl;
	X = 50; //Sadece X'in deðerini deðiþtirerek oluþacak deðiþime bakalým:

	cout << "2.STEP--> Variable X: " << X << "\tVariable Y: " << Y << "\tVariable Z: " << *Z << endl; //*Z, X ile ayný deðiþime sahip olur, Y ise etkilenmez.
	cout << endl;


	system("pause");
}