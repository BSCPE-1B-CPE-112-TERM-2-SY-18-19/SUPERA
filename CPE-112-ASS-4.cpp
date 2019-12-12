#include <iostream>


using namespace std;
	class caryl{ 
		public:
			long wasteful_number(long num); 
			void exam(long num[1000],long size);
			void sorting_descending(long num[1000],long size);
			long binary(long x);
			
			long i,num[100],size,num2; 
			long factor,digit,temp1,j,n,x,t,rem;
			long bin, pdtemp, rem2, base;
	};
int main() 
	{
		long i,inp[1000],size; 
		caryl hazel; 
		cout<<"INPUTS: ";  
		size=0; 
		for(i=0;;i++){ 
			cin>>inp[i];
			if(inp[i]==0){
				break; 
			}
			size++; 
		}
	cout<<"SIZE: "<<size<<endl;
	hazel.exam(inp,size);
	
	cout<<"BINARY: ";
	for (i=0; i<size; i++)
		{
			hazel.binary(inp[i]);
		}					
	}						
	
	long caryl::wasteful_number(long num2) {	
	n=num2;
	x=n;
	digit=0;
	for (;n!=0;)
		{
		n=n/10;
		digit++;
		}
	t=0;
	j=2;
	factor=0;
	for (;x!=0;)
		{
		if (x%j==0)
			{
			x=x/j;
			rem=j;
			t++;
			factor++;
			if (x==1)
				{
				break;
				}
			}
		else
			{
			j++;
			}
		}
	if(factor>digit){	
			return 1; 
		}else{
			return 0; 
		}
	}
	void caryl::exam(long num[1000],long size){
		caryl hazel;
		if(hazel.wasteful_number(size)==1){
			cout<<" - WASTEFUL NUMBER"<<endl;
			cout<<"Sorted: ";
			hazel.sorting_descending(num,size);
			cout<<endl;
		}
		else
		{
			cout<<" - NOT WASTEFUL NUMBER "<<endl;
			cout<<"Not Sorted: ";
			for(i=0;i<size;i++)
				{
					cout<<" "<<num[i];
				}
				cout<<endl;
		}
}

	void caryl::sorting_descending(long num[1000],long size)
		{
			long temp1;
			for(i=0;i<size;i++)
				{
					for(j=i+1;j<size;j++)
						{
							if(num[i]<num[j])
								{
									temp1=num[i];
									num[i]=num[j];
									num[j]=temp1;
								}
						}		
				cout<<" "<<num[i];
			}
		}
		
		long caryl::binary(long x){
				pdtemp = x;
				bin=0;
				base = 1;
				cout<<endl;
				for (;pdtemp>0;){
					rem2=pdtemp%2;
					bin=bin+rem2*base;
					base = base*10;
					pdtemp=pdtemp/2;
				}
			cout<<bin<<endl;
}

		
