/* Sorting an array in c program.
Array in C can be defined as a method of clubbing multiple entities of similar type into a larger group. These entities or elements can be of int, float, char, or double data type or can be of user-defined data types too like structures.
we need to sort the given array in ascending order such that elements will be arranged from smallest to largest. This can be achieved through two loops. The outer loop will select an element, and inner loop allows us to compare selected element with rest of the elements.
*/
 #include <stdio.h>
    int main()
    {
 
        int i, j, temp, n, num[30];
        printf("Enter the array elements  of N \n");
        scanf("%d", &n);
 
        printf("the array elements are \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &num[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (num[i] > num[j]) 
                {
 
                    temp =  num[i];
                    num[i] = num[j];
                    num[j] = temp;
 
                }
 
            }
 
        }
 
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", num[i]);
 
    }