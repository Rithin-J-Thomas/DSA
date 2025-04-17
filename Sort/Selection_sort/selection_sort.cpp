#include<iostream>
#include<string>
#include<vector>

using std::cout , std::cin;

int main()
{
    int min,max,current_min,index;
    bool swapped;

    std::vector<int> Number_vector = { 7,7, 12, 9, -11, 0};

    cout<<"\nBefore Sorting \n";
    for(auto k:Number_vector)
    {
        cout<<k<<"  ";

    }
    cout<<"\n\n";

    for(int i = 0;i<size(Number_vector);i++)
    {
        min=Number_vector[i];
        current_min = min;
        swapped = false;

        for(int j =i+1;j<size(Number_vector);j++)
        {
            if(current_min>Number_vector[j])
            {
                current_min = Number_vector[j];
                swapped=true;
                index = j;
            }
        }

        if(swapped==true)
        {
            std::swap(Number_vector[i],Number_vector[index]);      
        }
    }

    cout<<"After Sorting \n";
    for(auto k:Number_vector)
    {
        cout<<k<<"  ";
    }
    cout<<"\n";



    return 0;
}