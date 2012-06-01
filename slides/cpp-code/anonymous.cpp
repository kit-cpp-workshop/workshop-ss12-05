void foo() {
	union /*no-name*/
	{
		int a;
		long b;
	};
	
	a = 23;
	b = 21 * 2;
}

void bar() {
	union MyUnion
	{
		int a;
		long b;
	};
	MyUnion wuppdi;
	
	wuppdi.a = 23;
	wuppdi.b = 21 * 2;
}
