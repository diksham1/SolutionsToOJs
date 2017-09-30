// Write your MyBook class here
class MyBook : public Book{
    int price;
    //   Class Constructor
    //   
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    // Write your constructor here
    public:
    MyBook(string title, string author, int price) : Book(title, author){
        this->price = price;
    }
    
    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here
    void display(){
        cout << "Title: " << this->title;
        cout << "\nAuthor: " << this->author;
        cout << "\nPrice: " << this->price;
    }
    
    
// End class
};
