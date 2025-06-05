#include "Algorithms.h"

int* Algorithms::BubbleSort(int* Data, size_t Size)
{  // size_t prevents negative values potentially breaking the algorithm
	for (size_t i = 0; i < Size - 1; i++)
	{
		for (size_t j = 0; j < Size - i - 1; j++)
		{
			if (Data[j] > Data[j + 1])
			{
				int temp = Data[j];
				Data[j] = Data[j + 1];
				Data[j + 1] = temp;
			}
		}
	}

	return Data;
}

inline int* InsesrtionSort(int* Data, size_t Size)
{
	for (size_t i = 0; i < Size; i++)
	{

		int temp = Data[i];
		int j = i - 1;

		while (j >= 0 && Data[j] > temp)
		{
			Data[j + 1] = Data[j];
			j = j - 1;

		}
		Data[j + 1] = temp;

	}
	return Data;
}

inline int* SelectionSort(int* Data, size_t Size)
{
	for (size_t i = 0; i < Size - 1; i++)
	{

		for (int j = i + 1; j < Size; j++)
		{
			if (Data[j] < Data[i])
			{
				int temp = Data[j];
				Data[j] = Data[j + 1];
				Data[j + 1] = temp;
			}
		}
	}
	return Data;
}
