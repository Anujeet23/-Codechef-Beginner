#include<iostream>
using namespace std;

int BMI(int m,int h){
      
      int BMI = m/(h*h);

      if(BMI<=18){
          return 1;
      }
      else if(BMI>=19 && BMI<=24){
          return 2;
      }
      else if(BMI>=25 && BMI<=29){
          return 3;
      }
      else{
          return 4;
      }
}


int main(){
    int t;
    cin >> t;
    
    for(int i=0; i<t; i++){
     int height,mass;
     cin >> mass >> height;
     
     int result = BMI(mass,height);

     cout << result << endl;
}
}