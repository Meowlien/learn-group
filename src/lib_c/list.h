
/* File list.h */
#ifndef LIST_H
#define LIST_H

#include "globalLib.hpp"

enum SequenceType { Increase = 0, Decrease = 1 };
enum DirectionType { Vertical = 0, Horizontal = 1 };

void List_Show(int arr[], int size, enum DirectionType dirType);

int* List_Create(int size, int initValue);

void List_Destroy(int *arr);

void List_Init(int arr[], int size, int defaultValue);

void List_Init_Increase(int arr[], int size, int startValue);

void List_Init_Decrease(int arr[], int size, int startValue);

void List_Init_Random(int arr[], int size, int min, int max);

void List_Disrupted(int arr[], int size);

void List_Invert(int arr[], int size);

int* List_Clone(int arr[], int size);

void List_Clear(int arr[], int size);

// ==== Query ==========================

bool List_At(int arr[], int size, int idx, int *result_value);

int List_Find(int arr[], int size, int value);

int* List_Insert(int arr[], int *size, int idx, int value);

int* List_Append(int arr[], int *size, int value);

int* List_Remove_Value(int arr[], int *size, int value);

int* List_Remove_Index(int arr[], int *size, int idx);

int* List_Join(int arr[], int a_size, int brr[], int b_size, int *result_size);

// ==== Algorithm ======================

void List_Sort_BubbleSort(int arr[], int size, int seqType);

// =====================================

bool At(int arr[], int size, int idx, int *result);

bool Find(int arr[], int size, int value, int *result);

bool Remove(int arr[], int size, int idx);

bool Insert(int arr[], int size, int idx, int value);

bool Append(int arr[], int size, int value);

bool Invert(int arr[], int size);

bool Join(int ori[], int ori_size, int join[], int join_size);

bool Sort(int arr[], int size, int type);

#endif /* list.h */