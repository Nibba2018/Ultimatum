int linearSearch(int arr[], int search)
{
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++)
        if(arr[i] == search)
            return i;
    
    return -1;
}
int binarySearch(int arr[], int search)
{
    int size = sizeof(arr)/sizeof(arr[0]);
    int first, last, middle;
    first = 0;
    last = size-1;
    middle = (first+last)/2;

    while(first != last)
    {
        if (arr[middle] == search)
        {
            return middle;
        }
        else if (arr[middle] <= search)
        {
            first = middle + 1;
            middle = (first + last)/2;
        }
        else
        {
            last = middle - 1;
            middle = (first + last)/2;
        }
    }

    return -1;
}