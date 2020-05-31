#Day 6

#include <iostream>
using namespace std;

int main()
{
	int count, i, a[7], n, l, h, mid;
	cout<<"how many elements would you like to enter?:"; 
        cin>>count;

	for (i=0; i<count; i++)
	{
		cout<<"Enter number "<<(i+1)<<": "; 
                cin>>a[i];
	}
	cout<<"Enter the number that you want to search:"; 
        cin>>n;
	l = 0;
	h= count-1;
	mid = (l+h)/2;
	while (l<= h)
	{
	   if(a[mid] < n)
	   {
		l = h + 1;

	   }
	   else if(a[mid] == n)
	   {
		cout<<n<<" found in the array at the location "<<mid+1<<"\n"; 
                break; 
           } 
           else { 
                h = mid - 1; 
           } 
           mid= (l+ h)/2; 
        } 
        if(l > h)
	{
	   cout<<n<<" not found in the array";
	}
	return 0;
}
