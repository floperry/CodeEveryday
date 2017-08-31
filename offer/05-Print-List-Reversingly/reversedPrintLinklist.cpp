#include <iostream>
#include <stack>
#include <vector>

using namespace std;

struct ListNode {
    int value;
    ListNode* next;
};

vector<int> ReversedPrintLinklist(ListNode* head) {
    stack<ListNode*> nodes;
    ListNode* pNode = head;
    while (pNode != NULL) {
        nodes.push(pNode);
        //cout << pNode->value << endl;
        pNode = pNode->next;
    }

    vector<int> result;
    while (!nodes.empty()) {
        pNode = nodes.top();
        result.push_back(pNode->value);
        //cout << pNode->value << endl;
        nodes.pop();
    }
    return result;
}

vector<int> ReversedPrintLinklist_Recursively(ListNode* head) {
    vector<int> result;

    if (head != NULL) {
        if (head->next != NULL) {
            ReversedPrintLinklist_Recursively(head->next);
        }
        result.push_back(head->value);
    }
    return result;
}

void Test_ReversedPrintLinklist() {
    ListNode List[2];
    List[0].value = 1;
    List[0].next = &List[1];
    List[1].value = 2;
    List[1].next = NULL;
    cout << "Before Reverse: ";
    ListNode* pNode = List;
    while (pNode != NULL) {
        cout << pNode->value << " ";
        pNode = pNode->next;
    }
    vector<int> result = ReversedPrintLinklist(List);
    //cout << result.size() << endl;
    cout << endl << "After Reverse: ";
    for (int i=0; i<result.size(); i++) {
        cout << result[i] << ' ';
    }
}

void Test_ReversedPrintLinklist_Recursively() {
    ListNode List[2];
    List[0].value = 1;
    List[0].next = &List[1];
    List[1].value = 2;
    List[1].next = NULL;
    cout << "Before Reverse: ";
    ListNode* pNode = List;
    while (pNode != NULL) {
        cout << pNode->value << " ";
        pNode = pNode->next;
    }
    vector<int> result = ReversedPrintLinklist(List);
    //cout << result.size() << endl;
    cout << endl << "After Reverse: ";
    for (int i=0; i<result.size(); i++) {
        cout << result[i] << ' ';
    }
}

int main() {
    cout << "Test_ReversedPrintLinklist: " << endl;
    Test_ReversedPrintLinklist();
    cout << "Test_ReversedPrintLinklist_Recursively: " << endl;
    Test_ReversedPrintLinklist_Recursively();

    return 0;
}
