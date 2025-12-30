// #include <iostream>
// #include <string>

// using namespace std;

// class Node {
//     int data;
//     Node* next;

// public :
//     Node(int val){
//         data = val;
//         next = NULL;
//     }    
// };

// class list {
//     Node* head;
//     Node* tail;

// public:
//     list(){
//         head =NULL;
//         tail = NULL;
//     }    
// };

// int main(){
//     list li();
//     return 0;
// }




// push front in ll
// LL.push_front(val)

// #include <iostream>

// #include <string>

// using namespace std;

// class Node {
// public :    
//     int data;
//     Node* next;


//     Node(int val){
//         data = val;
//         next = NULL;
//     }    
// };

// class List {
//     Node* head;
//     Node* tail;

// public:
//     List(){
//         head =NULL;
//         tail = NULL;
//     }  
    
//     void push_front(int val){
//         Node* newNode = new Node(val); //dynimally create the node 
//         // Node* newNode(val); // static crete node which canot access outside the function created
//         if(head == NULL){
//             head = tail = newNode;
//         } else {
//             newNode->next = head;
//             head = newNode;
//         }
//     }



//     void print() {
//         Node* temp = head;
//         while (temp != NULL) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main(){
//     List li;

//     li.push_front(3);
//     li.push_front(2);
//     li.push_front(1);
//     li.print();
//     return 0;
// }


//push back
//ll.push_back(val)

// #include <iostream>

// #include <string>

// using namespace std;

// class Node {
// public :    
//     int data;
//     Node* next;


//     Node(int val){
//         data = val;
//         next = NULL;
//     }  
    
//     ~Node(){
//         if(next != NULL){
//             delete next;
//             next = NULL;
//         }

//     }
// };

// class List {
//     Node* head;
//     Node* tail;

// public:
//     List(){
//         head =NULL;
//         tail = NULL;
//     } 
    
//     ~List(){
//         if(head != NULL){
//             delete head;
//             head = NULL;
//         }
//     }
    
//     void push_front(int val){
//         Node* newNode = new Node(val); //dynimally create the node 
//         // Node* newNode(val); // static crete node which canot access outside the function created
//         if(head == NULL){
//             head = tail = newNode;
//         } else {
//             newNode->next = head;
//             head = newNode;
//         }
//     }

//     void push_back(int val) {
//         Node* newNode = new Node(val);

//         if(head == NULL) {
//             head = tail = newNode;
//         } else {
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }




//     void print() {
//         Node* temp = head;
//         while (temp != NULL) {
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }


//     void insert(int val , int pos) {
//         Node* newNode = new Node(val);

//         Node* temp = head;
//         for(int i=0; i<pos-1; i++){
//             if(temp == NULL){
//                 cout << "postion is invalid\n";
//                 return;
//             }
//             temp = temp->next;

//         }

//         //temp is now at pos-1 i.e. prev/left

//         newNode->next = temp->next;
//         temp->next = newNode;
//     }

//     //pop front 
//     void pop_front(){
//         if(head == NULL){
//             cout << "ll i empty";
//             return;
//         }
//         Node* temp = head;
//         head = head -> next;
//         temp -> next = NULL;
//         delete temp;
//     }

//     void pop_back(){
//         Node* temp = head;

//         while (temp -> next -> next!= NULL){
//             temp = temp->next;
//         }

//         temp -> next = NULL;
//         delete tail;
//         tail = temp;
//     }

//     int searchItr(int key){
//         Node* temp = head;
//         int idx = 0;

//         while(temp != NULL){
//             if(temp->data == key){
//                 return idx;
//             }
//             temp = temp->next;
//             idx++;
//         }
//         return -1;
//     }
//     int helper(Node* temp, int key){
//         if (temp == NULL){
//             return -1;
//         }
//         if(temp->data == key){
//             return 0;
//         }
//         int idx = helper(temp->next, key);
//         if(idx == -1){
//             return -1;
//         }

