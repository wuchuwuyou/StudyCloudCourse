#include "stdio.h"

bool isToeplitzMatrix(int** matrix, int matrixRowSize, int *matrixColSizes) {

	for (int i = 0; i < matrixRowSize - 1; ++i)
	{
		/* code */

		for (int j = 0; j < matrixColSizes[i] - 1; ++j)
		{
			/* code */
			if (matrix[i][j] != matrix[i+1][j+1])
			{
				/* code */
				return false;
			}
		}
	}
	return true;
}

int main(int argc, char const *argv[])
{
	
	return 0;
}