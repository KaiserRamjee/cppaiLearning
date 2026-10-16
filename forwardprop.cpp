#include <bits/stdc++.h>


double activation_calc(std::vector<double> i_n,std::vector<double> w_n,double bias)
{
    double tot=0; // not setting it to the bias yet in case i want to incorporate sum activattion function like a sigmoid or smth

    for(int i = 0; i< i_n.size();i++)
    {
        tot+= i_n[i] * w_n[i];
    }

    tot += bias;
    return tot;
}


int main()
{
    std::vector<double> input_neurons ={2,3};
    std::vector<std::vector<double>> weights = {{0.4,0.3},{0.7,0.9}};
    std::vector<double> bias = {0,0};

    std::cout << activation_calc(input_neurons, weights[0],bias[0]) + activation_calc(input_neurons, weights[1], bias[1]);
    return 0;
}

