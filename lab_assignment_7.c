#include <stdio.h>
#include <stdlib.h>

int bubbleSort(int array[], int value);
int selectionSort(int array[], int value);

int main(void)
{
	int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
	int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    printf("BUBBLE SORT:\narray1:\n");
    printf("7: %d swaps\n13: %d swaps\n", bubbleSort(array1, 7), bubbleSort(array1, 13));
    printf(".\n.\ntotal: %d swaps\n\narray2:\n", bubbleSort(array1, -1));
    printf("10: %d swaps\n20: %d swaps\n", bubbleSort(array2, 10), bubbleSort(array2, 20));
    printf(".\n.\ntotal: %d swaps\n", bubbleSort(array2, -1));

    printf("\nSELECTION SORT:\narray1:\n");
    printf("7: %d swaps\n13: %d swaps\n", selectionSort(array1, 7), selectionSort(array1, 13));
    printf(".\n.\ntotal: %d swaps\n\narray2:\n", selectionSort(array1, -1));
    printf("10: %d swaps\n20: %d swaps\n", selectionSort(array2, 10), selectionSort(array2, 20));
    printf(".\n.\ntotal: %d swaps\n", selectionSort(array2, -1));
}

int bubbleSort(int array[], int value)
{
    int tArray[9], tCount = 0, vCount = 0;

    for (int i = 0; i < 9; i++) {
        tArray[i] = array[i];
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 9 - i - 1; j++) {
            if (tArray[j] > tArray[j + 1]) {
                if(tArray[j] == value) vCount++;
                int temp = tArray[j];
                tArray[j] = tArray[j + 1];
                tArray[j + 1] = temp;
                tCount++;
            }
        }
    }

    if(vCount == 0)
    {
        return tCount;
    }
    return vCount;
}

int selectionSort(int array[], int value)
{
    int tArray[9], tCount = 0, vCount = 0;

    for (int i = 0; i < 9; i++) {
        tArray[i] = array[i];
    }

    for (int i = 0; i < 8; i++) {
        int min = i;

        for (int j = i + 1; j < 9; j++) {
            if (tArray[j] < tArray[min]) {
                min = j;
            }
        }

        if(tArray[min] == value) vCount++;
        int temp = tArray[min];
        tArray[min] = tArray[i];
        tArray[i] = temp;
        tCount++;
    }

    if(vCount == 0)
    {
        return tCount;
    }
    return vCount;
}