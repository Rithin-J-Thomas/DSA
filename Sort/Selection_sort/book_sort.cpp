#include<iostream>
#include<string>
#include<vector>

using std::cout,std::cin;

struct Book{
    int id;
    std::string title;
};

std::vector <Book> Book_vector ={
    {7, "Moby Dick"},
    {3, "To Kill a Mockingbird"},
    {10,"One Hundred Years of Solitude"},
    {1, "The Lord of the Rings"},
    {6, "The Great Gatsby"},
    {4, "1984"},
    {9, "The Catcher in the Rye"},
    {5, "Harry Potter and the Sorcerer's Stone"},
    {2, "Pride and Prejudice"},
    {8, "Hamlet"}

};

void print_vector()
{
    cout<<"\n";
    for(auto k:Book_vector)
    {
        cout<<k.id<<"  "<<k.title<<"\n";
    }
    cout<<"\n";
}


void id_sort()
{
    int min,max,current_min,index;
    bool swapped;

    for(int i = 0;i<size(Book_vector);i++)
    {
        min=Book_vector[i].id;
        current_min = min;
        swapped = false;

        for(int j =i+1;j<size(Book_vector);j++)
        {
            if(current_min>Book_vector[j].id)
            {
                current_min = Book_vector[j].id;
                swapped=true;
                index = j;
            }
        }    
        if(swapped==true)
        {
            std::swap(Book_vector[i],Book_vector[index]);      
        }
    }

    print_vector();

}

void name_sort()
{
    std::string min,max,current_min;
    int index;
    bool swapped;

    for(int i = 0;i<size(Book_vector);i++)
    {
        min=Book_vector[i].title;
        current_min = min;
        swapped = false;

        for(int j =i+1;j<size(Book_vector);j++)
        {
            if(current_min>Book_vector[j].title)
            {
                current_min = Book_vector[j].title;
                swapped=true;
                index = j;
            }
        }    
        if(swapped==true)
        {
            std::swap(Book_vector[i],Book_vector[index]);      
        }
    }

    print_vector();  
}

int main()
{
    
    std::string user_input;

    while(true)
    {

        cout << "Enter 'Name' to sort by name, 'ID' to sort by ID, or 'Q' to quit: ";
        cin>>user_input;
    
        if(user_input=="Q"||user_input=="q")
        {
            break;
        }
        else if(user_input=="Name"||user_input=="name")
        {
            name_sort();
        }       
        else if(user_input=="ID"||user_input=="id"||user_input=="Id")
        {
            id_sort();
        }
        else
        {
            cout<<"\033[103m\033[30m  INVALID  \033[0m\n";
        }

    }
    
    return 0;
}