#include <string>
#include <map>
#include <iostream>
#include <stdexcept>
#include <numeric>
template<typename K,typename V>
void print(const std::map<K,V>& m){
    //for(auto& i:m){
      for(std::pair<K,V> i:m){
        std::cout << i.first<<" \t "<<i.second << std::endl;

    };
}
template<typename K,typename V>
void summsi(std::map<K,V> m){
    int sum=0;
    for(std::pair<K,V> i:m){
        //std::cout<<i.second << std::endl;
        sum+= (int)i.second;
        
    };
    std::cout << sum << std::endl;
}

void read_map(std::map<std::string, int>& m){
std::string s;
int i = 0;
while (m.size()<10)
{
    std::cin >> s >> i;
    m.insert(std::make_pair(s,i));
}

}

int main(){
try{
std::map<std::string,int> msi;
msi["a"] =1;
msi["b"] = 2;
msi["abc"] = 3;
msi["dude"] = 4;
msi["McDs"] = 5;
msi["sprite"] = 6;
msi["do"] = 7;
msi["be"] = 8;
msi["bussin"] = 9;
msi["tho"] = 10;
msi["fr"] = 11;
print(msi);
//msi.erase(msi.begin(),msi.end());
//read_map(msi);
summsi(msi);
std::map<int,std::string> mis;
for(std::pair<std::string,int> a:msi){
        mis[a.second]=a.first;
    };
    print(mis);



}catch(std::exception& e){
    std::cerr << "exception: " << e.what() << std::endl;
    return 1;
}catch(...){
    std::cerr << "baj van" << std::endl;
    return 2;
}
};
