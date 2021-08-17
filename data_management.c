#include<stdio.h>
void Employee(char DsgnCode,int EmployeeId);
int main()
{
    int DeptNo,EmployeeId;
    char DsgnCode;
    printf("Enter EMPLOYEE ID : ");
    scanf("%d",&EmployeeId);
    printf("Enter DEPARTMENT NUMBER : ");
    scanf("%d",&DeptNo);
    printf("Enter DESIGNATION CODE : ");
    scanf("%*c");
    scanf("%c",&DsgnCode);
    
    switch(DeptNo)
    {
        case 10:
        {


        } 
        break;
        
        case 20:
        {
         Employee(DsgnCode,EmployeeId);   
            
            }
            break;
        
        case 30:
        {
            Employee(DsgnCode,EmployeeId);
            
            }
            break;

        
        case 40:
        {
            Employee(DsgnCode,EmployeeId);
            }
            break;

        
        default:
        break;
    }
return 0;
}
void Employee(char DsgnCode,int EmployeeId)
{
    char a[]="Marketing Department";
    char b[]="Management Department";
    char c[]="Sales Department";
    char d[]="Designing Department";
    switch(DsgnCode)
    {
            case 'M':
            printf("Empoyee with EmployeeID %d works in \"%s\" as \"Manager\"",EmployeeId,a);
            break;
            case 'S':
            printf("Empoyee with EmployeeID %d works in \"%s\" as \"Supervisor\"",EmployeeId,b);
            break;
            case 's':
            printf("Empoyee with EmployeeID %d works in \"%s\" as \"Security Officer\"",EmployeeId,c);
            break;
            case 'C':
            printf("Empoyee with EmployeeID %d works in \"%s\" as \"Clerk\"",EmployeeId,d);
            break;
             default:
            break;
    }
}