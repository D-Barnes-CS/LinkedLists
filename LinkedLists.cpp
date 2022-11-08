// LinkedLists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout; using std::endl;
struct nodeType {
    int data;
    nodeType *link;
};


int main()
{
    nodeType *first;
    nodeType d1; d1.data = 5;
    nodeType d2; d2.data = 10;
    nodeType d3; d3.data = 30;

    first = &d1;
    d1.link = &d2;
    d2.link = &d3;
    d3.link = NULL;
    int sum = 0;
    nodeType *current = first;
    /* print each data value
    while (current != NULL) {
        cout << current -> data << endl;
        current = current -> link;
    }
    */

    /* sum
    while (current != NULL) {
        sum += current -> data;
        current = current -> link;
    }
    */

    /* max
    while (current != NULL) {
        if (sum < current -> data) {
            sum = current -> data;
        }
        current = current -> link;
        }*/
    /* min
    sum = current->data;
    while (current != NULL) {
        if (sum > current -> data) {
            sum = current -> data;
        }
        current = current -> link;
        }
    */
    cout << sum;
}

