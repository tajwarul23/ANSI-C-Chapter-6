#include<stdio.h>
int main()
{
    int mark,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,n;
    printf("Enter the number of students:");
    scanf("%d",&n);

  for (int i = 0; i <= n; i++)
  {
       printf("Enter your mark:");
  scanf("%d",&mark);
      if (mark>80 && mark<=100)
      {
          c1++;
          
      }
      else if (mark>=60 && mark<80  )
      {
          c2++;
      }
      else if (mark>=40 && mark <60)
      {
          c3++;
      }
      else if (mark<=40)
      {
          c4++;
      }
      else if(mark>=61 && mark<=80){
          c5++;
      }
      else if (mark>=41 && mark<=60)
      {
          c6++;
      }
      
      else if (mark>=0 && mark<=40)
      {
          c7++;
      }

      else if (mark>100)
      {
          printf("Put valid marks");
      }
      
      
      
      
  }
  printf("more than 80 %d\n",c1);
  printf("more than 60 %d\n",c2);
  printf("more than 40 %d\n",c3);
  printf("less than 80 %d\n",c4);
  printf("61 to 80 %d\n",c5);
  printf("41 to 60 %d\n",c6);
  printf("0 to 40 %d\n",c7);
  printf("81 to 100 %d\n",c1);
  
    


}