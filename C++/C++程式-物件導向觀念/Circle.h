class Circle{
	private:
		double girth;
		double area;
	    double volume;
	public:
		int radius;
	    int height;
	    double getGirth(){
	    	return radius * 2 * 3.14159;
		};
		double getArea(){
			return radius * radius * 3.14159;
		};
		//��n�p�� 
		double getVolume(){
			return getArea() * height;
		};
		
		int compare(Circle c){
			int i = 0;
			if(radius > c.radius){
				i =  1;
			}else if(radius < c.radius){
				i = -1;
			}
			return i;
			
		}
		int compare2(Circle * pc){
			int i = 0;
			if(radius > pc->radius){
				i =  1;
			}else if(radius < pc->radius){
				i = -1;
			}
			return i;
			
		}
		int compare3(Circle & rc){
			int i = 0;
			if(radius > rc.radius){
				i =  1;
			}else if(radius < rc.radius){
				i = -1;
			}
			return i;
			
		}
		int compare4(Circle *& rpc){
			int i = 0;
			if(radius > rpc->radius){
				i =  1;
			}else if(radius < rpc->radius){
				i = -1;
			}
			return i;
			
		}
		Circle copy(){
			Circle c;
			c.radius = radius;
			return c;
			
		}
		void copy2(Circle * pc){
			pc->radius = radius;
		}
		Circle * copy3(Circle * pc){
			pc -> radius = radius;
			return pc;
		}
		
		/*
		1.��ڭ̬ݨ�o�ث��O(Circle &)���ɭ� �A���O���F�n�ŧi�ܼƨӵ��� copy4�A�ӬO�o��
		copy4�N��@�ӰѦҡA�i�H�������L��Ѽƥh�I�s�t�~�@�ӻݭn�Ѧҷ�Ѽƪ�funtion�A
		2.�ڭ̬ݨ�o�ث��O(Circle &)���ɭ� �A�N��N�Ofuntion���I�s�ԭz�����N�O���ӰѦҡA
		�i�H��Ѽƥh�I�s�t�~�@��funtion 
		*/
		Circle & copy4(Circle & c){
		    c.radius = radius;
			return c;
		}
		Circle *& copy5(Circle *& rpc){
			rpc -> radius = radius;
			return rpc;
		}
};
