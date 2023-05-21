//线性表的链式表达：链表

#include<bits/stdc++.h>
using namespace std;
using ElemType=char;
struct Node{
    ElemType data;
    Node *next;
};
class List{
    Node *head;
    public:
    List()
    {
        head=new Node;
        head->next=nullptr;
    }
    bool insert(const int k,const ElemType &e);
    bool erase(const int k);
    bool push_back(const ElemType &e);
    bool push_front(const ElemType &e);
    bool pop_back();
    bool pop_front();
    bool get(const int i,ElemType &e)const;
    bool set (const int i,const ElemType );
    int size()const;
    void print()const;
};
bool List::push_front(const ElemType &e)
{
    Node *p=new Node;
    p->data=e;
    p->next=head->next;
    head->next=p;
    return true;
}
bool List::push_back(const ElemType &e)
{
    Node *p=head;
    while(p->next!=nullptr)
    {
        p=p->next;
    }
    Node *q=new Node;
    q->data=e;
    q->next=nullptr;
    p->next=q;
    return true;
}
bool List::pop_front()
{
    if(head->next==nullptr)
    {
        return false;
    }
    Node *p=head->next;
    head->next=p->next;
    delete p;
    return true;
}
bool List::pop_back()
{
    if(head->next==nullptr)
    {
        return false;
    }
    Node *p=head;
    while(p->next->next!=nullptr)
    {
        p=p->next;
    }
    Node *q=p->next;
    p->next=nullptr;
    delete q;
    return true;
}
bool List::insert(const int k,const ElemType &e)
{
    if(k<0)
    {
        return false;
    }
    Node *p=head;
    for(int i=0;i<k;i++)
    {
        if(p->next==nullptr)
        {
            return false;
        }
        p=p->next;
    }
    Node *q=new Node;
    q->data=e;
    q->next=p->next;
    p->next=q;
    return true;
}
bool List::erase(const int k)
{
    if(k<0)
    {
        return false;
    }
    Node *p=head;
    for(int i=0;i<k;i++)
    {
        if(p->next==nullptr)
        {
            return false;
        }
        p=p->next;
    }
    if(p->next==nullptr)
    {
        return false;
    }
    Node *q=p->next;
    p->next=q->next;
    delete q;
    return true;
}
bool List::get(const int i,ElemType &e)const
{
    if(i<0)
    {
        return false;
    }
    Node *p=head;
    for(int j=0;j<=i;j++)
    {
        if(p->next==nullptr)
        {
            return false;
        }
        p=p->next;
    }
    e=p->data;
    return true;
}
bool List::set(const int i,const ElemType e)
{
    if(i<0)
    {
        return false;
    }
    Node *p=head;
    for(int j=0;j<=i;j++)
    {
        if(p->next==nullptr)
        {
            return false;
        }
        p=p->next;
    }
    p->data=e;
    return true;
}
int List::size()const
{
    int cnt=0;
    Node *p=head;
    while(p->next!=nullptr)
    {
        cnt++;
        p=p->next;
    }
    return cnt;
}
void print(const List &list)
{
    ElemType e;
    for(int i=0;i<list.size();i++)
    {
        list.get(i,e);
        cout<<e<<"\t";
    }
    cout<<endl;
}
int main(){
    List list;
    list.push_back('a');
    list.push_back('b');
    list.push_back('c');
    print(list);
    list.push_front('d');
    list.insert(1,'e');
    print(list);
    ElemType e;
    list.get(1,e);
    cout<<e<<endl;
    list.set(1,'f');
    print (list);
    list.erase(1);
    print(list);
    list.pop_front();
    print(list);
    return 0;
}
