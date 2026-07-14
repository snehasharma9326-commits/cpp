#include <iostream>
using namespace std;

class ArrayOperation
{
private:
    int arr[100];
    int size;
    
public:
    
    void insertElements()
    {
        cout << "Enter number of elements: ";
        cin >> size;

        cout << "Enter array elements: ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }

    
    void displayArray()
    {
        cout << "Array Elements: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    
    void findMaximum()
    {
        int max = arr[0];

        for (int i = 1; i < size; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }

        cout << "Maximum Element = " << max << endl;
    }

    
    void sortDescending()
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] < arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        cout << "Array after sorting in decreasing order: ";
        displayArray();
    }
};

int main()
{
    ArrayOperation obj;

    obj.insertElements();

    cout << "\nOriginal ";
    obj.displayArray();

    obj.findMaximum();

    obj.sortDescending();

    return 0;
}