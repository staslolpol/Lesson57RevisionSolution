// Task X [The all local minimum]
// Все локальные минимумы
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать эффективную функцию (или программу), которая 
// находит и возвращает все локальные минимумы.

#include "logic.h"

int get_local_min_number(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m) {
	if (matrix[n][m] < matrix[n + 1][m] && matrix[n - 1][m] && matrix[n][m + 1] && matrix[n][m - 1]) {
		return matrix[n][m];
	}

	return -1;
}

string get_all_local_minimums(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m) {

	string result = "";

	if (n <= 0 || m <= 0) {
		return "";
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			result +=to_string(get_local_min_number(matrix, i, j));
		}
	}

	return "";
}