#pragma once
#include<map>
#include<vector>
#include<string>
#include<Eigen/Core>
#include<iostream>

enum class LAYER_TYPE
{
	INPUT_LAYER,
	HIDDEN_LAYER,
	OUTPUT_LAYER
};

enum class ACTIVATION_TYPE
{
	LINEAR_ACTIVATION,
	RELU_ACTIVATION,
	GELU_ACTIVATION,
	SIGMOID_ACTIVATION
};
