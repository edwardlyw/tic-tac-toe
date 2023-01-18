#include <iostream>

int const arrayHorizontal = 5;
int const arrayVertical = 11;

using namespace std;

void setUp(char array[arrayHorizontal][arrayVertical])
{
	for(int count = 0; count < 5; count++)
	{
		for (int count2 = 0; count2 < 11; count2++)
		{
			if (count == 1 || count == 3)
			{
				array[count][count2] = '-';
			}
			
			else
			{
				if(count2 == 3 || count2 == 7)
				{
					array[count][count2] = '|';
				}
				
				else
				{
					array[count][count2] = ' ';
				}
			}
			
		}
	}
}

void tutorialGrid(char array[arrayHorizontal][arrayVertical])
{
	for(int count = 0; count < 5; count++)
	{
		if(count == 0)
		{
			for(int count2 = 0; count2 < 11; count2++)
			{
				if(count2 == 1)
				{
					array[count][count2] = '1';
				}
				
				else if(count2 == 5)
				{
					array[count][count2] = '2';
				}
				
				else if(count2 == 9)
				{
					array[count][count2] = '3';
				}
			}
		}
		
		else if(count == 2)
		{
			for(int count2 = 0; count2 < 11; count2++)
			{
				if(count2 == 1)
				{
					array[count][count2] = '4';
				}
					
				else if(count2 == 5)
				{
					array[count][count2] = '5';
				}
				
				else if(count2 == 9)
				{
					array[count][count2] = '6';
				}
			}
		}
		
		else if(count == 4)
		{
			for(int count2 = 0; count2 < 11; count2++)
			{
				if(count2 == 1)
				{
					array[count][count2] = '7';
				}
					
				else if(count2 == 5)
				{
					array[count][count2] = '8';
				}
				
				else if(count2 == 9)
				{
					array[count][count2] = '9';
				}
			}
		}
	}
}

void eraseTutorial(char array[arrayHorizontal][arrayVertical])
{
	for(int count = 0; count < 5; count++)
	{
		if(count == 0 || count == 2 || count == 4)
		{
			for(int count2 = 0; count2 < 11; count2++)
			{
				if(count2 == 1 || count2 == 5 || count2 == 9)
				{
					array[count][count2] = ' ';
				}
			}
		}
	}
}

void showGrid(char array[arrayHorizontal][arrayVertical])
{
	for(int count = 0; count < 5; count++)
	{
		for(int count2 = 0; count2 < 11; count2++)
		{
			cout << array[count][count2];
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
}

void update(int position, char letter, char array[arrayHorizontal][arrayVertical])
{
	if(position == 1)
	{
		array[0][1] = letter;
	}
	
	else if(position == 2)
	{
		array[0][5] = letter;
	}
	
	else if(position == 3)
	{
		array[0][9] = letter;
	}
	
	else if(position == 4)
	{
		array[2][1] = letter;
	}
	
	else if(position == 5)
	{
		array[2][5] = letter;
	}
	
	else if(position == 6)
	{
		array[2][9] = letter;
	}
	
	else if(position == 7)
	{
		array[4][1] = letter;
	}
	
	else if(position == 8)
	{
		array[4][5] = letter;
	}
	
	else if(position == 9)
	{
		array[4][9] = letter;
	}
}

int playerInput(int playerNumber)
{
	int response = 0;
	
	if(playerNumber == 1)
	{
		cout << "Please input a number for where you want to put X" << endl;
		cout << "Player 1: ";
		cin >> response;
	}
	
	else if(playerNumber == 2)
	{
		cout << "Please input a number for where you want to put O" << endl;
		cout << "Player 2: ";
		cin >> response;
	}
	
	if(response < 1 || response > 9)
	{
		return -1;
	}
	
	else
	{
		return response;
	}
}

bool winCondition(char array[arrayHorizontal][arrayVertical])
{
	if(array[0][1] == 'X' && array[0][5] == 'X' && array[0][9] == 'X')
	{
		return true;
	}
	
	else if(array[0][1] == 'O' && array[0][5] == 'O' && array[0][9] == 'O')
	{
		return true;
	}
	
	else if(array[2][1] == 'X' && array[2][5] == 'X' && array[2][9] == 'X')
	{
		return true;
	}
	
	else if(array[2][1] == 'O' && array[2][5] == 'O' && array[2][9] == 'O')
	{
		return true;
	}
	
	else if(array[4][1] == 'X' && array[4][5] == 'X' && array[4][9] == 'X')
	{
		return true;
	}
	
	else if(array[4][1] == 'O' && array[4][5] == 'O' && array[4][9] == 'O')
	{
		return true;
	}
	
	else if(array[0][1] == 'X' && array[2][1] == 'X' && array[4][1] == 'X')
	{
		return true;
	}
	
	else if(array[0][1] == 'O' && array[2][1] == 'O' && array[4][1] == 'O')
	{
		return true;
	}

	else if(array[0][5] == 'X' && array[2][5] == 'X' && array[4][5] == 'X')
	{
		return true;
	}
	
	else if(array[0][5] == 'O' && array[2][5] == 'O' && array[4][5] == 'O')
	{
		return true;
	}
	
	else if(array[0][9] == 'X' && array[2][9] == 'X' && array[4][9] == 'X')
	{
		return true;
	}
	
	else if(array[0][9] == 'O' && array[2][9] == 'O' && array[4][9] == 'O')
	{
		return true;
	}
	
	else if(array[0][1] == 'X' && array[2][5] == 'X' && array[4][9] == 'X')
	{
		return true;
	}
	
	else if(array[0][1] == 'O' && array[2][5] == 'O' && array[4][9] == 'O')
	{
		return true;
	}
	
	else if(array[0][9] == 'X' && array[2][5] == 'X' && array[4][1] == 'X')
	{
		return true;
	}
	
	else if(array[0][9] == 'O' && array[2][5] == 'O' && array[4][1] == 'O')
	{
		return true;
	}
	
	else
	{
		return false;
	}
}

int main()
{
	
	char grid_array[arrayHorizontal][arrayVertical] = {' '};
	setUp(grid_array);
	tutorialGrid(grid_array);
	showGrid(grid_array);
	eraseTutorial(grid_array);
	
	bool sameInput[9] = {false};
	for(int count = 0; count < 9; count++)
	{
		sameInput[count] = false;
	}
	
	int player = 2;
	
	bool win = false;
	int inputCount = 0;
	
	while(win == false && inputCount < 9)
	{
		bool invalidInput = 1;
		
		if (player == 1)
		{
			player = 2;
		}
		
		else
		{
			player = 1;
		}

		while(invalidInput == 1)
		{	
			int number = playerInput(player);
			
			if(number == -1 || sameInput[number] == true)
			{
				cout << "Invalid input, please input a NEW number between 1-9" << endl;
				invalidInput = 1;
			}
			
			else
			{
				if(player == 1)
				{
					update(number, 'X', grid_array);
					sameInput[number] = true;
				}
				
				else
				{
					update(number, 'O', grid_array);
					sameInput[number] = true;
				}
			invalidInput = 0;
			}
			
		}
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		showGrid(grid_array);
		win = winCondition(grid_array);
		inputCount += 1;
	}
	
	if(inputCount >= 9 && win == false)
	{
		cout << "Draw!" << endl;
	}
	
	else
	{
		cout << "Player " << player << " wins!" << endl;	
	}
	
	return EXIT_SUCCESS;
	
}