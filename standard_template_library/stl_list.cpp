#include <iostream>
#include <list>

int main()
{
    //Declaring a list
    std::list<int> myList {};

    //adding elements to the list
    //inserting new element at the end of the list
    myList.push_back(50);
    myList.push_back(60);
    myList.push_back(70);

    //inserting new element at the beginning of the list
    myList.push_front(10);
    myList.push_front(20);
    myList.push_front(30);

    //printing list elements using enhanced for loop
    for(int x : myList){
        std::cout<<x<<'\n';
    }

    //printing list elements using iterator
    for (std::list<int>::iterator it = myList.begin(); it != myList.end(); it++){
        std::cout<<*it<<'\n';
    }

    //getting the sise of the list
    size_t size {myList.size()};
    std::cout<<size<<'\n';

    //delete list element using erase() at the beginning
    myList.erase(myList.begin());

    //deleting list element using pop_back() or pop_front()
    myList.pop_back();

    std::cout<<"***After removing some elements****\n";
    for (std::list<int>::iterator it = myList.begin(); it != myList.end(); it++){
        std::cout<<*it<<'\n';
    }

    return 0;
}