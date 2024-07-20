#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
    string name;
    string author;
    short year;

public:
    
    Book()
    {
        
        name = "";
        author = "";
        year = 0;
    }

   
    string get_name()
    {
        return name;
    }

    string get_author()
    {
        return author;
    }

    short get_year()
    {
        return year;
    }

 
    void set_name(string name)
    {
        this->name = name;
    }

    void set_author(string author)
    {
        this->author = author;
    }

    void set_year(short year)
    {
        this->year = year;
    }

 
    void display_info() const
    {
        cout << "Название: " << name << ", Автор: " << author << ", Год: " << year << endl;
    }
};

int main()
{
   
    Book book;

    
    book.set_name("Война и мир");
    book.set_author("Лев Толстой");
    book.set_year(1869);

   
    book.display_info();

    
    book.set_name("Анна Каренина");
    book.set_author("Лев Толстой");
    book.set_year(1877);

     
    book.display_info();

    return 0;
}
