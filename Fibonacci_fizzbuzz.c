#include <stdio.h>

/* Function to generate fibonacci series */
int fibo(int num)
{
  if(num==0)
  {
    return 0;
  }
  if(num==1)
  {
    return 1;
  }
  else
  {
    return fibo(num-1) + fibo(num-2);
  }
}

/* main function */
int main() {
  int i,j,k,p,count=0,n;
  printf("enter the number of elements: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
   j = fibo(i);
    p=j;
    printf("\n %d ", j);

/*if the number is divisible by 15, print FizzBuzz */
     if((j!=0) && (j%15)==0)
    {
      printf(" FizzBuzz ");  //print FizzBuzz, if divisible by 15
    }

/*if the number is divisible by 3, print Buzz */
   else if((j!=0) && (j%3)==0)
    {
      printf(" Buzz "); //print Buzz, if divisible by 3
    }

/*if the number is divisible by 5, print Fizz */
    else if((j!=0) && (j%5)==0)
    {
      printf(" Fizz ");  //print Fizz, if divisible by 5
    }

/*if the number is not divisible by 3 and 5, check for whether it is prime */
    else if(((j%3) !=0) && ((j%5)!=0))
    {
     
      for(k=2;k<=p/2;k++)
      {
        if((p%k)==0)
        {
         count++; 
          break;
        }
      }
       if((count==0) && (p!=1))
       {
        printf(" BuzzFizz ");     //print BuzzFizz, if the number is prime
       }
        count=0;j=k=0;
    
     }
  }
  
  return 0;
}
