#include<stdio.h>
void quadrant(float x,float y);
int main()
{
    float a,b;
    printf("Enter value of x-axis : ");
    scanf("%f",&a);
    printf("Enter value of y-axis  : ");
    scanf("%f",&b);
    quadrant(a,b);
    return 0;
    }
    void quadrant(float x,float y)
    {
        if(x>0 && y>0)
        printf("FIRST Quadrant");
        else if(x<0 && y>0)
            printf("SECOND Quadrant");
            else if(x<0 && y<0)
              printf("THIRD Quadrant");
                else if(x>0 && y<0)
                    printf("FOURTH Quadrant");
                        else if(x==0 && y>0)
                            printf("points lies on +y axix");
                                else if(x==0 && y<0)
                                  printf("points lies on -y axis");
                                  else if(x>0 && y==0)
                                    printf("points lies on +x axis");
                                    else if(x<0 && y==0)
                                      printf("points lies on -x axis");
                                      else
                                      {
                                          printf("points lies on origin");
                                      }
                                      
    }