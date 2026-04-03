#include <stdio.h>
#include <string.h>

void sort_strings(char **arr, int size)
{
    char *temp;
    for (int i = 0; i < size; i++) // 0,1,2,3 훑어줌
    {
        for (int j = 0; j < size - 1 - i; j++) // 0,1,2 다음 0,1 다음 0
        {
            if (strcmp(arr[size - 1 - i], arr[j]) < 0) // 3 vs 0,1,2 next 2 vs 0,1 next 1 vs 0
            {
                temp = arr[j];
                arr[j] = arr[size - 1 - i];
                arr[size - 1 - i] = temp;
            }
        }
    }
}

int main()
{
    char *words[] = {"apple", "ant", "banana", "cherry"};
    int size = 4;

    sort_strings(words, size);

    for (int i = 0; i < size; i++)
    {
        printf("%s\n", words[i]);
    }

    return 0;
}