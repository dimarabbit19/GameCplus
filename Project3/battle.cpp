#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

void arrayA(int** arr, int rows, int cols) {

	
	srand(time(0));
	for (int i = 0; i < rows; ++i) {
		arr[i] = new int[cols];

	}
	std::cout << "Player 1 \n";

	std::cout << "____________ \n\n";
	for (int i = 0; i < rows; ++i) {
		int count = 0;
		std::cout << '\n' << count+i << ' ' << '|' << ' ';
		for (int j = 0; j < cols; ++j) {
			
			arr[i][j] =rand()% 1;
											
			
				
			
			if (arr[i][j] != 1) {

				std::cout << '-' << ' ';

			}

		}
		std::cout << ' ' << '|' << '\n';
	}
	std::cout << ' ' << ' ' << ' ' << ' ';
	for (char c = 'A'; c <= 'E'; ++c) {

		std::cout << c << ' ';

	}
	std::cout << '\n';
	std::cout << '\n';
	std::cout << "Enter ships number: ";
	int count_ship = 0;
	std::cin >> count_ship;
	srand(time(0));
	for (int i = 0; i < count_ship; ++i) {
	
		arr[i][i] =  1;
		char ship = arr[i][i];
	}
			
			
	std::cout << '\n';
}



void arrayB(int** arr, int rows, int cols) {
	
	srand(time(0));
	int count = 0;
	for (int i = 0; i < rows; ++i) {
		arr[i] = new int[cols];

	}
	std::cout << "Player 2 \n";

	std::cout << "____________ \n\n";
	for (int i = 0; i < rows; ++i) {
		std::cout << '\n' << i + count << ' ' << '|' << ' ';
		for (int j = 0; j < cols; ++j) {
			
			arr[i][j] = rand() % 2;
			
				if (arr[i][j] != 0) {
					std::cout << 'O' << ' ';

				}
			
			if (arr[i][j] != 1) {

				std::cout << '-' << ' ';
			}
		}
		std::cout << ' ' << '|' << '\n';
	}
	std::cout << ' ' << ' ' << ' ' << ' ';
	for (char c = 'A'; c <= 'E'; ++c) {

		std::cout << c << ' ';

	}

	std::cout << '\n';
}

void shootingA(int** arr, int rows, int cols) 
{  
	int r=0;
	int c=0;
	int point = 0;
	do {


		std::cout << "Player one your shot! \n";
		std::cout << "Enter coordinate one: ";
		std::cin >> r;
		std::cout << "Enter coordinate two: ";
		std::cin >> c;

		
		 point = arr[r][c];


	} while (point != 1); 
		int count = 0;
		std::cout << "You destroy ship!\n";
		std::cout << "Your count: " << ++count << " ships";
		arr[r][c] = 0;
		std::cout << '\n';
		for (int i = 0; i < rows; ++i) {
			for (int j = 0; j < cols; ++j) {
				std::cout<<arr[i][j]<<' ';
			
				}
			std::cout << '\n';
			}
			
			
		
		
	
	
}

void shootingB(int** arr, int rows, int cols)
{
	int r = 0;
	int c = 0;

	do {


		std::cout << "Player two your shot! \n";
		std::cout << "Enter coordinate one: ";
		std::cin >> r;
		std::cout << "Enter coordinate two: ";
		std::cin >> c;

		arr[r][c] = r, c;
		

	} while (arr[r][c] != 1); 
		int count = 0;
		std::cout << "You destroy ship!\n";
		std::cout << "Your count: " << ++count << " ships";
		arr[r][c] = 0;
		std::cout << '\n';
		for (int i = 0; i < rows; ++i) {
			for (int j = 0; j < cols; ++j) {
				std::cout << arr[i][j] << ' ';

			}
			std::cout << '\n';
		}


	



}


int main() 
{

	int rows=5;
	int cols=5;

	int** array = new int* [rows];
	int** array1 = new int* [rows];


	arrayA(array, rows, cols);

//	arrayB(array1, rows, cols);

	shootingA(array, rows, cols);

//	shootingB(array1, rows, cols);

	return 0;
}