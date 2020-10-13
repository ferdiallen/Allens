#include <iostream>
#include <thread>
using namespace std::literals::chrono_literals;
static bool finisher_work = false;
void print(){
    while(!finisher_work){
        for(int i=1; i<=10; i++){
            if(!finisher_work){
            std:: cout << i << " Seconds" << std::endl;
            std::this_thread::sleep_for(1s);
            }else{
                exit;
            }
        }
         
    }
    }
int main(){

std::thread worker(print);
std::cin.get();
finisher_work=true;
std::cout << "Worked\n";
std::this_thread::sleep_for(2s);
worker.join();

}