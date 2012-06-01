struct variant {
	enum TYPE {
		T_BOOL, 
		T_INT, 
		T_DOUBLE
	};
	
	TYPE m_type;
	
	union {
		bool b;
		int i;
		double d;
	};
};
