#include<stdio.h>

int Bsearch(int T , int L , int H)  
// T is target number , L represents low number , H represents high number
{  

    if ( L<= H)
	{
		int m = (L + H) / 2;
        printf("If the target number is greater than %d ?\n" ,m);
        printf("Please input Yes or No :");
        char value[10];
        scanf("%s" , value);
		if (T < m)
			return Bsearch( T, L, m - 1);
		else if (T>m)
			return Bsearch( T, m+1, H);
		else
            printf("%d",m);
			
	}
	return -1;

}


int main(void){
    printf("Please choose a number from 1 to 1000.\n");
    printf("Please input a number : \n");
    int Number;
    int low = 0 ; 
    int high  = 1000;
    scanf("%d", &Number);
    Bsearch(Number,low,high);
    
    
}
