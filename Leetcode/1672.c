int maximumWealth(int** acc, int  number_of_rows, int* array_of_number_of_colums)
{
    int max = 0;

    for (int i = 0; i < number_of_rows; i++)
    {
        int sum = 0;

        for (int j = 0; j < (array_of_number_of_colums)[i]; j++)
            sum += acc[i][j];

        if (sum > max)
            max = sum;
    }

    return max;
}
