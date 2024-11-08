/*

Experiment 6

Title   : WAP to define a counter function to print how many times the function is called. use storage classes.

Name    : Fardeen Firoz Khan

Division: FE D

UIN     : 241P096

*/


    #include<stdio.h>


     void counter ()
     {
        // Building the logic of calling counter using storage class "static".

        static count = 0;

        // Incrementing the value stored in static by one when the counter is called.

        count ++;

        // Printing the times counter has been called.

        printf("\nCounter is called : %d times\n",count);

     }


    int main()

    {
        // Calling the Counter.

        counter();
        counter();
        counter();
        counter();
        counter();
        counter();
        counter();



    return 0;
    }



/*
OUTPUT:

Counter is called : 1 times

Counter is called : 2 times

Counter is called : 3 times

Counter is called : 4 times

Counter is called : 5 times

Counter is called : 6 times

Counter is called : 7 times



*/
