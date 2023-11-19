#include<stdio.h>
#include <stdbool.h>


int main(){
int i , n ,t[50][50],j,f,k,indice,temp,m;
bool found, tsubasa;
do
{
    printf("Please give me a number for n : ");     //Check input condition
    scanf("%d",&n);
} while (n<2);

for(j=0;j<n;j++)
{
for (k = 0; k < n; k++)
{
    do
    {
        found=false;
        printf("Please give me a number for t[%d,%d] :\n ",j,k);
        scanf("%d",&t[j][k]);
        for(i=1;i<=n ;i++)
            if(t[j][k] == i)found = true;         //Verify if the number is in range
        f=0;
        while(f<k && found ==true)
        {  
            if(t[j][f]==t[j][k])found =false;                           
            else f++;                            //Verify if the number is repeated                                  

        }
        if(k==n-2 && found ==true)
        {
        m=0;
        found=false;
        while(m<=k && !found)
        {
         if(t[j][m]!=n-m)found =true;
         else m++;                                 //Verify if it's sorted




        }
        }

           
    } while (!found);
    
    
}
}
for (k = 0; k < n; k++)
{

    for(j=0;j<n;j++)
    printf(" %d ",t[k][j]);                           //Print the matrix before transformation
    printf("\n");
}

printf("the transformations are : \n");
tsubasa=false;
i=0;
while(!tsubasa && i<n)
{
tsubasa = true;
for(j=0;j<n-1;j++)
{
    indice=j;
    for(k=j+1;k<n;k++)if(t[i][k]>t[i][indice])indice=k;
    if(indice!=j){
        for(int m=i;m<n;m++)
        {
        temp =t[m][indice];       //Sortes the current line and apply the same operation for the >lines
        t[m][indice]=t[m][j];                                           
        t[m][j]=temp;
        }


    }
}
printf("\n"); 
for (k = 0; k < n; k++)
{

    for(j=0;j<n;j++)
    printf(" %d ",t[k][j]);       //Print the current transformation
    printf("\n");
    }
m=0;
while(m<n-1 && tsubasa)
{
if(t[m][i]<t[m+1][i])tsubasa=false;
else m++;
}
i++;
}

printf("The line of tsubasa is : %d",i);                // Prints the last line that verifys the tsubasa property



}
