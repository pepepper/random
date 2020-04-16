#include <vector>
#include <random>
#include <string>
#include <iostream>

int main(){
        bool cont=true;
        std::vector<std::string> matrix={"マ","ト","リ","ッ","ク","ス"};
        std::string output,input;
        std::random_device seed_gen;
        std::default_random_engine engine(seed_gen());
        std::uniform_int_distribution<> dist(0, matrix.size()-1);
        while(cont){
        output="";
                for(unsigned int i=0;i<matrix.size();i++){
                        output+=matrix[dist(engine)];
                }
                std::cout<<output<<std::endl;
                bool valid=false;
                while(!valid){
                        std::cout<<"まだ生成する? (y/n) ";
                        std::cin>>input;
                        if(input.find("y")!=std::string::npos){
                                cont=true;
                                valid=true;
                        }else if(input.find("n")!=std::string::npos){
                                cont=false;
                                valid=true;
                        }else valid=false;
                }
        }
return 0;
}
