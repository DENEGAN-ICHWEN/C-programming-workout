/*
Program that clasifies a gift based on its identification
(Read santa_gift_problem.txt)
Author: Clay Felipe Charry Pinzón
Date: 20/11/2022
*/

#include <stdio.h>

char main(void)
{
    char gift_id, gift_to[] = "Child";
    int is_palindrome, int_gift_id;

    printf("Enter the gift's ID: ");
    scanf("%c", &gift_id);

    int_gift_id = gift_id;
    is_palindrome = palindrome_id(gift_id);

    if (is_palindrome && gift_id % 2 == 0)
    {
        gift_to[4] = "Girl";
    }

    if (! is_palindrome && gift_id % 2 != 0)
    {
        gift_to = "Man";
    }

    if (! is_palindrome && gift_id % 2 == 0)
    {
        gift_to = "Woman";
    }

    return gift_to;
}

int palindrome_id(id) // Function that says if a ID is palindrome or not.
{
    int palindrome = 0;
    char reverse_id;

    return palindrome;
}