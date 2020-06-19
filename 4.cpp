#include <iostream>
using namespace std;

    struct DoubleList {
        int data;
        DoubleList *next;
        DoubleList *prev;
	};
    DoubleList *head;
    void AddList(int value, int position) {
        DoubleList *node=new DoubleList;
        node->data=value;
        if (head==NULL) {
            node->next=node;
            node->prev=node;
            head=node;
        } 
		else {
            DoubleList *p=head;
            for(int i=position; i>1; i--) p=p->next;
            p->prev->next=node;
            node->prev=p->prev;
            node->next=p;
            p->prev=node;
        }
        cout<<"\nElement added";
    }
    void PrintList() {
        if (head == NULL) 
		cout << "\nList is empty";
        else{
            DoubleList *a=head;
            cout << "\nElements of the list: ";
            do{
                cout << a->data << " ";
                a = a->next;
            } while(a!=head); 
			cout << endl;
        }
    }
	int main() {
	    int value, position, x;
	    do{
	        cout << "1. Add element" << endl;
	        cout << "2. Show list" << endl;
	        cout << "0. Exit" << endl;
	        cout << "\nNumber of operation: "; 
			cin >> x;
	        switch (x){
	            case 1:
	                cout << "Value: "; 
					cin >> value;
	                cout << "Position: "; 
					cin >> position;
	                AddList(value, position); 
				break;
	            case 2: PrintList();
				break;
	        }
	    } while (x!=0);
	    return 0;
	}
	
	
