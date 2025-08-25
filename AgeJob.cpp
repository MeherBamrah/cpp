// Take age from user and decide accordingly-
//1. if age <18:  print = not eligible for job
//2. if age >=18:  print = eligible for job
//3. if age >=55 and age <=57:   print = elible for job, but retirement soon
//4. of age >57:   print = retirement time

include<bits/stdc++.h>
using namespace std;
int main(){
  int age;
  cin>>age;

  if (age<18){
      cout<<"NOT Eligible for JOB!";
  }
  else if(age <=57){
      cout<<"Eligible for JOB!";
      if(age>=55){
          cout<<="Retirement Soon";
      }
  }
  else{
      cout<<"Retirement Time !!";
  }
return 0;
}
