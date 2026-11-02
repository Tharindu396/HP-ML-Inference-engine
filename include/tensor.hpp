#include <cstddef>
#include <vector>
using namespace std;
class Tensor
{
private:
    vector<size_t> shape;
    vector<double> data;
    size_t calculate_size() const;
    size_t calculate_index(vector<size_t> indices) const;

public:
    Tensor(
        vector<size_t> shape, vector<double> data);
    const vector<size_t> &get_shape() const;
}
