// T - 1

int findNumbers(int arr[], int size)
{
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        if ((((int)log10(arr[i]) + 1) & 1) == 0)
            ans++;
    }

    return ans;
}

// T - 2

int findNumbers(int arr[], int size)
{
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        int num = arr[i];

        int number_of_digits = 0;

        while (num)
        {
            num /= 10;
            (number_of_digits)++;
        }

        if ((number_of_digits & 1) == 0)
            (ans)++;
    }

    return ans;
}

// T - 3 (Best Case)

int findNumbers(int *nums, int numsSize)
{
    int intSizeTable[] = {9, 99, 999, 9999, 99999, 999999, 9999999};  // Created a table.
    int result = 0;
    for (int i = 0; i < numsSize; i++)
    {
        int k = 0;
        for (k;; k++)
        {
            if (nums[i] <= intSizeTable[k])
            {
                break;
            }
        }
        if ((k + 1) % 2 == 0)
        {
            result++;
        }
    }
    return result;
}
