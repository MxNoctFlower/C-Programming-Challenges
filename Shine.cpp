//An amateur meteorologist wants to keep track of weather conditions during the past year’s three-month summer season and has designated 
//each day as either rainy (‘R’), cloudy (‘C’), or sunny (‘S’). Write a program that stores this information in a 3 × 30 array of 
//characters, where the row indicates the month (0 = June, 1 = July, 2 = August) and the column indicates the day of the month. 
//Note that data are not being collected for the 31st of any month. The program should begin by reading the weather data in from a file. 
//Then it should create a report that displays, for each month and for the whole three-month period, how many days were rainy, 
//how many were cloudy, and how many were sunny. It should also report which of the three months had the largest number of rainy days. 
//Data for the program can be found in the  RainOrShine.txt  file. 

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	int months = 3, days = 30,Rtotal = 0, Ctotal = 0, Stotal = 0, highest;
	int rain[months] = {0}, cloud[months] = {0}, sun[months] = {0};
	char summer[months][days];
	string monthnames[] = {"Jun.","Jul.","Aug."}, highestm;
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
			inFile >> summer[months][days];
			
		}
	}
	inFile.close();
	for(int months = 0; months < 3; months++)
	{
		for(int days = 0; days < 30; days++)
		{
			switch(summer[months][days])
			{
				case 'R': rain[months]++;
					break;
				case 'C': cloud[months]++;
					break;
				case 'S': sun[months]++;
			}
		}
		Rtotal += rain[months];
		Ctotal += cloud[months];
		Stotal += sun[months];
	}
	highest = rain[0];
	highestm = monthnames[0];
	for(int months = 0; months < 3; months++)
	{
		if(rain[months] > highest)
		{
			highest = rain[months];
			highestm = monthnames[months];
			cout << highest << endl;
			cout << highestm << endl;
		}
	}
	cout << "Rainy days in " << monthnames[0] << ": " << rain[0] << endl;
	cout << "Cloudy days in " << monthnames[0] << ": " << cloud[0] << endl;
	cout << "Sunny days in " << monthnames[0] << ": " << sun[0] << endl;
	cout << "Rainy days in " << monthnames[1] << ": " << rain[1] << endl;
	cout << "Cloudy days in " << monthnames[1] << ": " << cloud[1] << endl;
	cout << "Sunny days in " << monthnames[1] << ": " << sun[1] << endl;
	cout << "Rainy days in " << monthnames[2] << ": " << rain[2] << endl;
	cout << "Cloudy days in " << monthnames[2] << ": " << cloud[2] << endl;
	cout << "Sunny days in " << monthnames[2] << ": " << sun[2] << endl;
	cout << "Month with the highest number of rainy days: " << highestm << endl;
	return 0;
	
}
	
