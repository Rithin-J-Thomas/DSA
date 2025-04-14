#include <iostream>
#include <cmath>

using std::cout,std::cin;

int main()
{
    
    int arr[] ={3, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33, 36, 39, 42, 45, 48, 51, 54, 57, 60};

    int low = 0 , mid , high = (sizeof(arr)/4)-1 , numb ; 
    bool found = false;

    cout<<"Enter digit to find \t";
    cin>>numb;

    // //Binary search
    while(low<=high)
    {
        mid =floor((low+high)/2);

        if(arr[mid]==numb)
        {
            cout<<"\n \033[102m\033[30m "<<numb<<"  Found at "<<mid<<"th  index  \033[0m \n\n";
            found = true;
            break;
        }
        else if (arr[mid]>numb)
        {
            high = mid-1;
        }
        else if (arr[mid]<numb)
        {
            low = mid+1;
        }
    }

    if(found != true)
    {
        cout<<"\n \033[41m\033[97m  "<<numb<<"  Not Found "<<"  \033[0m \n\n";
    }
    return 0;
}