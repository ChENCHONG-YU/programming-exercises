struct Circle{
    int radius;
    int height;
    double girth;
    double area;
    double volume;
};

double getGirth(struct Circle c);
double getArea(struct Circle c);
double getVolume(struct Circle c);

//使用指標的方式 
void setRadius(struct Circle * c, int radius);
void setHeight(struct Circle * c, int height);
void setGirth(struct Circle * c);
void setArea(struct Circle * c);
void setVolume(struct Circle * c);
void setAllValue(struct Circle * c, int radius, int height);
//int compareCircle(struct Circle c1, struct Circle c2); 
//int compareCircle(struct Circle * c1, struct Circle * c2); 
int compareCircle(struct Circle & c1, struct Circle & c2); 

//copy函式第一種寫法 
struct Circle copyCircle(struct Circle c1);

//copy函式第二種寫法(指標) 
void copyCircle(struct Circle *c1,struct Circle *c2);

//copy函式第二之二種寫法
//struct Circle * copyCircle(struct Circle *c1,struct Circle *c2);

//copy函式第三種寫法(參考)
struct Circle & copyCircle(struct Circle &c1,struct Circle &c2);


//周長計算 
double getGirth(struct Circle c){
	return c.radius * 2 * 3.14159;
};
//圓面積計算 
double getArea(struct Circle c){
	return c.radius * c.radius * 3.14159;
};
//體積計算 
double getVolume(struct Circle c){
	return c.area * c.height;
};

//使用指標的方式 

//設定半徑 
void setRadius(struct Circle * c, int radius){
	if(c == NULL){
		return;
	}
	if(radius >= 1 && radius <= 10000){
		c->radius = radius;
	}else{
		c->radius = 1;
	}
	setGirth(c);   //呼叫計算周長函式 
	setArea(c);    //呼叫計算面積函式 
};
//設定高度 
void setHeight(struct Circle * c, int height){
	if(c == NULL){
		return;
	}
	if(height >= 1 && height <= 10000){
		c -> height = height;
	}else{
		c -> height = 1;
	}
	setVolume(c);
};
void setGirth(struct Circle * c){
	if(c == NULL){
		return;
	}
	c -> girth = c -> radius * 2 * 3.14159;
};
void setArea(struct Circle * c){
	if(c == NULL){
		return;
	}
	c -> area = (c -> radius) * (c -> radius) * 3.14159;
}; 
void setVolume(struct Circle * c){
	if(c == NULL){
		return;
	}
	c -> volume = (c -> area) * (c -> height); 
};
void setAllValue(struct Circle * c, int radius, int height){
	if(c == NULL){
		return;
	}
	 setRadius(c,radius);
	 setHeight(c,height);
};

//int compareCircle(struct Circle c1, struct Circle c2){
//	if(c1.radius > c2.radius){
//		return 1;
//	}else if(c1.radius < c2.radius){
//		return -1;
//	}else{
//		if(c1.height > c2.height){
//			return 1;
//		}else if(c1.height < c2.height){
//			return -1;
//		}else{
//			return 0;
//		}
//	}
//}
//由於指標是可以給NULL值的，但是如果要比大小就不能給NULL，所以這個範例使用指標是不太好的
//int compareCircle(struct Circle * c1, struct Circle * c2){
//	if(c1->radius > c2->radius){
//		return 1;
//	}else if(c1->radius < c2->radius){
//		return -1;
//	}else{
//		if(c1->height > c2->height){
//			return 1;
//		}else if(c1->height < c2->height){
//			return -1;
//		}else{
//			return 0;
//		}
//	}
//} 
//所以這個範例就會使用參考的方式進行(參考是不能給NULL值的) 
/*如果以這個標頭檔來看有兩個函式:
  int compareCircle(struct Circle c1, struct Circle c2); 
  int compareCircle(struct Circle & c1, struct Circle & c2);
  如果直接執行下去系統會分不清楚我要執行哪一個以及為了讓使用者端不要輸入空值 
  所以這邊會把第一種函式與第二種加入指標的函式給註解掉 

*/
int compareCircle(struct Circle & c1, struct Circle & c2){
	if(c1.radius > c2.radius){
		return 1;
	}else if(c1.radius < c2.radius){
		return -1;
	}else{
		if(c1.height > c2.height){
			return 1;
		}else if(c1.height < c2.height){
			return -1;
		}else{
			return 0;
		}
	}
}

struct Circle copyCircle(struct Circle c1){
	struct Circle c2;
	setAllValue(&c2, c1.radius, c1.height);
	return c2;
}

void copyCircle(struct Circle * c1,struct Circle * c2){
	setAllValue(c2, c1->radius, c1->height);
}

//struct Circle * copyCircle(struct Circle * c1,struct Circle * c2){
//	setAllValue(c2, c1->radius, c1->height);
//	return c2;
//}

struct Circle & copyCircle(struct Circle &c1,struct Circle &c2){
	setAllValue(&c2, c1.radius, c1.height);
	return c2;
} 

