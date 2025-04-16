#include<iostream>
#include<vector>

using std::cout,std::cin;

int main()
{
    int i ,j;
    std::vector<int> arr = {8 ,8, 7 , 6 , 5 , 4 , 3 , 2 ,-1 , 0 };
    for(i=0;i<size(arr);i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<"\n";


    for(i=0;i<size(arr);i++)
    {
        for(j=0;j<size(arr)-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                std::swap(arr[j],arr[j+1]);
            }

        }
    }
    for(i=0;i<size(arr);i++)
    {
        cout<<arr[i]<<"  ";
    }

    return 0;
}