##include <stdio.h>
int int main()
{
  int mark;
  printf("Enter the mark\n");
  scanf("%d", &mark);
  if (mark>=80&&mark<=100)
  {
    printf("Grade: A\nGrade Point: 5.0");
  }
  else if (mark>=70&&mark<=79)
  {
    printf("Grade: B+\nGrade Point: 4.5");
  }
  else if (mark>=60&&mark<=69)
  {
    printf("Grade: B-\nGrade Point: 3.5");
  }
  else if (mark>=50&&mark<=59)
  {
    printf("Grade: C\nGrade Point: 2.5");
  }
  else if (mark>=0&&mark<=49)
  {
    printf("Grade: D+\nGrade Point: 1.5");
  }
  else
  {
    printf("Invalid Mark");
  }
  return 0;
}
