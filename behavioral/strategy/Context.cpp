//
// Created by mariocaster on 2/29/16.
//

#include "StrategyInterface.h"

class Context {
private:
    StrategyInterface *strategy_;
public:
    explicit Context(StrategyInterface *strategy): strategy_(strategy){}
    void setStrategy(StrategyInterface *strategy){
        strategy_ = strategy;
    }
    void execute() const {
        strategy_->execute();
    }
};