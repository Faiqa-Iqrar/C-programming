#include<stdio.h>

void copyString(char dest[], char src[])
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';    /* close the new string */
}


int findLength(char arr[]){
int length=0;
while(arr[length] != '\0'){
    length++;
}
return length;
}

void sortAscending(char names[][30], int n){
    char temp[30];
    for( int i = 0 ; i < n-1 ; i++){
        for( int j = 0; j < n-1-i ; j++){
            if( ( findLength(names[j]) ) > ( findLength(names[j+1]) ) ){
                copyString(temp, names[j+1] );
                                copyString(names[j+1], names[j] );
                                copyString(names[j], temp);

            }
        }
    }
}

void sortDescending(char names[][30], int n){
    char temp[30];
    for(int i = 0; i<n-1 ; i++){
        for(int j = 0; j<n-2-i ; j++){
            if( findLength(names[j]) < findLength(names[j+1]) ){
                copyString(temp, names[j]);
                     copyString(names[j], names[j+1]);
                         copyString(names[j+1], temp);

            }
        }
    }
}

int main(){
    int n = 5;
char names[5][30];
for( int i = 0; i < 5; i++){
    printf("Enter Name#%d :", i+1);
    scanf("%29s", names[i]);
    int length = findLength(names[i]);
    printf("Length is %d\n", length);
}
sortAscending(names, n);
printf("The length of names in Ascending order is:\n");
for(int i = 0; i<n ; i++){
printf("%d. %s\n", i+1, names[i]);
}

sortDescending(names, n);
printf("The length of names in Descending order is:\n");
for(int i = 0; i<n ; i++){
printf("%d. %s\n", i+1, names[i]);
}
    return 0;
}
