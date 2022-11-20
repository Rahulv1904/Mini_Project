//Insertion at given Index
#include<stdio.h>
int in(){
    int n;
scanf("%d",&n);
return n;
}
int input(int a[], int n){
for(int i=0;i<n;i++)
 scanf("%d",&a[i]);
return 1;
};

int brain(int a[],int n,int r,int z){
    for(int i=n;i>z;i--)
   a[i]=a[i-1];
a[z]=r;
return 1;
};

int output(int a[75],int n){
    for(int i=0;i<n+1;i++)
printf("%d ",a[i]);
return 0;
}
int main(){
int i,a[75],r,n,z;
n=in();
input(a,n);
printf("Enter the index of element to be inserted\n");
scanf("%d",&z);
z=z-1;
printf("enter the elements to be inserted\n");
scanf("%d",&r);
brain(a,n,r,z);
output(a,n);
return 0;
}
