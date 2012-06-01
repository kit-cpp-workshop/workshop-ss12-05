enum MyEnum { MY_CONST_0, A, B, C };

MyEnum myVar;

myVar = A;
if(B == myVar) { /* ... */ }

enum MySecEnum {
	W = 1, X,
	Y = 0, Z
};

short s = A;               // FEHLER!
int i = A;                 // OK
long l = A;                // OK, int -> long conversion
if(42 == A) { /* ... */ }  // OK, 42 is int

MyEnum foo;
foo = (MyEnum)2;   // OK, 2 == B
foo = (MyEnum)42;  // foo now has an unspecified value!
foo = (MyEnum)Y;   // OK, Y == MY_CONST_0

void myFunc(MyEnum);
void myFunc(MySecEnum);
void myFunc(int);

myFunc(A);
myFunc(X);
myFunc((MyEnum)42);
