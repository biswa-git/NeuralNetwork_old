#pragma once

#include<InputLayer.hpp>
#include<HiddenLayer.hpp>
#include<OutputLayer.hpp>
class Model
{
public:
	Model();
	~Model();
	void SetInput(const Eigen::VectorXd&);
	void AddHiddenLayer(const size_t&, ACTIVATION_TYPE = ACTIVATION_TYPE::RELU_ACTIVATION);
	void AddOutputLayer(const size_t&, ACTIVATION_TYPE = ACTIVATION_TYPE::RELU_ACTIVATION);
	void Freeze();
	void ForwardPropagation();
private:
	std::vector<Layer> m_layer;
};
