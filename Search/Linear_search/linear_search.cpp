#include<iostream>
#include<list>

using std::cout , std::cin;

int main() 
{
    int user_input , index = 1;// //here index is starting from 1 not 0
    bool found = false;

    std::list<int> numb_list = {42, 7, 19, 3, 88, 25, 60, 13, 5, 7};
    
    
    cout<<"Enter number to be found\t";
    cin>>user_input;

    for(int i : numb_list)
    {
        if (i == user_input)
        {
            cout<<"\n\033[102m\033[30m  Number found at "<<index<<"th position  \u001b[0m\n\n";
            found = true;
        }
        index++;
    }

    if(found==false)
    {
        cout<<"\n\033[101m\033[30m  There is no "<<user_input<<" in this list  \u001b[0m\n\n";
    }

    return 0;
}
