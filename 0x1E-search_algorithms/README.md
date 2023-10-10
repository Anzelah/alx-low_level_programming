0x1E. C - Search Algorithms
-Task 0
Write a function that searches for a value in an array of integers using the Linear search algorithm
Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)

- Task 1:
Write a function that searches for a value in a sorted array of integers using the Binary search algorithm
You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example)

- Task 2
What is the time complexity (worst case) of a linear search in an array of size n

- Task 3
What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n

- Task 4:
What is the time complexity (worst case) of a binary search in an array of size n

- Task 5:
What is the space complexity (worst case) of a binary search in an array of size n

- Task 6:
What is the space complexity of this function / algorithm?
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
