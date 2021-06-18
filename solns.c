/* Enter your solutions in this file */
#include <stdio.h>
/* Max function for finding the maximum value in an array */
int max (int arr[], int elements) {
	int largest=0;
	for(int i=0;i<elements;i++){
		if(arr[i]>largest)
			largest=arr[i];
		}
	return largest;
}
/* Min function for finding the minimum value in an array */
int min (int arr[],int elements) {
	int smallest=arr[0];
	for(int i=0;i<elements;i++) {
		if(arr[i]<smallest)
			smallest=arr[i];
		}
	return smallest;
}
/* Average function for finding the average in an array */
float average(int arr[], int elements) {
	int sum=0;
	float avg;
	for(int i=0;i<elements;i++)
		sum = arr[i] + sum;
	avg = (float)sum/elements;
	return avg;
}
/* Mode function for finding the mode in an array */
int mode(int arr[], int elements) {
	int mod[20];
	int count;
	for(int j=0;j<elements;j++) {
		count=0;
		for(int i=0;i<elements;i++) {
			if(arr[j] == arr[i])
				count++;
			}
		mod[j]=count;
		}
	int largest=0;
	int k=0;
	for(int m=0;m<elements;m++){
		if(mod[m]>largest){
			largest=mod[m];
			k=m;}
		}
  return arr[k];
	}
/* Prime factor function */
int factors(int integer,int pf[]) {
	int copy=integer;
	int count1=0;
	int count2=0;
	for(int i=2;i<integer/2;i++) {
		if(integer%i==0) {
			for(int k=2;k<=i;k++) {
				if(i%k==0)
					count1+=1;	;
				}
			if(count1==1) {
				while(copy%i==0) {
					pf[count2]=i;
					copy/=i;
					count2++;
					}
				copy=integer;
				}
				count1=0;
			}
			else
				continue;
		}		
		return count2;	
	}	
