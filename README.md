# CPP04

## Topics: 
### Polymorphism
https://www.youtube.com/watch?v=-FUhG98hdLI
- Use: Solves the problem of code duplication. 
- Member functions of base class are called by default.(static polymorphism/binding)
- Declaring an object as a pointer of a type of derived class, but calling constructor different to the class of the pointer.

#### Static polymorphism / binding 
e.g. function overloading, operator overloading, templates/generics

#### Dynamic polymorphism / binding
i.e. doing virtual functions, method overwriting 

#### Subtyping polymorphism
- main idea: "A subtype can substitute for its parent type"
- If virtual keyword is added before function declaration, the default method can be replaced by the inheriting object. (Dynamic polymorphism / binding). This has a performance cost, because program must decide this at runtime. 
e.g. if **Dog** is a subtype of **Animal**, you can use **Dog** anywhere an **Animal** is expected

#### Virtual function
- Is added before function declaration when you expect derived classes to override a method.
- Important when using pointers or references to the base class.


### Shallow & deep copies
https://www.youtube.com/watch?v=Ldv5i14UhTA
- deep copies for dynamically allocated data
- for classes that have pointer attributes, copy constructor has to reassign the pointer
    
### Abstract and Pure virtual classes
 
#### Interface classes 
- A class that only has abstract behaviours and doesnt have attributes

#### Abstract classes 
https://www.youtube.com/watch?v=wE0_F4LpGVc 
- Virtual enables dynamic binding at runtime(flexibility to be called by different classes)
- can abstract classes have the default methods

## Other Topics
- Runtime / Compile time