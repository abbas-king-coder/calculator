#include<iostream>
using namespace std;
int main()
{


	float a,b;
	bool  inv;
	char op,again;
	{
	do
	{
	
	cout<<"im a basic arthematic calculator\n";
	cout<<"enter number\n";
	cin>>a;
	cout<<"enter arthemetic operator\n";
	cin>>op;
	cout<<"enter number\n";
	cin>>b;
	switch(op)
	{
	 case'-':
	 	cout<<a<<" - "<<b<<"="<<a-b<<endl;
	 	break;
	 	case'+':
	 		cout<<a<<" + "<<b<<" = "<<a+b<<endl;
	 		break;
	 		case'/':
	 			cout<<a<<" / "<<b<<" = "<<a/b<<endl;
	 			break;
	 			case'*':
	 				cout<<a<<" * "<<b<<" = "<<a*b<<endl;
	 				break;
	 			
	 				default:
	 					inv=true;
	 					cout<<"invalid operator\n";
	 				}
	 					if(!inv)
	 					{cout<<"you got your answere\n";
						 }
	 			
	 			   cout<<"do you want to perform another operation press y/n \n";
	 			   cin>>again;}
                 	while(again=='Y'||again=='y');
				   
	 		
	 		}
	 			
	 			
	 			

}
