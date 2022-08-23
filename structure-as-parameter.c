struct Rec{
    int length;
    int breadth;
};

typedef struct Rec Rectangle;

void initialize(Rectangle *r, int l, int b){
    r->length = l;
    r->breadth = b;
}

int area(Rectangle *r){
    return r->length * r->breadth;
}

void changeLength(Rectangle *r, int l){
    r->length = l;
}

void changeBreadth(Rectangle *r, int b){
    r->breadth = b;
}

int main(){
    Rectangle r;
    
    initialize(&r, 10, 5);
    
    printf("Length: %d; Breadth: %d; Area: %d\n", r.length, r.breadth, area(&r));
    
    changeLength(&r, 20);

    printf("Length: %d; Breadth: %d; Area: %d\n", r.length, r.breadth, area(&r));

    return 0;
}