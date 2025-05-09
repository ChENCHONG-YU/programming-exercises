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
		//體積計算 
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
		1.當我們看到這種型別(Circle &)的時候 ，不是為了要宣告變數來等於 copy4，而是這個
		copy4代表一個參考，可以直接讓他當參數去呼叫另外一個需要參考當參數的funtion，
		2.我們看到這種型別(Circle &)的時候 ，意思就是funtion的呼叫敘述本身就是那個參考，
		可以當參數去呼叫另外一個funtion 
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
