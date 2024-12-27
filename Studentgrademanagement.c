#include<stdio.h>
int main()
{
  int n;
  float credits,grade_points,total_credits=0,total_grade_points=0,cgpa;
  printf("Enter the number of subjects:\n");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    printf("Enter credits for course %d:\n",i+1);
    scanf("%f",&credits);
    printf("Enter grade points for course %d:\n",i+1);
    scanf("%f",&grade_points);
    total_credits +=credits;
    total_grade_points +=(grade_points *credits);
  }
  cgpa=total_grade_points/total_credits;
  printf("CGPA:%f\n",cgpa);
  return 0;
}
