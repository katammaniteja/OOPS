### Inheritance 
- It is a process of acquiring features of an existing class into a new class
- It is used for achieving reusability
- features of base class will be available in derived class
### Constructors in inheritance 
- Constructors of base class is executed first then the constructor of derived class is executed.
- By default, non-parameterised constructor of base class is executed.
- parameterised constructor of base class must be called from derived class constructor
### Access Specifiers 
- Private - Accessible only inside a class
- Protected - Accessible inside a class and inside derived classes
- Public - accessible inside class, inside derived class and upon object
### Ways of Inheritance:
- If a child class is inheriting from the parent class then the private members of parent class will not accessable by child class.
- If a child is publicly inheriting from parent class then protected and public members of parent class will inherit to protected and public members of child class respectively.
- If a child class is protectively inheriting from parent class then protected and public members of parent class will go to protected of child class.
- If a child class is privately inheriting from parent class then protected and public members of parent class will go to private of child class.
