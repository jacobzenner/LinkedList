/****************************************************************************
*** NAME : Jacob Zenner                                                   ***
*** CLASS : CSc 300                                                       ***
*** ASSIGNMENT : 2                                                        ***
*** DUE DATE : 9/21/2022                                                  ***
*** INSTRUCTOR : GAMRADT                                                  ***
*** DESCRIPTION : <general english description of the abstract data type> *** 
***                                     <including supporting operations> *** 
****************************************************************************/

#ifndef _LIST_H 
#define _LIST_H
typedef int LElement;

class List { 
    public:
        /****************************************************************************
        *** FUNCTION List                                                         ***
        *****************************************************************************
        *** DESCRIPTION : This function is the constructor for the class          ***
        *** INPUT ARGS  : None                                                    ***
        *** OUTPUT ARGS : None                                                    ***
        *** IN/OUT ARGS : None                                                    ***
        *** RETURN      : None                                                    *** 
        ****************************************************************************/
        List();
        
        /****************************************************************************
        *** FUNCTION List                                                         ***
        *****************************************************************************
        *** DESCRIPTION : This function is the copy constructor for the class     ***
        *** INPUT ARGS  : List &                                                  ***
        *** OUTPUT ARGS : None                                                    ***
        *** IN/OUT ARGS : None                                                    ***
        *** RETURN      : None                                                    *** 
        ****************************************************************************/
        List(const List &);

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
        ~List();

        /****************************************************************************
        *** FUNCTION insert                                                       ***
        *****************************************************************************
        *** DESCRIPTION : This function inserts a node into the linked list       ***                                
        *** INPUT ARGS  : const LElement                                          ***
        *** OUTPUT ARGS : None                                                    ***
        *** IN/OUT ARGS : None                                                    ***
        *** RETURN      : None                                                    *** 
        ****************************************************************************/
        void insert(const LElement);

        /****************************************************************************
        *** FUNCTION remove                                                       ***
        *****************************************************************************
        *** DESCRIPTION : This function removes a node from the linked list       ***                                
        *** INPUT ARGS  : const LElement                                          ***
        *** OUTPUT ARGS : None                                                    ***
        *** IN/OUT ARGS : None                                                    ***
        *** RETURN      : None                                                    *** 
        ****************************************************************************/
        void remove(const LElement);

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
        void view()const;

    private:
    struct LNode;
    typedef LNode *LNodePtr;
    struct LNode{
        LElement element;
        LNodePtr next;
    };
    LNodePtr head;
}; 

#endif

