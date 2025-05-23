#pragma once 
#include "AbsImplicitGeometry.hpp"
#include "AbsOperation.hpp"
namespace implicit
{
    class Difference : public AbsOperation
    {
    public:
        Difference(ImplicitGeometryPtr operand1,
            ImplicitGeometryPtr operand2) ;

        bool inside(double x, double y) const override ;
    };
} // namespace implicit
