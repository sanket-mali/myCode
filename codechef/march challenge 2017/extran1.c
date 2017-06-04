#include<stdio.h>
long long int n;

void swap(long long int* a,long long int* b)
{
    long long int t = *a;
    *a = *b;
    *b = t;
}
long long int partition (long long int arr[],long long int low,long long int high)
{
    long long int pivot = arr[high];
    long long int i = (low - 1);  // Index of smaller element
 	long long int j;
    for (j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
           /* long long int temp;
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;*/
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    /*long long int temp;
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;*/
    
    return (i + 1);
}
 
void quickSort(long long int arr[],long long int low,long long int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        long long int pi = partition(arr,low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr,low, pi - 1);
        quickSort(arr,pi + 1, high);
    }
}

int main()
{
	long long int t,i,j,arr[100000];
	scanf("%lld",&t);
	for (i = 0; i < t; ++i)
	{
		scanf("%lld",&n);
		for (j = 0; j < n; ++j)
		{
			scanf("%lld",&arr[j]);
		}
		quickSort(arr,0,n-1);
		/*for (j=0; j < n; j++)
        printf("%lld ", arr[j]);
    	printf("\n");*/
    	for (j = 0; j < n; ++j)
    	{
    		if(arr[j]==arr[j+1])
    		{
    			printf("%lld\n",arr[j] );
    			break;
    		}
    	}
    	if((arr[1]-arr[0])>1)
    		printf("%lld\n",arr[0] );
    	if((arr[n-1]-arr[n-2])>1)
    		printf("%lld\n",arr[n-1] );
	}
	return 0;	
}