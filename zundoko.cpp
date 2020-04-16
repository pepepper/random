#include <vector>
#include <random>
#include <string>
#include <iostream>

int main(){
        std::vector<std::string> zundoko={"ズン","ドコ"};
        std::string output;
        std::random_device seed_gen;
        std::default_random_engine engine(seed_gen());
        std::uniform_int_distribution<> dist(0, zundoko.size()-1);
        do{
                for(unsigned int i=0;i<zundoko.size();i++){
                        output+=zundoko[dist(engine)];
                }
        }while(output.find("ズンズンズンズンドコ")==std::string::npos);
        output+="キ!ヨ!シ!";
        std::cout<<output<<std::endl;
        return 0;
}
