#include <iostream>

using namespace std;

int main()
{
    //int arr[3][4] =
    //{
    //    {3, 5, 6, 7},
    //    {12, 1, 1, 7},
    //    {0, 7, 12, 1}
    //};

    //int sum = 0;
    //int min = arr[0][0];
    //int max = arr[0][0];

    //for (int i = 0; i < 3; i++)
    //{
    //    for (int j = 0; j < 4; j++)
    //    {
    //        sum += arr[i][j];

    //        if (arr[i][j] < min)
    //        {
    //            min = arr[i][j];
    //        }

    //        if (arr[i][j] > max)
    //        {
    //            max = arr[i][j];
    //        }
    //    }
    //}

    //double average = (double)sum / 12;

    //cout << "sum: " << sum << '\n';
    //cout << "average: " << average << '\n';
    //cout << "min: " << min << '\n';
    //cout << "max: " << max << '\n';


    //2 

    //int arr[3][4] =
    //{
    //    {3, 5, 6, 7},
    //    {12, 1, 1, 1},
    //    {0, 7, 12, 1}
    //};

    //int sum = 0;



    //for (int i = 0; i < 3; i++)
    //{
    //    int rowsum = 0;

    //    for (int j = 0; j < 4; j++)
    //    {
    //        cout << arr[i][j] << " ";

    //        rowsum += arr[i][j];
    //        sum += arr[i][j];
    //    }

    //    cout << "| " << rowsum << '\n';
    //}

    //cout << "-----------------" << '\n';



    //for (int j = 0; j < 4; j++)
    //{
    //    int columsum = 0;

    //    for (int i = 0; i < 3; i++)
    //    {
    //        columsum += arr[i][j];
    //    }

    //    cout << columsum << " ";
    //}

    //cout << "| " << sum << '\n';

    //3

    int arr1[5][10];
    int arr2[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr1[i][j] = rand() % 51;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr2[i][j] = arr1[i][j * 2] + arr1[i][j * 2 + 1];
        }
    }



    cout << "first:" << '\n';

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << arr1[i][j] << " ";
        }

        cout << '\n';
    }

    cout << '\n';
    cout << "second:" << '\n';

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr2[i][j] << " ";
        }

        cout << '\n';
    }











}

