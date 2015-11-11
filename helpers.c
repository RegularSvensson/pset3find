/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 *
 * v1. check50 :) style50 :)
 */
       
#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    
    // binary search algorithm
    int first = 0;
    int last = n - 1;
    int middle = (first + last) / 2;
    
    while (first <= last) 
    {
        if (values[middle] < value)
        {
            first = middle + 1;
        }
        else if (values[middle] == value)
        {
            return true;
        }
        else
        {
            last = middle - 1;
        }
        
        middle = (first + last) / 2;
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    // bubble sort data
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (values[j] > values[j + 1])
            {
                int temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
    }
    
    return;
}
