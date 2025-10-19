#include "include/stack.h"
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

bool is_same_stack(stack * s1, stack * s2){
    node * p1 = s1->head;
    node * p2 = s2->head;

    while (p1 != NULL && p1 != NULL && p1->data == p2->data){
        p1 = p1->next;
        p2 = p2->next;
    }

    if (p1 == NULL && p2 == NULL){
        return true;
    }

    return false;

}  

bool test_stack(){
    // initialize must be empty

    stack * s = (stack *) malloc(sizeof(stack));
    initialize(s);
    assert(empty(s));

    stack * control_stack = (stack *) malloc(sizeof(stack));
    initialize(control_stack);

    push(1, s);
    push(1, control_stack);

    assert((is_same_stack(s, control_stack))); // er de ens

    // push -> pop -> must be the same 

    push(1, s);
    pop(s);

    assert(is_same_stack(s, control_stack));

    // pop -> push must be the same

    int k = pop(s);
    push(k, s);

    assert(is_same_stack(s, control_stack));

    printf("Test faerdig, ingen fejl");

}


int main(){
    test_stack();
}
