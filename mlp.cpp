include "mlp.h"
double frand()
{
        return (2.0*(double)rand()/RAND_MAX)-1.0;
}

//REturn a new perceptron object with the specified number of inputs (+1 for the bias).
//

Perceptron::Perceptron(int inputs, double bias)
{
        this->bias=bias;
        weights.resize(inputs+1);
        std::generate(weights.begin(),weights.end(),frand);
}


//Run the perceptron x is a vector with the input values
//
//
double Perceptron::run(std::vector<double> x)
{
        x.push_back(bias);
        double sum=std::inner_product(x.begin(),x.end(),weights.begin(),(double) 0.0);
        return sum;
}


void Perceptron::set_weights(std::vector<double> w_init)
{
        //w_init is a vector of double,organize it as you'd like
        //
        weights=w_init;
}


double Perceptron::sigmoid(double x)
{
        //return the output of the sigmoid function applied to x
        return 1.0/(1.0+exp(-x));


}
