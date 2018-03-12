#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, all_rows, spaces, hashes;

    do
    {
        printf("Height: ");
        height = get_int();
    }
    while (height < 0 || height > 23);

    for (all_rows = 0; all_rows < height; all_rows++)
    {
        for (spaces = (height - all_rows - 1); spaces > 0; spaces --)
        {
            printf(" ");
        }
        for (hashes = 0; hashes <= all_rows; hashes++)
        {
            printf("#");
        }
        printf("  ");

        for (hashes = 0; hashes <= all_rows; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}