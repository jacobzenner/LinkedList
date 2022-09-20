
/****************************************************************************
*** NAME : Jacob Zenner                                                   ***
*** CLASS : CSc 300                                                       ***
*** ASSIGNMENT : 2                                                        ***
*** DUE DATE : 9/21/2022                                                  ***
*** INSTRUCTOR : GAMRADT                                                  ***
*** DESCRIPTION : <general english description of the abstract data type> *** 
***                                     <including supporting operations> *** 
****************************************************************************/

#include <iostream>
#include "List.h"
using namespace std;

/****************************************************************************
*** FUNCTION List                                                         ***
*****************************************************************************
*** DESCRIPTION : This function is the constructor for the class          ***
*** INPUT ARGS  : None                                                    ***
*** OUTPUT ARGS : None                                                    ***
*** IN/OUT ARGS : None                                                    ***
*** RETURN      : None                                                    *** 
****************************************************************************/
List::List()
{
   head = nullptr;
   return;
}

/****************************************************************************
*** FUNCTION List                                                         ***
*****************************************************************************
*** DESCRIPTION : This function is the copy constructor for the class     ***
*** INPUT ARGS  : List &                                                  ***
*** OUTPUT ARGS : None                                                    ***
*** IN/OUT ARGS : None                                                    ***
*** RETURN      : None                                                    *** 
****************************************************************************/
List::List(const List &old)
{
	LNodePtr oldNp;
	head = nullptr;
	oldNp = old.head;
	while(oldNp != nullptr)
	{
		insert(oldNp ->element);
		oldNp = oldNp -> next;
	}
   return;
}

/****************************************************************************
*** FUNCTION ~List                                                         ***
*****************************************************************************
*** DESCRIPTION : This function is the destructor for the class which     ***
***  deletes every element in the linked list                             ***
*** INPUT ARGS  : List &                                                  ***
*** OUTPUT ARGS : None                                                    ***
*** IN/OUT ARGS : None                                                    ***
*** RETURN      : None                                                    *** 
****************************************************************************/
List::~List()
{
	LNodePtr nP;
	LNodePtr nextNode;

	nP = head;

	while(nP != nullptr)
	{	
		nextNode = nP->next;
		delete nP;
		nP = nextNode;
      return;
	}	
}


/****************************************************************************
*** FUNCTION insert                                                       ***
*****************************************************************************
*** DESCRIPTION : This function inserts a node into the linked list       ***                                
*** INPUT ARGS  : const LElement num                                      ***
*** OUTPUT ARGS : None                                                    ***
*** IN/OUT ARGS : None                                                    ***
*** RETURN      : None                                                    *** 
****************************************************************************/
void List::insert(const LElement num)
{
   LNodePtr newNode;
   LNodePtr nodePtr;
   LNodePtr previousNode = nullptr;

   newNode = new LNode;
   newNode->element = num;
   
   if (!head)
   {
      head = newNode;
      newNode->next = nullptr;
   }
   else
   {
      nodePtr = head;
      previousNode = nullptr;

      while (nodePtr != nullptr && nodePtr->element < num)
      {
         previousNode = nodePtr;
         nodePtr = nodePtr->next;
      }

      if (previousNode == nullptr)
      {
         head = newNode;
         newNode->next = nodePtr;
      }
      else
      {
         previousNode->next = newNode;
         newNode->next = nodePtr;
      }
   }
   return;
}


/****************************************************************************
*** FUNCTION remove                                                       ***
*****************************************************************************
*** DESCRIPTION : This function removes a node from the linked list       ***                                
*** INPUT ARGS  : const LElement num                                      ***
*** OUTPUT ARGS : None                                                    ***
*** IN/OUT ARGS : None                                                    ***
*** RETURN      : None                                                    *** 
****************************************************************************/
void List::remove(const LElement num)
{
   LNodePtr nodePtr;
   LNodePtr previousNode = nullptr;

   if (!head)
      return;
   
   if (head->element == num)
   {
      nodePtr = head->next;
      delete head;
      head = nodePtr;
   }
   else
   {
      nodePtr = head;

      while (nodePtr != nullptr && nodePtr->element != num)
      {
         previousNode = nodePtr;
         nodePtr = nodePtr->next;
      }

      if (nodePtr)
      {
         previousNode->next = nodePtr->next;
         delete nodePtr;
      }
   }
   return;
}


/****************************************************************************
*** FUNCTION view                                                         ***
*****************************************************************************
*** DESCRIPTION : This function displays all the elements in the linked   ***
*** list                                                                  ***                                
*** INPUT ARGS  : None                                                    ***
*** OUTPUT ARGS : None                                                    ***
*** IN/OUT ARGS : None                                                    ***
*** RETURN      : None                                                    *** 
****************************************************************************/
void List::view()const
{
	LNodePtr nP;
	nP = head;

	while(nP)
	{
		cout << nP->element << endl;
		nP = nP ->next;
	}
   return;
}