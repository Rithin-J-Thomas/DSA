// //calls or import "cpp_keywords.cpp" file
#include "cpp_keywords.cpp"
#include<iostream>
#include<string>
#include<vector>
#include<cmath>

using std::cout,std::cin;


void binary_search(std::string user_input)
{
    int low = 0 , high = size(cpp_keywords_vector)-1;
    int mid ;
    bool found = false;

    while(low<=high)
    {
        mid = floor((low+high)/2);

        if(cpp_keywords_vector[mid].word == user_input)
        {
            cout<<"\n\033[102m\033[30m  "<<cpp_keywords_vector[mid].word<<" - "<<cpp_keywords_vector[mid].description<<"\033[0m  \n\n";
            found = true;
            break;
        }
        else if(cpp_keywords_vector[mid].word > user_input)
        {
            high = mid-1;
        }
        else if(cpp_keywords_vector[mid].word < user_input)
        {
            low = mid+1;
        }
    }
    if(found != true)
    {
        cout<<"\n \033[41m\033[97m  "<<user_input<<"  Not Found "<<"  \033[0m \n\n";
    }
}


int main()
{
    std::string user_input;

    while(true)
    {
        cout<<"Enter the word in lower case\t";
        cin>>user_input;

        if(user_input == "q" || user_input == "Q")
        {
            cout<<"\n";
            break;
        }
        else
        {
            binary_search(user_input);
        }

        cout<<"Enter Q to exit\n";

    }

    return 0;
}