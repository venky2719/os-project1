#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int i,j,n,distance=0;
	//print domessf
	printf("\Enter the total number of requests: \n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the values of requests: \n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	int hs,pv;
	printf("enter the head start(current position) value: ");
	scanf("%d",&hs);
	printf("enter the previous value of head start:");
	scanf("%d",&pv);
	 if(hs<pv){
     	distance=distance+(pv-hs);
	 }
	 else{
	 	distance=distance+(hs-pv);
	 }
	
	for(i=0;i<n-1;i++)
	{
		if(arr[i] < arr[i+1])
		distance += arr[i+1] - arr[i];
		else
		distance += arr[i] - arr[i+1];
    }
    if(arr[0]<pv){
     	distance=distance+(pv-arr[0]);
	 }
	 else{
	 	distance=distance+(arr[0]-pv);
	 }
     
	printf("\nTotal distance(head movement) by drive is: %d",distance);
}
