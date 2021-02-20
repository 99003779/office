#include <stdio.h>
#include <stdlib.h>

struct Box 
{
    int unique_ID, length,breadth, height, weight;
    char color[20];
    struct node *next;  
};
struct node *head; 
void add_last();  
void display(); 
void main();
{
    int choice =0;  
    while(choice != 9   
    {  
        printf("\n\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.add at last\n2.display\n3.Exit\n"); 
        printf("\nEnter your choice?\n");         
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            add_last();      
            break;  
            case 2:  
            display();
            break;  
            case 3:  
            exit(0);  
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }  
} 
void add_last()
{
struct Box *ptr, *temp ;
    int unique_ID_, length_,breadth_, height_, weight_;
    char color_[20];
	ptr=(struct Box*)malloc(sizeof(struct Box));
    if(ptr==NULL)
    {
	    printf("Overflow\n")
    }
    else
    {
	    printf("\nEnter values to be added\n")
	    scanf("%d %d %d %d %d %c", &unique_ID_, &length_,&breadth_, &height_,&weight_, &color[20]);
	    ptr->unique_ID=unique_ID_;
	    ptr->length=length_;
	    ptr->breadth=breadth_;
	    ptr->height=height_;
	    ptr->weight=weight_;
	    ptr->color[20];
        if(head==NULL)
        {
	    ptr->next=NULL;
	    head=ptr;
	    printf("\nBox Inserted");
        }
        else
        {
	        temp head;
	        while(temp->!NULL)
	        {
		        temp=temp->next;
	        }
	        temp->next=ptr;
	        ptr->next=NULL;
	        printf('\n Box Inserted);
	    }
    }
}
void display()
{
    struct Box *ptr;
    ptr=head
    if(ptr==NULL)
    {
        printf("Print Empty");
    }
    else
    {
        printf("\nvalues are printing ....\n")
    }
}