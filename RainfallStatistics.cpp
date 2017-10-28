//Let the user input the total rainfall, in inches, for each moth and display the total yearly rainfall, average rainfall,
//highest rainfall month, and lowest rainfall month.

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int months = 12, highest, lowest, count;
	double rainfall[], average, total = 0;
	string month[] = {"Jan.", "Feb.", "Mar.", "Apr.", "May","Jun.","Jul.","Aug.","Sep.","Oct.","Nov.","Dec."};
	string highestm, lowestm;
	
	for(count = 0; count < months; count++)
	{
		cout << "Please enter the total rainfall for month " << month[count] << ": ";
		cin >> rainfall[count];
		cout << "Adding " << rainfall[count] << " + " << total << endl;
		total += rainfall[count];
	}
	highest = rainfall[0];
	lowest = rainfall[0];
	for(count = 0; count < months; count++)
	{
		if(rainfall[count] > highest)
		{
			highest = rainfall[count];
			highestm = month[count];
		}
		else if(rainfall[count] < lowest)
		{
			lowest = rainfall[count];
			lowestm = month[count];
		}
	}
	average = total/months;
	cout << "Total Yearly Rainfall: " << total << endl;
	cout << "Average Monthly Rainfall: " << average << endl;
	cout << "Highest Month: " << highestm << endl;
	cout << "Lowest Month: " << lowestm << endl;
	return 0;
}
//Need help figuring out how to display the lowest month.
