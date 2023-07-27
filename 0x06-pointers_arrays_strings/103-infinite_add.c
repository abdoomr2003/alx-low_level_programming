#include <stdio.h>

/**
 * get_string_length - Calculate the length of a null-terminated string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
int get_string_length(char *str)
{
    int length = 0;
    while (str[length] != '\0')
        length++;
    return length;
}

/**
 * add_digits - Add two digits along with a carry.
 * @d1: The first digit.
 * @d2: The second digit.
 * @carry: The carry value from the previous addition.
 * @result: A pointer to store the result of the addition (digit + carry).
 *
 * Return: The carry value for the next addition.
 */
int add_digits(char d1, char d2, int carry, char *result)
{
    int sum = carry + (d1 - '0') + (d2 - '0');
    *result = (sum % 10) + '0';
    return sum / 10;
}

/**
 * infinite_add - Add two numbers and store the result in a buffer.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result (in the buffer @r), or 0 if the result
 *         cannot be stored in the buffer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = get_string_length(n1);
    int len2 = get_string_length(n2);
    int carry = 0;
    int sum;
    int i = len1 - 1;
    int j = len2 - 1;
    int result_index = size_r - 1;

    // Check if the result can be stored in the buffer
    if (len1 >= size_r || len2 >= size_r)
        return 0;

    // Perform the addition and store the result in the buffer
    while (i >= 0 || j >= 0 || carry)
    {
        if (result_index - 1 < 0) 
            return 0;

        sum = carry;
        if (i >= 0)
            sum += n1[i] - '0';
        if (j >= 0)
            sum += n2[j] - '0';

        carry = add_digits('0', '0', sum, &r[result_index - 1]);

        i--;
        j--;
        result_index--;
    }

    return r + result_index;
}

