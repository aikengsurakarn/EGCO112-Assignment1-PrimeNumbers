// C program to find
// the Prime Numbers from 1 to N
// using command line arguments

#include <stdio.h>

#include <stdlib.h> /* atoi */

// Function to check if x is prime
int isPrime(int x)
{
	int i;
  
  if (x == 1)
    {
      return 0;
    }
	// Loop to check if x has any factor
	// other than 1 and x itself
	for (i = 2; i < x / 2 + 1; i++)
  {
    if (x % i == 0)
    {
			// Since i is a factor of x
			// x is not prime
			return 0;
		}
	}

	// x is prime
	return 1;
}

// Driver code
int main(int argc, char* argv[])
{

	int n;
  int i;
  int j = 0;
  int array[100] = {0};
  int count = 0;
  int min;
  int max;

	// Check if the length of args array is 1
	if (argc == 1)
		printf("No command line arguments found.\n");
	else
  {
    for(i=1; i<argc; i++)
    {
      // Get the command line argument and
      // Convert it from string type to integer type
      // using function "atoi( argument)"
      n = atoi(argv[i]);
      
      // Check if n is prime
      if (isPrime(n) == 1)
      {
        array[j] = n;
        j++;
        count++;
        // printf("%d\n", j);
      }
    }
    min = array[0];
    max = array[0];
    for (i=0; i<count-1; i++)
    {
      if (min<array[i+1]) min = min;
      else min = array[i+1];
    }
    for (i=0; i<count-1; i++)
    {
      if (max>array[i+1]) max = max;
      else max = array[i+1];
    }
    if(min==0&&max==0)
    {
      printf("No prime number\n");
    }
    else
    {
      printf("The smallest prime is %d\n", min);
      printf("The bigest prime is %d\n", max);
    }
    
	}
	return 0;
}
