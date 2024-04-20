// Linked List
#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    vector<int> data;
    Node *next;
    int index;
    Node() : data{NULL}, index{0}, next{NULL} {}
    Node(vector<int> data, int counter) : data{data}, index{counter}, next{NULL} {}
    void display()
    {
        for (int elements : data)
        {
            cout << elements << " ";
        }
        cout << endl
             << "Index in linkedList: " << index << endl;
        cout << "Next Array of Data is at: " << next << endl;
    }
};

class linked_list
{
    Node *head;
    int counter = 0;
    void insert_Node(vector<int> data)
    {
        Node *newNode = new Node(data, counter);
        counter++;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    bool print()
    {
        if (head == NULL)
        {
            return false;
        }
        else
        {
            Node *temp = head;
            while (temp != NULL)
            {
                temp->display();
                temp = temp->next;
            }
            return true;
        }
    }
    vector<int> get(int position)
    {
        if (head == NULL)
        {
            return {};
        }
        else
        {
            Node *temp = head;
            Node *prev = NULL;
            while (temp != NULL)
            {
                if (temp->index == position)
                {
                    if (prev != NULL)
                    {
                        prev->next = temp->next;
                    }
                    else
                    {
                        // If the target node is the head node
                        head = temp->next;
                    }
                    vector<int> data = temp->data;
                    delete temp;
                    return data;
                }
                prev = temp;
                temp = temp->next;
            }
        }
        return {};
    }
    void sort()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            bubbleSort(temp->data);
            temp = temp->next;
        }
    }
    bool bubbleSort(vector<int>& data)
    {
        int size = 0;
        while (data[size] != '\0')
        {
            size++;
        }
        int i,j;
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size - i; j++)
            {
                if (data[j] > data[j + 1])
                {
                    int temp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = temp;
                }
                
            }
        }
    }

public:
    linked_list() : head{NULL}
    {
        cout << "Default\n";
    }
    linked_list(vector<int> arr)
    {
        linked_list::insert_Node(arr);
        cout << "Parameterized\n";
    }
    void in(vector<int> data)
    {
        insert_Node(data);
        cout << "Inserted Successfully\n";
    }
    void out()
    {
        if (print())
        {
        }
        else
        {
            cout << "Empty Linked List\n";
        }
    }
    vector<int> pop(int position)
    {
        return get(position);
    }
    ~linked_list()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            Node *next = temp->next;
            delete temp;
            temp = next;
        }
        cout << "De-structor\n";
    }
    void sort_elements(){
        sort();
    }
};

int main()
{
    // vector<int> data = {10, 20, 30, 40, 50, '\0'};
    // vector<int> data_2 = {60, 70, 80, 90, 100, '\0'};
    vector<int> data = {121,26,-99,2,45,-5, '\0'};
    vector<int> data_2 = {98,-2,1,5,6,3,45,-8, '\0'};
    linked_list l1;
    l1.in(data);
    l1.in(data_2);
    l1.sort_elements();
    l1.out();
    vector<int> data_3 = l1.pop(1);
    cout << "\nThis is Popped: ";
    for (int nums : data_3)
    {
        cout << nums << " ";
    }
    cout << endl;
    l1.out();

    return 0;
}
// // Linked List
// #include <iostream>
// #include <vector>
// using namespace std;

// struct Node {
//     vector<int> data;
//     Node* next;
//     Node():data{NULL},next{NULL}{}
//     Node(vector<int>& data):next{NULL} {
//         data = data;
//         data[0] = 2;}
//     void display(){
//         for(int elements: data) {
//             cout << elements << " ";
//         }
//         cout << endl << next << endl;
//     }
// };

// class linked_list {

// };

// int main() {
//     vector<int> data = {10,20,30,40,50};
//     Node n1(data);
//     n1.display();
//     for(int elements: data) {
//             cout << elements << " ";
//         }
//     cout << endl;
//     data[1] = 10;
//     for(int elements: data) {
//             cout << elements << " ";
//         }
//     n1.display();

//     return 0;
// }
//
// // for(int elements: data) {
// //     cout << elements << " ";
// // }
// // for(auto i = 0; i < data.size(); i++) {
// //     cout << data[i] << " ";
// // }
// for(auto i = data.begin(); i < data.end(); i++) {
//     cout << *i << " ";
// }
// cout << endl;