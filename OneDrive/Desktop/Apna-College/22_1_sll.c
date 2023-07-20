#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct sllNodeReference {
	int element;
	struct sllNodeReference* nextNode;
}Node;

Node* headNode;

int noOfNodes = 0;

Node* createNewNode( int val ) {
    Node* newNode = (Node*) malloc( sizeof( Node ) );
    newNode -> element = val;
    newNode -> nextNode = NULL;
    
    return newNode;
}

void insertAtBeginning( int val ) {
    Node* newNode = createNewNode( val );
    
    if( newNode == NULL ) {
        printf("The newnode did not get the memory allocation\n");
        return;
    }
    
    if( headNode == NULL ) {
        headNode = newNode;
    } else {
        newNode -> nextNode = headNode;
        headNode = newNode;
    }
    
    printf("The newnode is inserted at the beginning of the Singly linked list with element %d\n", val);
    noOfNodes++;
}

void insertAtRandomPos( int val, int indexVal ) {
    Node* newNode = createNewNode( val );
    
    if( newNode == NULL ) {
        printf("The newnode did not get the memory allocation\n");
        return;
    }
    
    if( indexVal > 0 && indexVal < noOfNodes ) {
        Node* tempNode = headNode;
        for (int i = 0; i < indexVal - 1; i++) {
            tempNode = tempNode -> nextNode;
        }
        
        newNode -> nextNode = tempNode -> nextNode;
        tempNode -> nextNode = newNode;
        noOfNodes++;
        
        printf("The newnode is inserted at the given position of the Singly linked list with element %d and at position %d\n", val, indexVal + 1);
    } else {
        printf("entered an invalid index value\n");
    }
    
}

void insertAtEnd( int val ) {
    Node* newNode = createNewNode( val );
    
    if( newNode == NULL ) {
        printf("The newnode did not get the memory allocation\n");
        return;
    }
    
    if( headNode == NULL ) {
        headNode = newNode;
    } else {
        Node* tempNode = headNode;
        
        while( tempNode -> nextNode != NULL ) {
            tempNode = tempNode -> nextNode;
        }
        
        tempNode -> nextNode = newNode;
    }
    
    noOfNodes++;
    printf("The newNode is inserted at the end of the Singly linked list with element %d\n", val);
    return;
}

int deleteAtBeginning( ) {
    
    int delVal;
    Node* tempNode;
    
    if( headNode == NULL ) {
        printf("There are no elements in the Singly linked list\n");
        return -1;
    } else {
        tempNode = headNode;
        headNode = tempNode -> nextNode;
        delVal = tempNode -> element;
        
        free( tempNode );
        noOfNodes--;
        printf("The node is deleted at the beginning of the Singly linked list with element %d\n", delVal);
        
        return delVal;
    }

}

int deleteAtRamdomPos( int indexVal ) {
    
    int delVal;
    
    if( headNode == NULL ) {
        printf("There are no elements in the Singly linked list\n");
        return -1;
    } else {
       Node* currentNode = headNode;
       Node* secondNode = headNode -> nextNode;
       
       for (int i = 0; i < indexVal - 1 && secondNode != NULL; i++) {
           currentNode = secondNode;
           secondNode = secondNode -> nextNode;
       }
       
       currentNode -> nextNode = secondNode -> nextNode;
       delVal = secondNode -> element;
       free( secondNode );
       noOfNodes--;
       printf("The node is deleted in the Singly linked list with element %d at position %d\n", delVal, indexVal + 1);
        
       return delVal;
    }

}

int deleteAtEnd( ) {
    int delVal;
    
    if( headNode == NULL ) {
        printf("There are no elements in the Singly linked list\n");
        return -1;
    } else if( headNode -> nextNode == NULL ) {
        delVal = headNode -> element;
        
        free( headNode );
        noOfNodes--;
        printf("The node is deleted at the end of the Singly linked list with element %d\n", delVal);
        
        return delVal;
    } else {
       Node* currentNode = headNode;
       Node* secondNode = headNode -> nextNode;
       
       while( secondNode -> nextNode != NULL ) {
           currentNode = secondNode;
           secondNode = secondNode -> nextNode;
       }
       
       currentNode -> nextNode = NULL;
       delVal = secondNode -> element;
       free( secondNode );
       
       noOfNodes--;
       printf("The node is deleted at end of the Singly linked list with element %d\n", delVal);
       
       return delVal;
    }

}

void printTheSll() {
    Node* tempNode = headNode;
     
    if( tempNode == NULL ) {
        printf("There are no elements in the Singly linked list, please enter the elements\n");
        return;
    } else {
        int i = 0;
        printf("\nThe elements of the Singly linked list :\n");
        while( tempNode != NULL ) {
            printf("The %dth element : %d\n", i, tempNode -> element);
            tempNode = tempNode -> nextNode;
            i++;
        }
    }
}

int main() {
    insertAtBeginning(1);
    insertAtBeginning(2);
    insertAtBeginning(3);
    insertAtBeginning(4);
    insertAtBeginning(5);
    
    insertAtRandomPos(7, 2);
    
    insertAtEnd(8);
    
    printTheSll();
    
    deleteAtBeginning();
    deleteAtRamdomPos(2);
    deleteAtEnd();
    
    printTheSll();
    
}












