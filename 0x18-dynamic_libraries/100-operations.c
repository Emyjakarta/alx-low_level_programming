/**
 * add-function that adds two integers
 * @a: first integer
 * @b: second integer
 * Return: a + b
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub-function that subtracts an integer from another
 * @a: first integer
 * @b: second integer
 * Return: a - b
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul-function that multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: a * b
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div-function that finds the quotient of an integer
 * @a: first integer
 * @b: second integer
 * Return: a / b
 */
int div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}
/**
 * mod-function that finds the remainder
 * when a number is divided by another
 * @a: first integer
 * @b: second integer
 * Return: a % b
 */
int mod(int a, int b)
{
	return (a % b);
}
