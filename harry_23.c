// #include<stdio.h>
// int main()
// {
//      int marks[5];
//     // marks[0] = 10;
//     // marks[1] = 20;
//     // marks[2] = 30;
//     // marks[3] = 40;
//     // marks[4] = 50;
//     // marks[5] = 60;
//     // printf("marks of student 0 is %d\n",marks[0]);
//     // printf("marks of student 1 is %d\n",marks[1]);
//     // printf("marks of student 2 is %d\n",marks[2]);
//     // printf("marks of student 3 is %d\n",marks[3]);
//     // printf("marks of student 4 is %d\n",marks[4]);
//     // return 0;
//     for (int i = 0; i < 4; i++)
//     {
//         printf("Enter the value of %d element of the array\n",i);
//         scanf("%d",&marks[i]);
        
//     }
//     for (int i = 0; i < 4; i++)
//     {
//          printf("The value of %d element is %d\n",i,marks[i]);
        
//     }
    
    
// }
#include<stdio.h>
int main()
{
 int marks[2][2];
for ( int  i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
    {
        printf("Enter the value of %d element of the array\n",i);
        scanf("%d",&marks[i][j]);

    }
}
    
 
   
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
               printf("The value of %d,%d element is %d\n",i,j,marks[i][j]);
        }

       
        
    }
}