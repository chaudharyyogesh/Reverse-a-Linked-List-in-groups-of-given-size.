struct node *reverse (struct node *head, int k)
{ 
    // Complete this method
    node *temp,*left,*right,*start,*restart ;
    left=temp=start=restart=head;
    right=temp->next;
    int i=1,flag=0,count=0,elecount=1;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    if(k==count)
    {
        struct node *temp,*left,*right;
    if(head->next==NULL)
        return head;
    
    temp=left=head;
    right=temp->next;
    left->next=NULL;
    temp=right;
    while(temp->next!=NULL)
    {
        right=temp->next;
        temp->next=left;
        left=temp;
        temp=right;
        
    }
    temp->next=left;
    head=temp;
    return head;
    }
    count=0;
    temp=right;
    while(i<k&&temp!=NULL)
    {
        right=temp->next;
        temp->next=left;
        left=temp;
        temp=right;
        i++;
        
        if(i==k)
        {
            
            count++;
            i=1;
            if(flag==0)
            {
                head=left;
                flag=1;
            }
             if(count>1)
            {
                start->next=left;
                start=restart;
                start->next=NULL;
            }
            
            restart=temp;
            if(temp!=NULL)
            {
                right=temp->next;
                left=temp;
                temp=right;
            }
            
           
            
            
        }
    }
    if(flag==0)
    {
        head=left;
    }
    if(restart!=NULL&&k!=1)
    {start->next=left;
    restart->next=NULL;
    }
    return head;
    
}
