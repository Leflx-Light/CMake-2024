#include<iostream>

float addition(float, float);
float division(float, float);
void print_result(std::string, float);


int main(){
     float first_no, second_no, result_add, result_div;
     std::cout<<"Enter first Number \t";
     std::cin>>first_no;
     std::cout<<"Enter second Number \t";
     std::cin>>second_no;

     result_add = addition(first_no,second_no);
     result_div = division(first_no, second_no);

    //  std::cout<<"Addition result : \t"<<result_add<<"\nDivision result:\t"<<result_div<<"\n";''
    print_result("Addition",result_add);
    print_result("Division",result_div);
     return 0;
}