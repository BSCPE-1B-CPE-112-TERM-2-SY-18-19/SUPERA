//**********************************IF THE ARRAY INDEX IS A PALINDROMIC PRIME, REPLACE THE INDEX'S ELEMENT WITH 143********************************************//

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
	class cpe1b{ //gagama ko ug class nga "cpe1b"
		public:
			long palindromic_prime(long x); //functions
			void exam(long num[1000],long size);  //functions
			
			long i,num,size; //declarations
			long rev,rem,bin,base,key,pdtemp,pdnum,count,j,temp,s,pdnumber,count1; //declarations
	};
int main() {
	long i,inp[1000],size; // declarations sa variables nga gigamit nako ani sa int main ra; local variables 
	cpe1b hazel; //gatawag ko sa akong class gamit ang hazel
		cout<<"INPUT:";  //mao nani process sa pag input ug elements
						size=0; //akong giset ug '0' kay para dili maglibog kung asa magsugod ug ihap
							for(i=0;;i++){ //for loop statement; infinite loop 
								cin>>inp[i];
									if(inp[i]==0) //if statement
												{
													break; // if input=0, then break
												}
						size++; //mao ni iteration para maihap kung pila ang giinput exlcluding '0'
										}
			hazel.exam(inp,size);	//gatawag ko sa function nga exam kay arun iperform ang final output; ang process naa sa ubos
		  }							//akoang gitawag ang input ug ang size para mao iyahang gamitun inag perform
	
	
	long cpe1b::palindromic_prime(long x) //nangita ko sa palindromic prime nga array index
{
		count=0; //giset nako into '0' kay mao ni basehan sa if statement sa ubos 
		num=x; // akong gisud ug num ang value sa x 
						for(j=2;j<num;j++){
							if(num%j==0)
							{
								count++;
							}
										  }
	if(count==0){ //if dili musud sa loo, then, count=0 and it is prime ; iyahang itest ang prime kung palindromic bah
		
			pdtemp=num;
			bin=0;
			base=1;
			
				       for(;pdtemp>0;){
							rem=pdtemp%2;
							bin=bin+(rem*base);
							base=base*10;
							pdtemp=pdtemp/2;
									  }
			key=bin;
			temp=0;
			rev=0;
				      for(;key!=0;){
							temp=key%10;
							key=key/10;
							rev=temp+(rev*10);
				
								   }
	
			if(rev==bin){
				
				return 1; //musud ani kung palindromic prime
						}
			else{
	
				return 0; //if dili palindromic prime
						}
				}
	else{
			
			return 0;
		}
}

	void cpe1b::exam(long num[1000],long size) //function para replace sa value sa kindex nga palindromic prime
{
		
			for(i=3;i<size;i++){ //gasugod ko sa 3 kay arun dili maapil ang ang '0' ug '1' kay masud man sila as prime, dapat sa 3 sugud
	
						if(palindromic_prime(i)==1){ //refer sa return value; if return 1, therefore, palindromic prime
			
								num[i]=143; //iyahang alisdan ug 143 ang element
	
													}
							   }

			for(i=0;i<size;i++){ //loop ni para print na sa final output 
				
					cout<<"index["<<i<<"] - "<<num[i]<<" "<<endl;
							   }
}

		

