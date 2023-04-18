## To-Do Implementations

1. Add classtype to TreeNode


## Field-rules to follow:
1. Self can be used ONLY inside class definitions
2. Possible patterns
    a. SELF . ID            -> Valid inside a class definition
    b. SELF . ID . ID       -> Valid inside a class definition + Invalid ID1.classtype != NULL
    c. ID . ID              -> Invalid if ID1.classtype != NULL
    d. ID . ID . ID         -> Invalid if ID1.classtype != NULL
    e. SELF . ID ( Args )           -> Valid inside a class definition
    f. SELF . ID . ID ( Args )      -> Valid inside a class definition + All IDs are of class-type
    g. ID . ID ( Args )             -> Invalid inside a class definition
    h. ID . ID . ID ( Args )        -> Invalid inside a class definition


BP ReturnAddr ReturnVal ArgN, ArnN-1 ... Arg1