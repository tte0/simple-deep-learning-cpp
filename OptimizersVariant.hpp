#ifndef OPTIMIZERSVARIANT_HPP
#define OPTIMIZERSVARIANT_HPP

#include <variant>
#include "Optimizers.h"

using OptimizerVariant = std::variant<optimizers::GradientDescent,
                                      optimizers::MomentumOptimizer,
                                      optimizers::AdamOptimizer,
                                      optimizers::RMSProp>;

#endif // OPTIMIZERSVARIANT_HPP