//152120201058_Ay�e_Ayhan_Quiz2_WEEK3 
#include<iostream>
using namespace std;
int main()
{
	int X = 100, Y = 100;
	int* Z;
	Z = &X; //Z, X'in adresine e�it
	*Z = X; //Z i�aret�isi X'in de�erine e�it // Bu sayede X de�i�irse Z de de�i�ir, Y etkilenmez.

	cout << "1.STEP--> Variable X: " << X << "\tVariable Y: " << Y << "\tVariable Z: " << *Z << endl; //�lk de�erler
	cout << endl;
	X = 50; //Sadece X'in de�erini de�i�tirerek olu�acak de�i�ime bakal�m:

	cout << "2.STEP--> Variable X: " << X << "\tVariable Y: " << Y << "\tVariable Z: " << *Z << endl; //*Z, X ile ayn� de�i�ime sahip olur, Y ise etkilenmez.
	cout << endl;


	system("pause");
}