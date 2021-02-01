







		matrix create initvals(int rdim, int cdim, T*initval) {
			int i; 
			matrix result;
			result.row_dim = rdim;
			result.col_dim = cdim;
			result.element = (T**)malloc(rdim*sizeof(T*)); 	
			for (i=0; i<rdim; i++)	
				result.element[i] = (T*)malloc(cdim*sizeof(T));
		
		
		//pointer to the next one/backonee:
		//
		//
		for (i = 0

				
				
				
		}
