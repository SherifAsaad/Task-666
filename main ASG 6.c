#include <stdio.h>
#include <stdlib.h>
struct student
{
  char name[10];
  int age;
  int degree ;
  int section;
};

int main()
{
  struct student st1 ={"ahmed" ,20 ,85 ,1 };
  struct student st2 ={"mohamed" ,21 ,75 ,2 };
  struct student st3 ={"mahmoud" ,19 ,90 ,3 };
  struct student st4 ={"moataz" ,18 ,65 ,4 };
  struct student st5 ={"mostafa" ,22 ,80 ,5 };
   printf("student st1 \n");
   printf(" name : %s \n",st1.name);
   printf(" age : %d \n",st1.age);
   printf(" degree : %d \n",st1.degree);
   printf(" section : %d \n",st1.section);
   printf("\n student st2 \n");
   printf(" name : %s \n",st2.name);
   printf(" age : %d \n",st2.age);
   printf(" degree : %d \n",st2.degree);
   printf(" section : %d \n",st2.section);
   printf("\n student st3 \n");
   printf(" name : %s \n",st3.name);
   printf(" age : %d \n",st3.age);
   printf(" degree : %d \n",st3.degree);
   printf(" section : %d \n",st3.section);
   printf("\n student st4 \n");
   printf(" name : %s \n",st4.name);
   printf(" age : %d \n",st4.age);
   printf(" degree : %d \n",st4.degree);
   printf(" section : %d \n",st4.section);
   printf("\n student st5 \n");
   printf(" name : %s \n",st5.name);
   printf(" age : %d \n",st5.age);
   printf(" degree : %d \n",st5.degree);
   printf(" section : %d \n",st5.section);
    return 0;
}
