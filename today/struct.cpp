#include <stdio.h>

struct student
{
    char    name[30];
    int     roll;
    float   perc;
};
int main()
{
    struct student  std;        //structure variable
    struct student  *ptr;       //pointer to student structure

    ptr= &std;                  //assigning value of structure variable

    
    printf("\n Ten Sinh Vien :: ");
    scanf("%s",ptr->name);
    printf("\n So bao danh :: ");
    scanf("%d",&ptr->roll);
    printf("\n Diem :: ");
    scanf("%f",&ptr->perc);

    printf("\n Thong tin sinh vien la :: \n");
    printf("\n Ten : %s \n\n SBD: %d \n\n Diem: %.02f \n",ptr->name,ptr->roll,ptr->perc);

    return 0;
}
