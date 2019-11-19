//no return statement
void ageRate();
int main()
{
int years,category;
//printf("Enter your age");
//scanf("%d",&age);
ageRate();
//printf("Your category is %d",category);
//return 0;
}
void ageRate()
{
    int age;
    printf("Enter your age");
    scanf("%d",&age);
    if(age<=4)
    {
      printf("You are a baby");
    }else if(age<=12)
    {
        printf("You are a child");
    }else if(age<=19)
    {
        printf("You are a teen");
    }else if(age<=35)
    {
        printf("You are a youth");
    }else
    {
        printf("You are getting old");
    }
   //return soln;
}
