#include <iostream>
#include <Windows.h>

template<typename ArrayT>
void Print(ArrayT arr[], int size);

template<typename ArrayT>
void AutoArray(ArrayT arr[], int size);

template<typename ArrayT>
void UsingArray(ArrayT arr[], int size);

bool WayChoice(int choiceBool);

template<typename ArrayT>
void Sort(ArrayT arr[], int size, bool choiceWay);


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int choice;
    int choiceBool;
    const int size = 10;
    float arr[size]{};
    while (true)
    {

        do
        {
            std::cout << "��������� �� ������ � ��������!\n";
            std::cout << "�� ������ :  \n0) ����� �� ��������� \n1)��������� ������ ������� \n2)������ �������� ��������� ";
            std::cin >> choice;
        } while (choice < 0 || choice >2);

        if (choice == 1)
        {
            UsingArray(arr, size);
            std::cout << "��� ������:";
            Print(arr, size);
        }
        else if (choice == 2)
        {
            AutoArray(arr, size);
        }
        else if (choice == 0)
        {
            break;
        }
        else
        {
            std::cout << "������������ �����";
        }

        if (choice == 1 || choice == 2)
        {
            do
            {

                std::cout << "��� ����������� ������\n";
                std::cout << "1)�� ��������\n";
                std::cout << "2)�� �����������\n";
                std::cout << "3)�� ��������\n";
                std::cin >> choiceBool;
            } while (choiceBool < 1 || choiceBool > 3);

            if (choiceBool == 3)
            {

                Print(arr, size);
            }
            if (choiceBool == 1 || choiceBool == 2)
            {
                Sort(arr, size, choiceBool);
            }
        }


    }
    return 0;
}
template<typename ArrayT>
void Print(ArrayT arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }std::cout << "\n";
}

template<typename ArrayT>
void AutoArray(ArrayT arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}

template<typename ArrayT>
void UsingArray(ArrayT arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "������� �" << i + 1 << " ";
        std::cin >> arr[i];
    }
    std::cout << "\n";
}

bool WayChoice(int choiceBool)
{
    if (choiceBool == 1)
    {
        return false;
    }
    else if (choiceBool == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template<typename ArrayT>
void Sort(ArrayT arr[], int size, bool choiceWay)
{
    if (choiceBool == 1) // �� ��������
    {
        for (int i = 0; i < size - 1; ++i) {
            for (int j = 0; j < size - i - 1; ++j) {
                if (arr[j] < arr[j + 1]) {
                    float temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        std::cout << "��������" << std::endl;
    }
    else if (choiceBool == 2) // �� �����������
    {
        for (int i = 0; i < size - 1; ++i) {
            for (int j = 0; j < size - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    float temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        std::cout << "����������" << std::endl;
    }
}