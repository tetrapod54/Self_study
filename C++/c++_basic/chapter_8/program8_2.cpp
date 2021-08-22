 #include <iostream>

 void put_str(const char s[]){

     for(int i=0; s[i];i++){
         std::cout << s[i];
     }
 }

 int main(void){

     char str[36];

     put_str("文字列：");
     std::cin >> str;

     put_str(str);
     std::cout << std::endl;
 }