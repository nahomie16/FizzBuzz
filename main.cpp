//
//  main.cpp
//  FizzBuzz
//
//  Created by Nahom Dawit Assefa on 6/8/18.
//  Copyright © 2018 Nahom Dawit Assefa. All rights reserved.
//

#include <iostream>
#include <string>

int main()
{
    int n;
    for (n=1; n<=100; n++) // count from 1 to 100
    {
        if ((n%3) == 0)
            printf ("Fizz\n");
        
    else if (n%5 == 0 || n%3 == 0)
        printf ("FizzBuzz\n");
   
    else if ((n%5) == 0)
                printf("Buzz\n");
                
    else
               printf("%d\n", n);
               }
    return 0;
}
