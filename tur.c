#include <stdio.h>
#include <stdlib.h>

// Definition of the BST node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new BST node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation error\n");
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a new node into the BST
struct Node* insertNode(struct Node* root, int data) {
    if (root == NULL) {
        root = createNode(data);
        return root;
    }
    if (data < root->data)
        root->left = insertNode(root->left, data);
    else if (data > root->data)
        root->right = insertNode(root->right, data);
    return root;
}

// Function to perform level order traversal
void levelOrderTraversal(struct Node* root) {
    if (root == NULL)
        return;

    // Create a queue to hold nodes
    struct Node** queue = (struct Node**)malloc(sizeof(struct Node*) * 100);
    if (!queue) {
        printf("Memory allocation error\n");
        return;
    }
    int front = 0, rear = 0;

    // Enqueue the root node
    queue[rear++] = root;

    while (front < rear) {
        // Dequeue a node from the queue
        struct Node* current = queue[front++];

        // Process the current node
        printf("%d ", current->data);

        // Enqueue the left child
        if (current->left != NULL)
            queue[rear++] = current->left;

        // Enqueue the right child
        if (current->right != NULL)
            queue[rear++] = current->right;
    }

    // Free the allocated memory for the queue
    free(queue);
}

int main() {
    struct Node* root = NULL;
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 70);
    insertNode(root, NULL);
    insertNode(root, 40);
    insertNode(root, 60);
    insertNode(root, 80);

    printf("Level order traversal of the BST: ");
    levelOrderTraversal(root);

    return 0;
}
