#include<Activation.hpp>
#include<cmath>

Activation::Activation()
{
}

Activation::~Activation()
{
}

void Activation::Linear(Eigen::VectorXd& input)
{

	std::cout << "--------------Applying Linear activation--------------" << std::endl;
}

void Activation::ReLU(Eigen::VectorXd& input)
{
	std::cout << "--------------Applying ReLU activation--------------" << std::endl;
	for (auto i = 0; i < input.size(); i++)
	{
		input(i) = std::max(0.0, input(i));
	}
}

void Activation::GeLU(Eigen::VectorXd& input)
{
	std::cout << "--------------Applying GeLU activation--------------" << std::endl;
	for (auto i = 0; i < input.size(); i++)
	{
		input(i) = 0.5*input(i)*(1.0+tanh(sqrt(2/EIGEN_PI)*(input(i)+ 0.044715*pow(input(i),3))));
	}
}

void Activation::Sigmoid(Eigen::VectorXd& input)
{

	std::cout << "--------------Applying Sigmoid activation--------------" << std::endl;
	for (auto i = 0; i < input.size(); i++)
	{
		input(i) = 1.0 / (1.0 + exp(-input(i)));
	}
}
