#include<iostream>
using namespace std;

class calculator{
	public:
	void operation(int a,char operate,int b){
		if(operate== '*'){
			multiply(a,b);
		}
		else if(operate== '/'){
			divide(a,b);
		}
		else if(operate== '+'){
			addition(a,b);
		}
		else if(operate== '-'){
			substraction(a,b);
		}
		else if(operate== '%'){
			modulus(a,b);
		}
		else if(operate== '^'){
			power(a,b);
		}
		else if(operate== 'C' || operate == 'c'){
			combination(a,b);
		}
		else if(operate== 'P' || operate == 'p'){
			permutation(a,b);
		}
	}
	void multiply(int a, int b){
		value=a*b;
		printvalue();
	}
	void divide(int a, int b){
		value=a/b;
		printvalue();
	}
	void addition(int a, int b){
		value=a+b;
		printvalue();
	}
	void substraction(int a, int b){
		value=a-b;
		printvalue();
	}
	void modulus(int a, int b){
		value=a%b;
		printvalue();
	}
	void power (int a, int b){
		int x;
		for(x=1;x<=b;x++){
		value=value*x;
		}
		printvalue();
	}
	void combination(int a,int b){
        value = factorial(a)/(factorial(a-b)*factorial(b));
        printvalue();
    }
    void permutation(int a,int b){
        value = factorial(a)/factorial(a-b);
        printvalue();
    }
    void printvalue(){
        cout<<value<<endl;
    }

    int factorial(int a){
    	if(a==0 || a==1){
    		return 1;
		}
		else {
		return (a*factorial(a-1));
	}
};
	private:
	int a;
	int b;
	double value=1;
};

int main(){
	calculator calc;
	int i,j;
	char op;

	cin>>i>>op>>j;
	calc.operation(i, op, j);
};

