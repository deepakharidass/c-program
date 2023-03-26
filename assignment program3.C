Program:1
#include <stdio.h>
#include <string.h>

int main(){
    char string1[20];
    int i, length;
    int flag = 0;
    
    printf("Enter a string:");
    scanf("%s", string1);
    
    length = strlen(string1);
    
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
           }
        }
    
    if (flag) {
        printf("%s is not a palindrome", string1);
    }    
    else {
        printf("%s is a palindrome", string1);
    }
    return 0;
}

output:
enter a string:hello
hello is a palindrome

Program:2
#include<stdio.h>
int count_vowels(char []);
int check_vowel(char);

int main()
{
   char array[100];
   int c;
   printf("Enter a string\n");
   gets(array); 
   c = count_vowels(array);
   printf("Number of vowels: %d\n", c);
   return 0;
}
int count_vowels(char a[])
{
   int count = 0, c = 0, flag;
   char d;
   do
   {  
      d = a[c];
     flag = check_vowel(d);
     if (flag == 1)
     count++;
     c++;
   } while (d != '\0');
   return count;
}
 
output:
Enter a line of string: C++ 20 is the latest version of C++ yet.
Vowels: 9
Consonants: 16
Digits: 2
White spaces: 8

Program:3
#include<stdio.h>
#include<string.h>
main(){
   int i,j,n;
   char str[100][100],s[100];
   printf("Enter number of names :
");
   scanf("%d",&n);
   printf("Enter names in any order:
");
   for(i=0;i<n;i++){
      scanf("%s",str[i]);
   }
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(s,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],s);
         }
      }
   }
   printf("
The sorted order of names are:
");
   for(i=0;i<n;i++){
      printf("%s
",str[i]);
   }
}

output:
enter the number=5             

Program:4
#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   // leap year if perfectly divisible by 400
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   // not a leap year if divisible by 100
   // but not divisible by 400
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   // leap year if not divisible by 100
   // but divisible by 4
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   // all other years are not leap years
   else {
      printf("%d is not a leap year.", year);
   }

   return 0;
}             

output:
enter the year:1900
1900 is not a leapyear
enter the year: 2012
2012 is a leapyear
             
program:5
#include<stdio.h>

int main(){

    int num,i,count,n;
    printf("Enter max range: ");
    scanf("%d",&n);
    for(num = 1;num<=n;num++)
    {
      count = 0;
      for(i=2;i<=num/2;i++){
      if(num%i==0)
      {
        count++;
        break;
       }
     }
      if(count==0 && num!= 1
      printf("%d ",num);
    }
  return 0;
}             
             
output:
enter the max range 50
2 3 5 7 11 13

Program:6
#include <stdio.h>
void transpose(int p[3][3], int t[3][3]);
int main() {
int i, j;
int p[3][3], t[3][3];
printf("Enter matrix P\n");
for (i = 0; i < 3; i++) 
{
for (j = 0; j < 3; j++) 
{
printf("Enter the elements of matrix P [%d,%d]: ", i, j);
scanf("%d", & p[i][j]);
}
}
transpose(p, t);
printf("Transpose of matrix P is:\n\n");
for (i = 0; i < 3; i++) 
{
  for (j = 0; j < 3; j++) 
    {
      printf("%d ", t[i][j]);
    }
    printf("\n");
  }

}

void transpose(int p[3][3], int t[3][3]) {
int row, col;
for (row = 0; row < 3; row++) {
    for (col = 0; col < 3; col++) {
      t[row][col] = p[col][row];
    }
  }
}        
 
output:
Enter matrix P
Enter the elements of matrix P [0,0]: 1
Enter the elements of matrix P [0,1]: 2
Enter the elements of matrix P [0,2]: 3
Enter the elements of matrix P [1,0]: 4
Enter the elements of matrix P [1,1]: 5
Enter the elements of matrix P [1,2]: 6
Enter the elements of matrix P [2,0]: 7
Enter the elements of matrix P [2,1]: 8
Enter the elements of matrix P [2,2]: 9

1 4 7
2 5 8
3 6 9         
         
Program:7
 #include <stdio.h>
    void main ()
    {
 static int array[10][10];
 int i, j, m, n, a = 0, sum = 0;
 printf("Enetr the order of the matix \n");
 scanf("%d %d", &m, &n);
  if (m == n ) 
        {
   printf("Enter the co-efficients of the matrix\n");
   for (i = 0; i < m; ++i)
            {
                for (j = 0; j < n; ++j)
                {
                    scanf("%d", &array[i][j]);
                }
            }
 printf("The given matrix is \n");
    for (i = 0; i < m; ++i) 
            {
                for (j = 0; j < n; ++j)
                {
                    printf(" %d", array[i][j]);
                }
                printf("\n");
            }
 
            for (i = 0; i < m; ++i) 
            {
                sum = sum + array[i][i];
                a = a + array[i][m - i - 1];
            }
 printf("\nThe sum of the main diagonal elements is = %d\n", sum);
 printf("The sum of the off diagonal elements is   = %d\n", a);
 }
   else
   printf("The given order is not square matrix\n");
 }
         
output:
Enter the order of the matix
2 2
Enter the co-efficients of the matrix
40 30
38 90
The given matrix is
 40 30
 38 90
The sum of the main diagonal elements is = 130
The sum of the off diagonal elements is   = 68       
         
Program:8
#include <stdio.h>
int main()
{
int i, low, high, mid, n, key, array[100];
printf("Enter number of elementsn");
scanf("%d",&n);
printf("Enter %d integersn", n);
for(i = 0; i < n; i++)
scanf("%d",&array[i]);
printf("Enter value to findn");
scanf("%d", &key);
low = 0;
high = n - 1;
mid = (low+high)/2;
while (low <= high) {
if(array[mid] < key)
low = mid + 1;
else if (array[mid] == key) {
printf("%d found at location %d.n", key, mid+1);
break;
}
else
high = mid - 1;
mid = (low + high)/2;
}
if(low > high)
printf("Not found! %d isn't present in the list.n", key);
return 0;
}
         
output:
enter the number =5
 5        
 1
 2        
 3        
 4       
 5
         
Program:9
 #include <stdio.h>

#define max 10

int a[11] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44, 0 };
int b[10];

void merging(int low, int mid, int high) {
   int l1, l2, i;

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
   }
   
   while(l1 <= mid)    
      b[i++] = a[l1++];

   while(l2 <= high)   
      b[i++] = a[l2++];

   for(i = low; i <= high; i++)
      a[i] = b[i];
}

void sort(int low, int high) {
   int mid;
   
   if(low < high) {
      mid = (low + high) / 2;
      sort(low, mid);
      sort(mid+1, high);
      merging(low, mid, high);
   } else { 
      return;
   }   
}

int main() { 
   int i;
printf("List before sorting\n");
   for(i = 0; i <= max; i++)
     printf("%d ", a[i]);
  sort(0, max);
   printf("\nList after sorting\n");
   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);
}        
         
output:
List before sorting
10 14 19 26 27 31 33 35 42 44 0
List after sorting
0 10 14 19 26 27 31 33 35 42 44
         
         
Program:10
#include<stdio.h>    
int main()    
{    
 int n1=0,n2=1,n3,i,number;    
 printf("Enter the number of elements:");    
 scanf("%d",&number);    
 printf("\n%d %d",n1,n2);//printing 0 and 1    
 for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }  
  return 0;  
 }    

Output:         
Enter the number of elements:15
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377          
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         

         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
     





















