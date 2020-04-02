#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void lab();
void generateMatrix(int**, int, int, int, int);
void printfMatrix(int**, int, int);
void int_a2b_b2a(int, int);
void subFuncSortCols(int**, int, int, int, int, int);
void SortCols(int**, int, int);

int main()
{
    lab();
    return 0;
}

void lab()
{
    int N = 10, M = 16;
    int **a = new int*[N];
    for (int i = 0; i < N; i++)
    {
        a[i] = new int[M];
    }

    generateMatrix(a, N, M, 2, 4);
    printfMatrix(a, N, M);

    SortCols(a, N, M);
    cout << endl << "sorted cols" << endl << endl;
    printfMatrix(a, N, M);
}

void generateMatrix(int** arr, int rows, int cols, int a, int b)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % (b - a + 1) + a;
        }
    }
}

void printfMatrix(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(6) << arr[i][j];
        }
        cout << endl;
    }
}

void subFuncSortCols(int** arr, int rows, int cols, int k, int i, int j)
{
    if(arr[k][i] == arr[k][j])
    {
        k++;
    }

    if(arr[k][i] < arr[k][j])
    {
        for (int q = 0; q < rows; q++)
        {
            int temp = arr[q][i];
            arr[q][i] = arr[q][j];
            arr[q][j] = temp;
        }
    }
}

void SortCols(int** arr, int rows, int cols)
{
    for(int i = 0; i < cols; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            for(int ii = 0; ii < cols; ii++)
            {
                int k = 0;
                if(arr[k][i] == arr[k][j])
                {
                    k++;
                    subFuncSortCols(arr,rows, cols, k, i, j);
                }

                if(arr[k][i] < arr[k][j])
                {
                    for (int q = 0; q < rows; q++)
                    {
                        int temp = arr[q][i];
                        arr[q][i] = arr[q][j];
                        arr[q][j] = temp;
                    }
                }
            }
        }
    }
}
