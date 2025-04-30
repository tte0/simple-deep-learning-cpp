#include <vector>
#include "ActivationsVariant.hpp"
#include "InitializersVariant.hpp"
#include "ObjectivesVariant.hpp"
#include "OptimizersVariant.hpp"


class Layer{
private:
    std::vector<std::vector<double>> weights;
    std::vector<double> biases;
    OptimizerVariant optimizer;
    ActivationVariant activation_function;
    std::vector<std::vector<double>> activation_previous;
    std::vector<double> weighted_sum;
    std::vector<std::vector<double>> weight_gradient;
    std::vector<double> bias_gradient;
public:
    Layer(const size_t& _num_neurons, const size_t& _num_neurons_previous, const ActivationVariant& _activation_function, const InitializerVariant& _initialization, const OptimizerVariant& _optimizer_template){
        
    }

};

class Model{
private:
    std::vector<size_t> network_shape;
    std::vector<ActivationVariant> activations;
    InitializerVariant initialization;
    ObjectiveVariant objective;
    OptimizerVariant optimizer_template;
    std::vector<Layer> layers;
public:


};