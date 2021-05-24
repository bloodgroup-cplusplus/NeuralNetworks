#include<iostream>
#include<random>
#include<ctime>
#include "mlp.h"
int main()
{
        srand(time(NULL));
        rand();

        std::cout<<"\n\n----Logic Gate Example And-----\n\n";
        Perceptron *p=new Perceptron(2);

        p->set_weights({10,10-15});//AND

        std::cout<<"Gate:"<<std::endl;

        std::cout<<p->run({0,0})<<std::endl;

        std::cout<<p->run({0,1})<<std::endl;

        std::cout<<p->run({1,0})<<std::endl;


        std::cout<<p->run({1,1})<<std::endl;

        return 0;
}