//         return idx+1;
//     }

//     int searchRec(int key) {
//         return helper(head , key);
//     }

//     void reverse(){
//         Node* curr = head;
//         Node* prev = NULL;

//         while(curr != NULL){
//             Node * next = curr->next;
//             curr->next = prev;
//             //updation
//             prev = curr;
//             curr = next;

//         }

//         head = prev;
//     }

//     int getsize(){
//         int sz =0;
//         Node* temp = head;

//         while(temp != NULL) {
//             temp = temp->next;
//             sz++;
//         }
//         return sz;
//     }

//     void removeNth(int n) {
//         int size = getsize();
//         Node* prev = head;

//         for(int i =1; i<(size-n); i++){
//             prev = prev->next;
//         }

//         Node* toDel = prev->next;
//         cout<< "going to delete :" << toDel-> data << endl;

//         prev->next = prev -> next -> next;
//     }

//     void findtail(){
//         if(head == NULL) return NULL;
//         Node* temp = head;
//         while(temp->next != NULL){
//             temp = temp->next;
//         }
//         return temp;
//     }


// };



// int main(){
//     List li;

//     li.push_front(3);
//     li.push_front(2);
//     li.push_front(1);
//     li.print();

//     // li.push_back(4);
//     // li.push_back(5);
//     // li.print();

//     // li.insert(100 , 2);
//     // li.print();

//     // li.pop_front();
//     // li.print();
//     // li.pop_back();
//     // li.print();

//     // cout<<li.searchItr(2) << endl;

//     // li.reverse();
//     // li.print();
//     li.removeNth(2);
//     li.print();
//     return 0;
// }




//find cycle in ll 
// #include <iostream>

// #include <string>

// using namespace std;

// class Node {
// public :    
//     int data;
//     Node* next;


//     Node(int val){
//         data = val;
//         next = NULL;
//     }  
    

// };

// class List {
// public:    
//     Node* head;
//     Node* tail;


//     List(){
//         head =NULL;
//         tail = NULL;
//     } 
    

//     void push_front(int val){
//         Node* newNode = new Node(val); //dynimally create the node 
//         // Node* newNode(val); // static crete node which canot access outside the function created
//         if(head == NULL){
//             head = tail = newNode;
//         } else {
//             newNode->next = head;
//             head = newNode;
//         }
//     }

//     void push_back(int val) {
//         Node* newNode = new Node(val);

//         if(head == NULL) {
//             head = tail = newNode;
//         } else {
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }




//     void print() {
//         Node* temp = head;
//         while (temp != NULL) {
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
   
//     bool isCycle(){
//         Node* slow = head;
//         Node* fast = head;

//         while(fast != NULL && fast->next != NULL){
//             slow = slow->next;
//             fast = fast ->next ->next;

//             if(slow == fast){
//                 cout << "cycle hai" <<endl;
//                 return true;
//             }


//         }
//         cout<< "cycle nai hai" <<endl;
//         return false;

//     }

// };


// int main(){
//     List ll;

//     ll.push_front(4);
//     ll.push_front(3);
//     ll.push_front(2);
//     ll.push_front(1);
//     ll.tail->next = ll.head;

//     isCycle();

//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// class List {
// public:
//     Node* head;
//     Node* tail;

//     List() {
//         head = NULL;
//         tail = NULL;
//     }

//     void push_front(int val) {
//         Node* newNode = new Node(val); // dynamically create the node
//         if (head == NULL) {
//             head = tail = newNode;
//         } else {
//             newNode->next = head;
//             head = newNode;
//         }
//     }

//     void push_back(int val) {
//         Node* newNode = new Node(val);
//         if (head == NULL) {
//             head = tail = newNode;
//         } else {
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }

//     void print() {
//         Node* temp = head;
//         while (temp != NULL) {
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         }
//         cout << "NULL" << endl;
//     }

//     // bool isCycle() {
//     //     Node* slow = head;
//     //     Node* fast = head;

