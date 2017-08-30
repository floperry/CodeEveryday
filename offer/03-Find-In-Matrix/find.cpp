# include <iostream>

using namespace std;

bool Find(int* matrix, int rows, int columns, int number)
{
    bool find = false;

    if (matrix != NULL && rows > 0 && columns > 0)
    {
        int row = 0;
        int column = columns - 1;
        while (row < rows && column >= 0)
        {
            if (matrix[row * columns + column] == number)
            {
                find = true;
                break;
            }
            else if (matrix[row * columns + column] > number)
                -- column;
            else
                ++ row;
        }
    }
    return find;
}

void Test_Find01() {
    int matrix[4][4] = {{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
    int rows = 4;
    int columns = 4;
    int number = 7;
    bool result = Find((int *)matrix, rows, columns, number);
    cout << "Test_Find01: " << (result ? "true" : "false") << endl;
}

void Test_Find02() {
    int matrix[4][4] = {{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
    int rows = 4;
    int columns = 4;
    int number = 5;
    bool result = Find((int *)matrix, rows, columns, number);
    cout << "Test_Find01: " << (result ? "true" : "false") << endl;
}

int main() {
    Test_Find01();
    Test_Find02();
    return 0;
}
