#include <Model.hpp>
int main(int argc, char const *argv[])
{
	Eigen::VectorXd input(3);
	input << 5,1,2;


	Model model;
	model.SetInput(input);
	model.AddHiddenLayer(3);
	model.AddHiddenLayer(7);
	model.AddOutputLayer(2);
	model.Freeze();

	model.ForwardPropagation();
	return 0;
}