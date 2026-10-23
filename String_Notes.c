#include <stdio.h>
#include <string.h>

int main()
{
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("Length is: %zu\n", strlen(alphabet));
    printf("Size is: %zu\n", sizeof(alphabet));


    char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%zu\n", strlen(alphabet));   // 26
    printf("%zu\n", sizeof(alphabet));   // 50

    // Concatenate str2 to str1 (result is stored in str1)
    //the size of str1 should be large enough to store the result of the two strings combined.
    strcat(str1, str2);

    // Copy str1 to str2
    //Note that the size of str2 should be large enough to store the copied string
    strcpy(str2, str1);

    //Negative value (< 0)	: string1 comes before string2 lexicographically.
    //0	: Both strings are equal.
    //Positive value (> 0)	 : string1 comes after string2 lexicographically.
    strcmp(str1,str2);


    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';   // replace \n with end-of-string

    // Create a structure variable and assign values to it
  struct myStructure s1 = {13, 'B', "Some text"};

    struct structure s2;
     s2 = s1;   // copies name, age, and section
     


    return 0;
}

//Array of structures
/*struct STUDENT {
   int age;
   char section;

};




int main()
{

   struct STUDENT student[7];

   for(int i=0;i<7;i++)
   {
       scanf("%d %c", &student[i].age, &student[i].section);
   }

   for(int i=0;i<7;i++)
   {
       printf("Age : %d  Section : %c\n",student[i].age,student[i].section);
   }
}
*/


//A problem using array of structures

/*#include <stdio.h>
#include<string.h>

struct STUDENT
{
    char name[20];
    int number;
};

int main()
{

    int N;
    printf("Enter the Number of student : ");
    scanf("%d", &N);
     struct STUDENT s1[N];

    for(int i=0;i<N;i++)
    {
        printf("\n");
        printf("Enter the name of the student %d :",i+1);
        scanf(" %19[^\n]", s1[i].name);
        printf("Enter the number of the student %d :",i+1);
        scanf("%d", &s1[i].number);



    }

    for(int i=0;i<N;i++)
    {
         printf("Name [%d] : %s , Number [%d] : %d\n", i + 1, s1[i].name, i + 1, s1[i].number);
    }
}
*/


//Works like a pair 
/*#include <stdio.h>
#include<string.h>
#include<limits.h>
struct STUDENT
{
    char name[20];
    int number;
};

int main()
{

    int N;
    printf("Enter the Number of student : ");
    scanf("%d", &N);
     struct STUDENT s1[N];

    for(int i=0;i<N;i++)
    {
        printf("\n");
        printf("Enter the name of the student %d :",i+1);
        scanf(" %19[^\n]", s1[i].name);
        printf("Enter the number of the student %d :",i+1);
        scanf("%d", &s1[i].number);



    }

    int mx=INT_MIN;
    int pos=0;

    for(int i=0;i<N;i++)
    {
         if(s1[i].number>mx)
         {
             mx=s1[i].number;
             pos=i;
         }
    }
    printf("The student named %s got the maximum %d marks\n",s1[pos].name,s1[pos].number);
}
*/


//Pointer to structure
/*struct CAR{

      char name[30];
      int age;
};

int main()
{
    struct CAR car={"BMW",1975};

    struct CAR  *ptr=&car;

    printf("%s\n",ptr->name);  //ptr->brand is a shorter way to write (*ptr).brand
    printf("%d\n",ptr->age);
}
*/

