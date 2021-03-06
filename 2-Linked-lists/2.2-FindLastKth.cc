#include<cstdio>

typedef struct linklist
{
  int val;
  linklist* next;
  linklist():val(0), next(NULL){}
  linklist(int num):val(num), next(NULL){}
}LinkList;

//Assume K is no bigger than the lenght of the linklist, otherwise return head's val
int FindLastKth(LinkList* head, int K)
{
  if(!head)
    return -1;
  LinkList *cur = head, *find = head;
  while(K and cur)
  {
    --K;
    cur = cur->next;
  }
  if(K)
    return head->val;
  while(cur)
  {
    find = find->next;
    cur = cur->next;
  }
  return find->val;
}

int main()
{
  return 0;
}
