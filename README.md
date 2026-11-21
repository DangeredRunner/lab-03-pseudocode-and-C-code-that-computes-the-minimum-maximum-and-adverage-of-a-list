# Pseudocode-and-C-code-that-computes-the-minimum-maximum-and-adverage-of-a-list
##Problem- 
I needed to compute the minimum, maximum, and average of a list of numbers while handling an empty list case.   

##What I built- 
A C program and matching pseudocode algorithm that read n elements into a list, initialize min, max, and avg from the first element, and loop through the remaining elements to track the minimum, maximum, and sum for the average.   

##How it works- 
Read n, the number of elements in the list.

If n != 0, create a list of size n and read each element v[0] through v[n-1].

Set min, max, and avg to v[0].

Loop from index 1 to n - 1, adding each element to avg and updating max or min when a larger or smaller value is found.

Divide avg by n and print the results, or print that the list is empty when n = 0.

##How I tested it- 
I traced and tested the algorithm on [7, 4, 10, 9, 5] (n = 5), which gave a minimum of 4, maximum of 10, and average of 7.
I also tested an empty list (n = 0), which output that the list is empty.   

##What I learned- 
Starting min and max from the first element rather than 0 avoids false bounds, and dividing by n (the length of the data) after summing computes the average cleanly.   

##Limitations- 
In the C code, avg is an integer (int), so avg / n uses integer division rather than keeping decimal places, and the argument order in printf prints max before min despite the label order.
