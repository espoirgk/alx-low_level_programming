#ifndef MAIN_H
#define MAIN_H

/**
<<<<<<< HEAD
 *  * _putchar - writes the character c to stdout
 *   * @c: The character to print
 *    *
 *     * Return: On success 1.
 *      * On error, -1 is returned, and errno is set appropriately.
 *       */
int _putchar(char c);

/**
 *  * _puts_recursion - prints a string followed by a new line
 *   * @s: string to be printed
 *    *
 *     * Description: This function prints a string followed by a new line.
 *      */
=======
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to be printed
 *
 * Description: This function prints a string followed by a new line.
 */
>>>>>>> 626503aed5b44a595604cc2bd0c2939b890a8997
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);
#endif /* MAIN_H */
