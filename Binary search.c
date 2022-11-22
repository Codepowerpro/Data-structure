// Binary search
// start
// set <-arr[5]={10,20,30,40,50}; Element also arrange in either accending ar deacending
// set low<-0,up<-4,f<-0
// Input searching item
// Reapet step 6 and 8 while(low<=up)
// set mid<-low+up/2
// if arr[mid]==item then f=1 & break
// if arr[mid]<item then set low=mid+1 else arr[mid]>item then set up<- mid-1
// if f=1 then print item found with location =mid else print item not found
// exit
#include <stdio.h>
int main()
{

    int arr[5] = {10, 20, 30, 40, 50};
    int low = 0, up = 4, f = 0, item, mid;

    printf("Enter searching item");
    scanf("%d", &item);
    while (low <= up)
    {
        mid = (low + up) / 2;
        if (arr[mid] == item)
        {
            f = 1;
            break;
        }
        if (arr[mid] < item)
        {
            low = mid + 1;
        }
        else
        {
            // arr[mid]>item
            up = mid - 1;
        }
    }
    if (f == 1)
    {
        printf("Item %d found at %d possition ", item, mid);
    }
    return 0;
}
