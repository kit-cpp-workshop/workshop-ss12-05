void foo() {
	union {
		int a;
		long b;
	};
	
	a = 23;
	b = 21 * 2;
}

void bar() {
	union {
		int a;
		long b;
	} wuppdi;
	
	wuppdi.a = 23;
	wuppdi.b = 21 * 2;
}
