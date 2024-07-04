#include<iostream>
using namespace std;

class node
{
    public:

    int value;
    node *next;
    node *prev;

    node()
    {
        next = prev = NULL;
    }
};

class DLL
{
    node *head;

    public:
        DLL()
        {
            head = NULL;
        }

        void insert_at_beg(int x)
        {
            node *temp = new node();
            temp->value = x;

            if(head == NULL)
            {
                head = temp;
            }
            else
            {
               head->prev = temp;
               temp->next = head;
               head = temp;
            }
        }

        void insert_at_End(int x)
        {
            node *temp = new node();
            temp->value = x;

            if(head == NULL)
            {
                head = temp;
            }
            else 
            {
                node *ptr = head;

                while(ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
                ptr->next = temp;
                temp->prev = ptr;
            }
        }

        void insert_at_Middle(int x, int index)
         {
            if(head == NULL)
            {
                cout<<"List is Empty"<<endl;
                return;
            }
               node *temp = new node();
               temp->value = x;

               if(index == 0)
               {
                head->prev = temp;
                temp->next = head;
                head = temp;
               }
            else
            {
                node *ptr = head;
                while(index > 1)
                {
                    ptr = ptr->next;
                    index--;
                }

                temp->next = ptr->next;
                temp->next->prev = temp;
                ptr->next = temp;
                temp->prev = ptr;
            }
         }

         void deletion_from_beg(int x, int index)
         {
             if(head == NULL)
             {
                cout<<"List is empty";
             }
             else{
                cout<<"Deleted element ="<<head->value<<endl;
                node *temp = head;
                head = temp->next;
                head->prev = NULL;
                delete(temp);
             }
         }

         void deletion_at_end()
         {
            if(head == NULL)
            {
                cout<<"List is Empty"<<endl;
            }
            else if(head->next == NULL)
            {
                delete (head);
                head = NULL;
            }
            else{
                node *ptr = head;

                while(ptr->next !=NULL)
                {
                    ptr = ptr->next;
                }
                ptr->prev->next = NULL;
                delete(ptr);
            }
         }

         void deletion_at_middle(int index)
         {
            if(head == NULL)
         {
            cout<<"Linked List is Empty"<<endl;
         }
          else if(index == 0)
        {
            delete(head);
            head = NULL;
        }
        else
        {
            node *ptr = head;
            while(index > 0)
            {
                if(ptr->next == NULL)
                   break;

                ptr = ptr->next;
                index--;
            }
            ptr->prev->next = ptr->next;

         if(ptr->next !=NULL)
            ptr->next->prev = ptr->prev;
            delete(ptr);
        }
     }

     void display()
       {
          if(head == NULL)
          {
            cout<<"Linked List is Empty"<<endl;
          }
          else
          {
                node *temp = head;
                while(temp != NULL)
                {
                    cout<<temp->value<<" <-> ";
                    temp = temp->next;
                }
                cout<<"NULL";
          }
          cout << endl;
       }
};
int main()
{
    DLL l1;
    int x = 1;

    while(x == 1)
    {
    cout<<"1) Insertion at the beginning"<<endl;
    cout<<"2) Insertion in the middle"<<endl;
    cout<<"3) Insertion at the end"<<endl;
    cout<<"4) Dleletion at the begining"<<endl;
    cout<<"5) Dleletion in the middle"<<endl;
    cout<<"6) Deletion in the end"<<endl;
    cout<<"7) Display all the element "<<endl;

    int choice;
    cout<<"Enter yuor choice"<<endl;
    cin>>choice;
    int value,index;
    int x = 1;

        switch(choice)
    {
        case 1 : cout<<"Enter the element "<<endl;
        cin>>value;
        l1.insert_at_beg(value);
        break;

        case 2 : cout<<"Enter the element "<<endl;
        cin>>value;
        cout<<"Enter the index"<<endl;
        cin>>index;
        l1.insert_at_Middle(value, index);
        break;  

        case 3 : cout<<"Enter the element "<<endl;
        cin>>value;
        l1.insert_at_End(value);
        break;

        case 4 :
            l1.deletion_from_beg(value, index); 
            break;

       case 5 : cout<<"Enter the index"<<endl;
                 cin>>index;
                 l1.deletion_at_middle(index);
                 break; 

        case 6 : l1.deletion_at_end();
                 break;  
 
        case 7: l1.display();
                 break;

        default :
        cout<<"Invalid choice"<<endl;

    }
        cout<<"Do you want to continue (yes = 1) and (No = 0)"<<endl;
        cin>>x;
    }
   return 0;
}