//     //     while (fast != NULL && fast->next != NULL) {
//     //         slow = slow->next;
//     //         fast = fast->next->next;

//     //         if (slow == fast) {
//     //             cout << "cycle hai" << endl;
//     //             return true;
//     //         }
//     //     }
//     //     cout << "cycle nai hai" << endl;
//     //     return false;
//     // }


//     void removeCycle() {
//         Node* slow = head;
//         Node* fast = head;
//         bool isCycle = false;

//         // Step 1: Detect cycle using Floyd's algorithm
//         while (fast != NULL && fast->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;

//             if (slow == fast) {
//                 isCycle = true;
//                 break;
//             }
//         }

//         if (!isCycle) {
//             cout << "Cycle doesn't exist" << endl;
//             return;
//         }

//         // Step 2: Find start of cycle
//         slow = head;

//         if (slow == fast) {
//             // special case: cycle starts at head
//             while (fast->next != slow) {
//                 fast = fast->next;
//             }
//             fast->next = NULL;
//         } else {
//             Node* prev = NULL;
//             while (slow != fast) {
//                 prev = fast;
//                 slow = slow->next;
//                 fast = fast->next;
//             }
//             // 'prev' is the node before start of cycle
//             prev->next = NULL;
//         }

//         cout << "Cycle removed" << endl;
//     }

// };

// int main() {
//     List ll;

//     ll.push_front(4);
//     ll.push_front(3);
//     ll.push_front(2);
//     ll.push_front(1);

//     // create cycle manually
//     ll.tail->next = ll.head;

//     // ll.isCycle();
//     ll.removeCycle();
//     ll.print();

//     return 0;
// }



//STL FOR LL

// #include <iostream>
// #include <list>
// #include <iterator>
// using namespace std;

// void printList(list<int> ll){
//     list<int>::iterator itr;
//     for(itr = ll.begin(); itr != ll.end(); itr++){
//         cout << (*itr) << " -> ";
//     }
//     cout << endl;
// }

// int main(){
//     list<int> ll;

//     ll.push_front(2);
//     ll.push_front(1);


//     ll.push_back(3);
//     ll.push_back(4);

//     printList(ll);
//     cout << ll.size() << endl;

//     cout << "head =" << ll.front();
//     cout << "tail =" << ll.back();



//     return 0;
// }




// intersection of two ll

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to find intersection point
Node* getIntersection(Node* headA, Node* headB) {
    if (headA == NULL || headB == NULL) {
        return NULL; // if one list is empty, no intersection
    }

    Node* pA = headA;
    Node* pB = headB;

    // loop until both pointers meet
    while (pA != pB) {
        // move pA
        if (pA == NULL) {
            pA = headB;   // when A reaches end, switch to B
        } else {
            pA = pA->next;
        }

        // move pB
        if (pB == NULL) {
            pB = headA;   // when B reaches end, switch to A
        } else {
            pB = pB->next;
        }
    }

    return pA; // either intersection node or NULL
}

// Helper function to print intersection
void printIntersection(Node* headA, Node* headB) {
    Node* intersect = getIntersection(headA, headB);
    if (intersect != NULL) {
        cout << "Intersection at node with value: " << intersect->data << endl;
    } else {
        cout << "No Intersection" << endl;
    }
}

int main() {
    // Create List A: 1 -> 2 -> 3
    Node* headA = new Node(1);
    headA->next = new Node(2);
    headA->next->next = new Node(3);

    // Create List B: 4 -> 5
    Node* headB = new Node(4);
    headB->next = new Node(5);

    // Create Common part: 6 -> 7 -> 8
    Node* common = new Node(6);
    common->next = new Node(7);
    common->next->next = new Node(8);

    // Link common tail to both lists
    headA->next->next->next = common; // A: 1->2->3->6->7->8
    headB->next->next = common;       // B: 4->5->6->7->8

    // Find intersection
    printIntersection(headA, headB);

    return 0;
}
