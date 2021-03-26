//Programmer:	Jay Anino. ID 270115050 
//Yoobee College Bachelor of Software Engineering 
//Date Started:	23/03/2021 
//Due Date:     30/03/2021 
//Reference:	Lab3 Random Even Odd Numbers
//Description:	This program generate 6 random numbers and counts how many odd and even numbers are generated
//Guarantee:	Program works to full specifications
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	int num, odd = 0, even = 0;

	srand(time(0));

	cout << "----------------------------------------------------------------------------------------" << endl
		 << "This program generates 6 random numbers and counts how many odd and even numbers are" << endl
		 << "----------------------------------------------------------------------------------------" << endl
		 << "Random numbers between 10-20: ";

	//generates 6 random numbers
	int i;
	for (i = 0;  i < 6;) {
		num = (rand() % 20 + 1);
		if (num >= 10) { //checks rand number if it is greater than the min value
			cout << num << " ";
			i++;
			if (num % 2)
				odd++;
			else
				even++;
		}
	}
	cout << endl;

	cout << "\nThe number of Even numbers are: " << even << endl
		<< "The number of Odd numbers are: " << odd << endl;

	return 0;
}
