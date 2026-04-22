// Task X [The last local minimum]
// Последний локальный минимум
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать эффективную функцию (или программу), которая 
// находит и возвращает местоположение последнего локального минимума.
#include "util.h"

string get_indexes_of_last_local_minimum(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m){
	string result = "";

	if (n || m <= 0) {
		return result + "0";
	}

	if (n && m == 1) {
		return result + to_string(n);
	}

	int min_index = matrix[0][0];

	int t_n = 0;
	int t_m = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; i++)
		{
			if (matrix[i][j] < min_index) {
				min_index = matrix[i][j];
				t_n = i;
				t_n = m;
			}
		}
	}

	return result;
}