#pragma once
class Sort
{
    int* vector;
    int nr_elemente;
public:
    // add constuctors
    Sort(int nr_elemente, int minval, int maxval);
    Sort():vector(new int[8] {1, 2, 3, 4, 5, 6, 7, 8}), nr_elemente(8) {};
    Sort(int* vector, int nr_elemente);
    Sort(int count, ...);

    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);

};

