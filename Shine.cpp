//An amateur meteorologist wants to keep track of weather conditions during the past year’s three-month summer season and has designated 
//each day as either rainy (‘R’), cloudy (‘C’), or sunny (‘S’). Write a program that stores this information in a 3 × 30 array of 
//characters, where the row indicates the month (0 = June, 1 = July, 2 = August) and the column indicates the day of the month. 
//Note that data are not being collected for the 31st of any month. The program should begin by reading the weather data in from a file. 
//Then it should create a report that displays, for each month and for the whole three-month period, how many days were rainy, 
//how many were cloudy, and how many were sunny. It should also report which of the three months had the largest number of rainy days. 
//Data for the program can be found in the  RainOrShine.txt  file. 

//The program is not counting the characters correctly.

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int getRainy(char[3][30]);
const int months = 3, days = 30;
int main()
{
	int rain, cloud, sun;
	char summer[months][days];
	string monthnames[] = {"Jun.","Jul.","Aug."};
	ifstream inFile;
	
	rain = getRainy(summer);
	cloud = getRainy(summer);
	sun = getRainy(summer);
	cout << rain << endl;
	cout << cloud << endl;
	cout << sun << endl;
	return 0;
	
}
int getRainy(char summer[months][days])
{
	int Rcount = 0, Rtotal = 0, Ccount = 0, Ctotal = 0, Scount = 0, Stotal = 0;
	char weather[months][days];
	ifstream inFile;
	
	inFile.open("RainorShine.txt");
	if(!inFile)
	{
		cout << "File not read!" << endl;
	}
	for(int months = 0; months < 3; months++)
	{
		for(int days = 0; days < 30; days++)
		{
			inFile >> weather[months][days];
			
		}
	}
	inFile.close();
	for(int months = 0; months < 3; months++)
	{
		for(int days = 0; days < 30; days++)
		{
			switch(weather[months][days])
			{
				case 'R': Rcount++;
					break;
				case 'C': Ccount++;
					break;
				case 'S': Scount++;
			}
		}
	}
	cout << Rcount << endl;
	cout << Ccount << endl;
	cout << Scount << endl;
	return Rcount;
	return Ccount;
	return Scount;
}
