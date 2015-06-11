#include <iostream>

//Test shallow copy
//Sally is a simple program that estimate the number of friends you have mad in your life given your age
class Sally{
public:
    int age;
    int * friends;
    Sally(int age){
      this->age = age;
      friends = new int[estimatefriends()];
   }
    Sally(const Sally & rhs){
       age = rhs.age;
       friends = new int[estimatefriends()];
      std::copy(rhs.friends, rhs.friends + estimatefriends(), friends);
   }
   ~Sally(){
       delete [] friends
   }
   int estimatefriends(){
       return int(90/age);
  }
  
};

int main(void){

   /**std::cout<<"Enter number of iteams"<<std::endl;

   int num;

   std::cin>>num;

   int arr[num];
   std::cout<<"An array of size "<<sizeof(arr);
   */
   std::cout<<"Testing copy constuctor"<<std::endl;
   
   Sally sauce(25);
   sauce.friends[0] = 25;
   {
      Sally gready = sauce;
   }
   if(sauce.friends[0]==25){
     std::cout<<"Deep copy of object..."<<std::endl;
   }
   else{
         std::cout<<"Shallow copy: "<<std::endl;
   }
}
