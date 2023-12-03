// 1. Write a function for arithmetic operators(+,-,*,/)
void arthmetic(int x,int y){
    cout<<"addition :"<<x+y<<endl;
    cout<<"subtraction :"<<x-y<<endl;
    cout<<"multiplication :"<<x*y<<endl;
    cout<<"division :"<<x/y<<endl;
}
int main(){
    int x,y;
    cin>>x>>y;
    arthmetic(x,y);
}



//2. Write a method for increment and decrement operators(++, --)
int post_inc(int x){
    int x=5;
    cout<<"before post increment: "<<x<<endl; //5
    int temp=x++;
    cout<<"the value stored by temp: "<<temp<<endl; //5
    cout<<"after post increment: "<<x<<endl; //6
}

int pre_inc(int x){
    int x=5;
    cout<<"before pre increment: "<<x<<endl; //5
    int temp=++x;
    cout<<"the value stored by temp: "<<temp<<endl; //6
    cout<<"after pre increment: "<<x<<endl; //6
}

int post_dec(int y){
    int y=5;
    cout<<"before post decrement: "<<y<<endl; //5
    int temp=y--;
    cout<<"the value stored by temp: "<<temp<<endl; //5
    cout<<"after post decrement: "<<y<<endl; //4
}

int pre_dec(int y){
    int y=5;
    cout<<"before pre decrement: "<<y<<endl; //5
    int temp=--y;
    cout<<"the value stored by temp: "<<temp<<endl; //4
    cout<<"after pre decrement: "<<y<<endl; //4
}



//3. Write a program to find the two numbers equal or not.
int main(){
    int x=10,y=20;
    cin>>x>>y;
    if(x==y) cout<<"numbers are equal."<<endl;
    else cout<<"numbers are not equal."<<endl;
}




//4. Program for relational operators (<,<==, >, >==)
int main(){
    int x=10,y=20;
    cin>>x>>y;
    if(x<=y) cout<<"x is less or equal to y."<<endl;
    else if(x>=y) cout<<"x is greater than or equal to y."<<endl;
    else if(x>y) cout<<"x is greater than y."<<endl;
    else if(x<y) cout<<"x is less than y."<<endl;
}





// 5. Print the smaller and larger number
int main() {
    double num1, num2;
    cin >> num1 >> num2;

    double smaller = (num1 < num2) ? num1 : num2;
    double larger = (num1 > num2) ? num1 : num2;

    cout << "The smaller number is: " << smaller <<endl;
    cout << "The larger number is: " << larger <<endl;
}