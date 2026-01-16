#include "StudListFunc.h"

void AddStudents(char**& list, int& count, char* student)
{

	count++;

	char** temp = new char* [count];
	for (int i = 0; i < count - 1; i++)
		temp[i] = list[i];


	temp[count - 1] = student;
	delete[] list;

	list = temp;
}

void RemoveStudent(char**& list, int& count, int index)
{
}

void Print(char** list, int count)//
{
}

void Sort(char** list, int count)
{
}

void EditStudent(char** list, int count, int index)
{
}

int FindStudent(char** list, int count, char* student)
{
	return 0;
}
