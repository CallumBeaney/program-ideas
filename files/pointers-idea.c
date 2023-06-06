#include <stdio.h>

int main() {
    
    int a[] = {11, 22, 33, 44, 55};
    int (*p)[5] = &a;
    
    
    printf("______ Memory addresses of _____\n");
    printf("p[0]: `%p` \n", *p); // same as &a[0]
    printf("p[1]: `%p` \n", (*p + 1)); // same as &a[1]
    printf("p[2]: `%p` \n", (*p + 2)); // same as &a[2]
    printf("p[3]: `%p` \n", (*p + 3)); // same as &a[3]
    printf("p[4]: `%p` \n", (*p + 4)); // same as &a[4]

    printf("\n_____ array 'a' _____\n");
    printf("a:\t  `%p`\n", a);
    printf("a[0]: `%d` \n", a[0]);
    printf("a[4]: `%d` \n", a[4]);


    printf("\n_____ pointer to array 'p' _____\n");

    printf("p:\t\t  `%p` \n", p); // address of whole array
    printf("*p:\t\t  `%p` \n", *p); // address of first value
    printf("p[0]:\t  `%p` \n", p[0]); // same as above

    printf("\n");

    // Subscript operator [] higher precedence than dereference operator *
    // If you use *p[0], no error, but *p[1] will get error.
    printf("*p[0]:\t  `%d` \n", (*p)[0]); // pointer to value
    printf("**p:\t  `%d` \n", **p); // value
    
    
    printf("\n_____ pointer arithmetic in 'p' _____\n");
    
    printf("*p + 1:\t  `%p` \n", *p + 1);
    printf("p + 1:\t  `%p` \n", p + 1);
    printf("p[1]:\t  `%p` and p[4] is `%p` \n", p[1], (*p + 4));
    
    printf("\n");
    
    printf("*p[1]:\t `%d` as integer, `%p` as address \n", *p[1], *p[1]);
    printf("p[1]:\t `%d` as integer, `%p` as address \n", p[1], p[1]);

    printf("\n");

    printf("(*p)[1]: `%d` \n", (*p)[1]); // value
    printf("**p:\t `%d` \n", **p + 1); // value + 1
    
    return 0;
}
