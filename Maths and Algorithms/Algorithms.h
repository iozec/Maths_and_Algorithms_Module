#pragma once
#include <iostream>
namespace Algorithms
{
    inline int * BubbleSort(int* Data, size_t Size)
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

		
	 }


    inline int * InsesrtionSort(int* Data, size_t Size)
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


    inline int * SelectionSort(int* Data, size_t Size)
	 {
		for (int i = 0; i < Size; i++) 
		{

			while (Data[i] < Data[i + 1])
			{




			}



		}
	 }


    inline int * HeapSort(int* Data, size_t Size)
	 {
		 return nullptr;
	 }


    inline int * MergeSort(int* Data, size_t Size)
	 {
		 return nullptr;
	 }


    inline int * QuickSort(int* Data, size_t Size)
	 {
		 return nullptr;
	 }


    inline int * BinSort(int* Data, size_t Size)
	 {
		 return nullptr;
	 }


    inline bool LinierSearch(int* Data, size_t Size, int target)
	 {

		for (int i = 0; i < Size; i++) {

			if (Data[i] == target) {

				return true;
			}


		}
		return false;

	 }


	inline bool BinarySearch(int* Data, size_t Size, int target)
	{
		int Midpoint = (Size - 1) / 2;
		int Endpoint = Size;


		if (target == Data[Midpoint])
			return true; //stop the loop
		if (target < Data[Midpoint])
		{
			int* sub = new int[Midpoint];
			for (int j = 0; j < Midpoint; j++)
			{
				sub[j] = Data[j];
			}
			BinarySearch(sub, Midpoint, target);
		}
	
		/*if (target > Data[Midpoint]) {

			int* sub = new int[Midpoint];
			for (int k = Midpoint; k < Endpoint; k++)
			{
				sub[k] = Data[k];
			}
			BinarySearch(sub, Midpoint, target);


			}*/




		// while( i >1 )
		// {
		//	
		//	i= (Size - 1) / 2;

		//	if (target == Data[i])
		//		break; //stop the loop
		//	if(target < Data[i])
		//		//do left
		//	if(target > Data[i])
		//		//do right
		//
		//}
		 
	 }
}

