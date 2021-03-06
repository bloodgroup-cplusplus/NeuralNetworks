#pragma once
#include<algorithm>
#include<vector>
#include<time.h>
#include<numeric>
#include<cmath>
#include<random>
#include<iostream>

class Perceptron
{
        public:
                std::vector<double> weights;
                double bias;
                Perceptron(int inputs, double bias=1.0);
                double run(std::vector<double>x);
                void set_weights(std::vector<double> w_init);
                double sigmoid(double x);
};
                                                                                                                                             
