#include <iostream>
using namespace std;

struct myData
{
    string name = "";
    int red = 0;
    int green = 0;
    int blue = 0;
    myData* next = nullptr;

     myData (string n = "", int r = 0, int g = 0, int b = 0) 
         : 
         name (n), red (r), green (g), blue (b), next (NULL) 
     { }
};

void push(myData * & list, myData *t) {
    t->next = nullptr;
    if (list==nullptr) {
        list = t;
    }
    else {
        myData* u = list;
        while (u->next != nullptr) u = u->next;
        u->next = t;
    }
}

void myPrint(myData *list)
{
    cout << "Zacatek seznamu" << endl;
    for (myData* tmp = list; tmp != nullptr; tmp = tmp->next) {
        cout << "Name: " << tmp->name;
        cout << " RGB: " << tmp->red << " " << tmp->green << " " << tmp->blue << endl;
    }
    cout << "End of the list" << endl << endl;
}

myData* main_list = nullptr;
myData* another_list = nullptr;


int x = 10;
int y = 20;

void uswap(int * a, int * b)
{
    cout << "a= " << *a << ", b= " << *b << endl;
    int t = *a;
    *a = *b;
    *b = t;
    cout << "a= " << *a << ", b= " << *b << endl;
}

void swap(int & a, int & b)
{
    cout << "a= " << a << ", b= " << b << endl;
    int t = a;
    a = b;
    b = t;
    cout << "a= " << a << ", b= " << b << endl;
}

int main()
{
    cout << "x= " << x << ", y= " << y << endl;
    swap(x, y);
    cout << "x= " << x << ", y= " << y << endl;

    /*
    push(main_list, new myData("cervena",255,0,0));
    // push(main_list, new myData("zelena", 0, 255, 0));
    myPrint(main_list);
    myPrint(another_list);
    */
    cout << "O.K." << endl;
}

#if 0
myList* createList()
{
    myList* list = new myList;
    list->first = nullptr;
    return list;
}
#endif 

#if 0
myList* createList()
{
    myList *l = new (nothrow) myList;
    if (!l) {
        return nullptr;
    }

    myData* tmp = new (nothrow) myData;
    if (!tmp) {
        return nullptr;
    }

    l->first = tmp;
    l->first->next = nullptr;
    return l;
}
#endif 

