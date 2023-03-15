#include<stdio.h>
#include<math.h>
int pivotInteger(int n){
    if(n==1){
        return 1;
    }
    int mid = n/2;
    while(mid != n){
        int sum1 = (mid*(mid+1))/2;
        int sum2 = ((n-mid+1)*(mid+n))/2;
        if(sum1==sum2){
            return mid;
        }
        mid = mid+1;
    }
    return -1;
}
int main()
{
	int n; 
	printf("Enter the number:");
	scanf("%d",&n);
	printf("%d",pivotInteger(n));
	return 0;
}
