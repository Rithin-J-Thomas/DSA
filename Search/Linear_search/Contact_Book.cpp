#include<iostream>
#include<vector>
#include<string>

using std::cout , std::cin;

// //made "number" string to avoid if user entered other datatypes instead of int
// //also user can enter 2 numbers like(1111 , 2222)
struct Contact_Page
{ 
    std::string name;
    std::string number; 
};

std::vector<Contact_Page> Contact_Book ;


// //add contact & push contact to main contact 
void add_contact()
{
    std::string name , numb;
    bool found = false;

    cout<<"Name \t";
    getline(cin,name);

    cout<<"Number \t";
    getline(cin,numb);

    for(auto i :Contact_Book)
    {
        if(i.name == name)
        {
            cout<<"\033[41m  Contact already exists \033[0m\n";
            found = true;
        }
    }
    if(found == false)
    {
        Contact_Book.push_back({name,numb});
    }
    else
    {
        add_contact();
    }
}

// //display all contact
void display_all_contact()
{
    // //tracks how many contacts
    int j=1;

    // //exit if vector is empty
    if(Contact_Book.empty())
    {
        cout<<"\n\033[41m  Contact Book Empty \033[0m\n";
    }
    else
    {
        for (auto i : Contact_Book) 
        {
            cout<<"\n\033[46m\033[30m"<<j++<<": Name = " << i.name<<"   Number = " << i.number<<" \033[0m";
        }
        cout<<"\n";
    }
}

// //search specific contact from the vector
void search_contact()
{
    bool found = false;
    std::string search_name ;

    // //exit if vector is empty
    if(Contact_Book.empty())
    {
        cout<<"\n\033[41m  Contact Book Empty \033[0m\n";
    }
    else
    {

        cout<<"Enter name to search\t";
        getline(cin,search_name);
    
    
        // //Linear Search 
        for(auto i : Contact_Book)
        {
            if(i.name == search_name)
            {
                cout<<"\n\033[46m\033[30m Name = " << i.name<<"   Number = " << i.number<<" \033[0m\n";
                found = true;
            }
    
        }
    
        if(found == false)
        {
            cout<<"\033[41m  Contact Not Found  \033[0m";
    
        }
    }
}

int main() 
{
    Contact_Page info;

    while (true)
    {
        int choice;
        cout<<"\nPress 1 : add contacts\t";
        cout<<"\nPress 2 : search contact\t";
        cout<<"\nPress 3 : display all contacts\t";
        cout<<"\nPress 0 : Quit\t";

        cin>>choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            add_contact();
            break;
        
        case 2:
            search_contact();
            break;
        
        case 3:
            display_all_contact();
            break;
        
        case 0:
            return false;
            
        default:
            cout<<"\033[41m  Invalid choice  \033[0m";
            break;

        }
    }
    
    return 0;
}

