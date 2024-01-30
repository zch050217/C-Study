#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int coeff;
    int exp;
    struct Node* next;
} Node;

Node* create_node(int coeff, int exp) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->coeff = coeff;
    node->exp = exp;
    node->next = NULL;
    return node;
}

Node* add_polynomials(Node* poly1, Node* poly2) {
    Node* result = NULL;
    Node** current = &result;
    while (poly1 && poly2) {
        if (poly1->exp == poly2->exp) {
            *current = create_node(poly1->coeff + poly2->coeff, poly1->exp);
            poly1 = poly1->next;
            poly2 = poly2->next;
        } else if (poly1->exp < poly2->exp) {
            *current = create_node(poly1->coeff, poly1->exp);
            poly1 = poly1->next;
        } else {
            *current = create_node(poly2->coeff, poly2->exp);
            poly2 = poly2->next;
        }
        current = &(*current)->next;
    }
    while (poly1) {
        *current = create_node(poly1->coeff, poly1->exp);
        poly1 = poly1->next;
        current = &(*current)->next;
    }
    while (poly2) {
        *current = create_node(poly2->coeff, poly2->exp);
        poly2 = poly2->next;
        current = &(*current)->next;
    }
    return result;
}

void print_polynomial(Node* poly) {
    while (poly) {
        printf("%d %d\n", poly->coeff, poly->exp);
        poly = poly->next;
    }
}

int main() {
    int n, m;
    scanf("%d", &n);
    Node* poly1 = NULL;
    Node** current = &poly1;
    for (int i = 0; i < n; i++) {
        int coeff, exp;
        scanf("%d %d", &coeff, &exp);
        *current = create_node(coeff, exp);
        current = &(*current)->next;
    }
    scanf("%d", &m);
    Node* poly2 = NULL;
    current = &poly2;
    for (int i = 0; i < m; i++) {
        int coeff, exp;
        scanf("%d %d", &coeff, &exp);
        *current = create_node(coeff, exp);
        current = &(*current)->next;
    }
    Node* result = add_polynomials(poly1, poly2);
    print_polynomial(result);
    return 0;
}