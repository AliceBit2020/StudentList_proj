#include "MenuFunc.h"




void Menu(char ptr[][30], int row)
{
	for (int i = 0; i < row; i++)
	{
		cout<<ptr[i];
		cout << endl;
	}
}

void MenuAddStudents(char **&oldList, int &number)
{
	system("cls");
	int n;
	cout << "Введите количество студентов для добавления в список: ";
	cin >> n;
	cin.get();
	for (int i = 0; i < n; i++)
	{

		char* stud_add = new char[20];

		cout << "Введите ім'я студента: ";
		cin.getline(stud_add, 20);

		AddStudents(oldList, number, stud_add);





	}

	system("pause");

}

void MenuPrint(char **list, int number)
{
	system("cls");
	cout << "Список студентов: ";
	cout << endl;
	for (int i = 0; i < number; i++)
		cout << list[i] << endl;
	cout << endl;
	system("pause");
}

void MenuSort(char **list, int number)
{
	system("cls");
	/*
		Реализация алгоритма сортировки списка студентов
	*/
	cout<<("Список отсортирован! ");
	system("pause");
}

void MenuRemoveStudent(char **& oldList, int &number)
{
	system("cls");
	char str[100];
	cout<<("Введите фамилию студента для удаления: ");
	cin.getline(str, 100);
	/*
		Реализация алгоритма удаления студента из списка//
	*/
	system("pause");
	
}

void MenuEditStudent(char **list, int number)
{
	system("cls");
	char str[100];
	cout<<("Введите фамилию студента для модификации: ");
	cin.getline(str, 100);
	/*
		Реализация алгоритма модификации фамилии студента
	*/
	system("pause");

}

void MenuFindStudent(char **list, int number)
{
	system("cls");
	char str[100];
	cout<<("Введите фамилию студента или несколько первых букв: ");
	cin.getline(str, 100);
	/*
		Реализация алгоритма поиска студента
	*/
	system("pause");
}