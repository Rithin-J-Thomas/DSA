#include<iostream>
#include<vector>
#include<string>
#include<iomanip>


using std::cout ,std::cin;

struct Movie {
    std::string name;
    float rating;
};

std::vector <Movie> movie_vector=
            {
                {"The Shawshank Redemption" , 9.3},
                {"The Godfather" , 9.2},
                {"The Dark Knight" , 9.0},
                {"Pulp Fiction" , 8.9},
                {"Fight Club" , 8.8},
                {"Forrest Gump" , 8.8},
                {"Inception" , 8.7},
                {"The Matrix" , 8.7},
                {"Interstellar" , 8.6},
                {"The Green Mile" , 8.6}
            };
                


void name_sort()
{
    int i,j;
    for(i=0;i<size(movie_vector);i++)
    {
        for(j=0;j<size(movie_vector)-1;j++)
        {
            if(movie_vector[j].name>movie_vector[j+1].name)
            {
                std::swap(movie_vector[j],movie_vector[j+1]);
            }
        }
    }
    for(auto i:movie_vector)
    {
        cout << std::left << std::setw(30) << i.name << std::right << i.rating << "\n";
        // cout<<i.name<<std::setw(45)<<"  -   "<<i.rating<<" \n";
    }
}

void rating_sort()
{
    int i,j;
    for(i=0;i<size(movie_vector);i++)
    {
        for(j=0;j<size(movie_vector)-1;j++)
        {
            if(movie_vector[j].rating<movie_vector[j+1].rating)
            {
                std::swap(movie_vector[j],movie_vector[j+1]);
            }
        }
    }
    for(auto i:movie_vector)
    {
        cout << std::left << std::setw(30) << i.name << std::right << i.rating << "\n";
    }
}

int main()
{
    std::string sort_by;

    while(true)
    {
        cout<<"\nSort By 'Name' or 'Rating' 'Q' for quit\t";
        cin>>sort_by;
        cout<<"\n";
        if(sort_by=="name" || sort_by =="Name")
        {
            name_sort();
        }
        else if(sort_by=="rating" || sort_by=="Rating")
        {
            rating_sort();
        }
        else if(sort_by=="q" || sort_by=="Q")
        {
            break;
        }
        else
        {
            cout<<"\033[103m\033[30m   Invaild Input   \033[0m\n";
        }
    }

    return 0;
}
