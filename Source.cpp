#include <iostream>
#include "windows.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	bool quit = true;

	while (quit)
	{

		int pick;
		float counter = 0;

		cout << "Please pick a difficulty";
		cout << "\n1. 0-10";
		cout << "\n2. 0-50";
		cout << "\n3. 0-100\n";
		cout << "4. Custom difficulty\n";
		cin >> pick;

		if (pick == 1)
		{
			int max_rand = rand() % 11;
			int pick1;

			system("cls");
			cout << "Difficulty 1 picked. Good luck!\n";
			cout << "Start:\n";
			cin >> pick1;

			if (pick1 != max_rand)
			{
				cout << "Wrong!\n";
				while (pick1 != max_rand)
				{
					cin >> pick1;
					counter++;

					if (pick1 > max_rand)
						cout << "Too high!\n";
					else if (pick < max_rand)
						cout << "Too low!\n";
				}
			}
		}
		else if (pick == 2)
		{
			int max_rand = rand() % 51;
			int pick1;

			system("cls");
			cout << "Difficulty 2 picked. Good luck!\n";
			cout << "Start: \n";
			cin >> pick1;

			if (pick1 != max_rand)
			{
				cout << "Wrong!\n";
				while (pick1 != max_rand)
				{
					cin >> pick1;
					counter++;

					if (pick1 > max_rand)
						cout << "Too high!\n";
					else if (pick < max_rand)
						cout << "Too low!\n";
				}
			}
		}
		else if (pick == 3)
		{
			int max_rand = rand() % 101;
			int pick1;

			system("cls");
			cout << "Difficulty 3 picked. Good luck!\n";
			cout << "Start:\n";
			cin >> pick1;

			if (pick1 != max_rand)
			{
				cout << "Wrong!\n";
				while (pick1 != max_rand)
				{
					cin >> pick1;
					counter++;

					if (pick1 > max_rand)
						cout << "Too high!\n";
					else if (pick < max_rand)
						cout << "Too low!\n";
				}
			}
		}
		else if (pick == 4)
		{
			int costum;

			cout << "Pick your own difficulty: ";
			cin >> costum;

			int max_rand = rand() % costum + 1;
			int pick1;

			system("cls");
			cout << "Difficulty 4 picked. Good luck!\n";
			cout << "Start\n";
			cin >> pick1;

			if (pick1 != max_rand)
			{
				cout << "Wrong!\n";
				while (pick1 != max_rand)
				{
					cin >> pick1;
					counter++;

					if (pick1 > max_rand)
						cout << "Too high!\n";
					else if (pick < max_rand)
						cout << "Too low!\n";
				}
			}
		}

		system("cls");
		cout << "\nCongratulations!!! You won in " << counter << " tries.\n";
		cout << "Your luck percetage is " << 1 / counter * 100 << "%\n";

		cout << "\nDo you want to quit? [y/n]\n";
		cin >> quit;
		system("cls");
	}

	return 0;
}