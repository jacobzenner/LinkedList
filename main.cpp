/*****************************************************************************
*** NAME : Jacob Zenner                                                    ***
*** CLASS : CSc 300                                                        ***
*** ASSIGNMENT : 2                                                         ***
*** DUE DATE : 9/21/2022                                                   ***
*** INSTRUCTOR : GAMRADT                                                   ***
******************************************************************************
*** DESCRIPTION : This program implements a linked list, and has the       ***
*** functions to insert, remove, or view the linked list.                  ***
*****************************************************************************/


#include <iostream>
#include "List.h"

using namespace std;

int main(){
    List myList;
    myList.insert(20);
    myList.insert(5);
    myList.remove(20);
    myList.view();
    return 0;
}