#include <Model.hpp>
int main(int argc, char const *argv[])
{
	Eigen::VectorXd input(4);
	input << -10,1,10,20;

	Model model;
	model.SetInput(input);
	model.AddHiddenLayer(8, ACTIVATION_TYPE::GELU_ACTIVATION);
	model.AddHiddenLayer(8, ACTIVATION_TYPE::GELU_ACTIVATION);
	model.AddOutputLayer(2, ACTIVATION_TYPE::LINEAR_ACTIVATION);
	model.Freeze();

	model.ForwardPropagation();
	return 0;
}