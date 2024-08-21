#include<iostream>

float addition(float num1, float num2){
    return num1 + num2;
}

float division(float num1, float num2){
    return num1/num2;
}

void print_result(std::string result_type, float result_value){
    std::cout<<result_type<<" result : \t"<<result_value<<"\n";
}

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