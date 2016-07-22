
#include <vector>

class Data final {

public:
    using vectorType = std::vector<double>;
    using twoDVectorType = std::vector<std::vector<double>>;

    Data(int stateValues, int observables);

    ~Data() {};

public:
    int stateValues() const {
        return stateValues_;
    }

    int observables() const {
        return observables_;
    }

    vectorType& x() {
        return x_;
    }

    twoDVectorType& p() {
        return p_;
    }

    twoDVectorType& q() {
        return q_;
    }

    twoDVectorType& r() {
        return r_;
    }

    twoDVectorType& g() {
        return g_;
    }

    twoDVectorType& f() {
        return f_;
    }

    twoDVectorType& h() {
        return h_;
    }

    twoDVectorType ht() {
        return ht_;
    }

    twoDVectorType& ft() {
        return ft_;
    }

    twoDVectorType& pt() {
        return pt_;
    }

    vectorType& fx() {
        return fx_;
    }

    vectorType& hx() {
        return hx_;
    }

private:
    int stateValues_;
    int observables_;

    vectorType x_;

    twoDVectorType p_;
    twoDVectorType q_;
    twoDVectorType r_;

    twoDVectorType g_;

    twoDVectorType f_;
    twoDVectorType h_;

    twoDVectorType ht_;
    twoDVectorType ft_;
    twoDVectorType pt_;

    vectorType fx_;
    vectorType hx_;
};

