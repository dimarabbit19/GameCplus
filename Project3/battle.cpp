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
		std::cout << '\n' << i + 1 << ' ' << '|' << ' ';
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
	std::cout << '\n';
	

}



void arrayB(int** arr, int rows, int cols) {

	

	for (int i = 0; i < rows; ++i) {
		arr[i] = new int[cols];

	}
	std::cout << "Player 2 \n";

	std::cout << "____________ \n\n";
	for (int i = 0; i < rows; ++i) {
		std::cout << '\n' << i + 1 << ' ' << '|' << ' ';
		for (int j = 0; j < cols; ++j) {
			srand((0));
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


}

void shooting(int** arr, int rows, int cols) 
{  
	int r=0;
	int c=0;
	
	do {


		std::cout << "Player your shot! \n";
		std::cout << "Enter coordinate one: ";
		std::cin >> r;
		std::cout << "Enter coordinate two: ";
		std::cin >> c;


		arr[r][c] = r, c;


	} while (arr[r][c] != 0); {
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
	
}




int main() 
{

	int rows=5;
	int cols=5;

	int** array = new int* [rows];
	int** array1 = new int* [rows];


	arrayA(array, rows, cols);

//	arrayB(array1, rows, cols);

	shooting(array, rows, cols);
	return 0;
}