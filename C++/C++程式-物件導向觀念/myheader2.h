class Circle{
	int radius;
	public:
		/*
		Circle(){
			radius = 0;
		}
		*/
		//指定呼叫建構子 
		/*
		Circle(int r){
			radius = r;
		}
		*/
		/*這段的意思是如果沒有給定參數預設值直接設定為0，如果寫成這樣那前面的沒有參數的寫法
		 就可以不用寫了 
		 
		 安全性寫法:因為這邊是給初始值的建構子，所以這邊可以先給 radius為0，再去用函式去判斷
		 要不要給值 
		*/ 
		/*
		Circle(int r = 0){
			radius = 0;
			setRadius(r);
		}
		*/
		
		Circle(int radius = 0){
			this->radius = 0;
			setRadius(radius);
		}
		
		
//		void setRadius(int r);
		void setRadius(int radius);
		int getRadius();
};
class Rectangle{
	int length;
	int width;
	public:
		/*
		Rectangle(){
			length = 0;
			width = 0;
		}
		*/
		/*
		Rectangle(int a, int b){
			length = a;
			width = b;
		}
		*/
		/*
		Rectangle(int a = 0, int b = 0){
			length = a;
			width = b;
		}
		*/
		Rectangle(int length = 0, int width = 0){
			this->length = 0;
			this->width = 0;
		}
		
//		void setLength(int l);
		void setLength(int length)
//		void setWidth(int w);
		void setWidth(int width);
		int getLength();
		int getWidth();
};
/*
void Circle::setRadius(int r){
	if(r >= 0 && r <= 100){
		radius = r;
	}
}
*/
void Circle::setRadius(int radius){
	if(radius >= 0 && radius <= 100){
		this ->radius = radius;
	}
}
int Circle::getRadius(){
	return radius;
}
/*
void Rectangle::setLength(int l){
	if(l >= 0 && l <= 100){
		length = l;
	}
} 
*/
void Rectangle::setLength(int length){
	if(length >= 0 && length <= 100){
		this->length = length;
	}
} 
/*
void Rectangle::setWidth(int w){
	if(w >= 0 && w <= 100){
		width = w;
	}	
}
*/
void Rectangle::setWidth(int width){
	if(width >= 0 && width <= 100){
		this->width = width;
	}	
}

int Rectangle::getLength(){
	return length;
}
int Rectangle::getWidth(){
	return width;
}


